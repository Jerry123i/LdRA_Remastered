using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Ink.Runtime;

public class InkyDirector : MonoBehaviour {

    Story _inkStory;
    public TextAsset inkAsset;
    public TextMeshProUGUI screenText;
    public GameObject inputField;

    public List<Sprite> runeList;
    public List<GameObject> allButtonSets;

    public Scrollbar textScroll;
    public ContentSizeFitter sizeFit;
    
    void Awake()
    {
        _inkStory = new Story(inkAsset.text);

        while (_inkStory.canContinue)
        {
            screenText.text = _inkStory.Continue();
        }

        UpdateButtons();

    }
    	
    public void ChoseANumber(int number)
    {
        _inkStory.ChooseChoiceIndex(number);        

        //Limpa o texto
        sizeFit.enabled = false;
        screenText.text = "";
        textScroll.value = 1.0f;

        while (_inkStory.canContinue)
        {
            //Verifica se pede rolagem
            if (CheckFirstTag("roll"))
            {
                int r;
                r = Random.Range(1, 101);
                _inkStory.variablesState["rollResult"] = r;
            }
            
            screenText.text += _inkStory.Continue() + System.Environment.NewLine;
                        
        }

        sizeFit.enabled = true;
        textScroll.value = 1.0f;


        //Verifica se vai ter input de nome        
        if (CheckFirstTag("input"))
        {
            allButtonSets.ForEach(DeactivateThing);
            inputField.SetActive(true);
        }
        else
        {
            UpdateButtons();
        }

        //Sobe a tela
        textScroll.value = 1.0f;

    }

    public void UpdateButtons()
    {
        GameObject currentButtonsSet;
        currentButtonsSet = allButtonSets[0];

        allButtonSets.ForEach(DeactivateThing);
        inputField.SetActive(false);

        //Define qual conjunto de botões usar baseado no numero de opções        
        if (_inkStory.currentChoices.Count == 1)
        {
            currentButtonsSet = allButtonSets[1];
        }
        else
        {
            for (int i = 0; i< allButtonSets.Count; i++)
            {
                if(allButtonSets[i].GetComponent<ButtonSupportScript>().buttonsList.Count >= _inkStory.currentChoices.Count)
                {
                    if(!(currentButtonsSet.GetComponent<ButtonSupportScript>().buttonsList.Count >= _inkStory.currentChoices.Count))
                    {
                        currentButtonsSet = allButtonSets[i];
                    }
                }
            }
        }

        currentButtonsSet.SetActive(true);
        currentButtonsSet.GetComponent<ButtonSupportScript>().buttonsList.ForEach(DeactivateThing);

        //Loop que ativa os botões
        for (int i = 0; i < _inkStory.currentChoices.Count; i++)
        {
            //Ativa o botão
            currentButtonsSet.GetComponent<ButtonSupportScript>().buttonsList[i].SetActive(true);
            //Desativa Addons
            currentButtonsSet.GetComponent<ButtonSupportScript>().buttonsList[i].GetComponent<ButtonScript>().objectMana.gameObject.SetActive(false);
            currentButtonsSet.GetComponent<ButtonSupportScript>().buttonsList[i].GetComponent<ButtonScript>().manaCost = 0;
            currentButtonsSet.GetComponent<ButtonSupportScript>().buttonsList[i].GetComponent<ButtonScript>().runeImages.ForEach(DeactivateThing);
            currentButtonsSet.GetComponent<ButtonSupportScript>().buttonsList[i].GetComponent<ButtonScript>().objectDox.SetActive(false);
            currentButtonsSet.GetComponent<ButtonSupportScript>().buttonsList[i].GetComponent<ButtonScript>().objectRoll.SetActive(false);
            //Escreve texto e re-ativa Addons
            WriteButton(currentButtonsSet.GetComponent<ButtonSupportScript>().buttonsList[i], _inkStory.currentChoices[i].text);
        }
        
    }

    public void EnterInput()
    {
        if (_inkStory.currentTags[0] == null)
        {
            Debug.Log("enterInput called and tag -input- not found");
        }

        else if(_inkStory.currentTags[0] == "input")
        {
            _inkStory.variablesState[_inkStory.currentTags[1]] = inputField.GetComponent<TMP_InputField>().text;

            if(_inkStory.currentTags[1] == "nomeCompleto")
            {
                CleanNames(_inkStory.variablesState[_inkStory.currentTags[1]].ToString());
            }

        }        
    }

    void CleanNames(string inputName)
    {
        string[] nomes;

        nomes = inputName.Split(new char[] { ' ' });
        
        _inkStory.variablesState["nomeCurto"] = nomes[0];
                
    }

    void WriteButton(GameObject button, string optionText)
    {

        

        if (!optionText.Contains("_"))
        {
            button.GetComponent<ButtonScript>().textoOpcao.text = optionText;
        }

        else
        {
            string[] splatText;

            splatText = optionText.Split(new char[] { '_' });
            //Escreve texto
            button.GetComponent<ButtonScript>().textoOpcao.text = splatText[splatText.Length-1];
            
            for (int i = 0; i< splatText.Length-1; i++)
            {
                //Procura runas
                WriteRune(splatText[i].ToLower(), button);

                //Procura rolagens
                if (splatText[i].Contains("roll"))
                {
                    string numbers;

                    button.GetComponent<ButtonScript>().objectRoll.SetActive(true);
                    Debug.Log("Antes do remove:"+splatText[i]);
                    numbers = splatText[i].Replace("roll","");
                    Debug.Log("Isso deveria ser apenas um numero:"+numbers);
                    button.GetComponent<ButtonScript>().rollNumber.text = (numbers + "%");
                    button.GetComponent<ButtonScript>().clockRoll.fillAmount = int.Parse(numbers) / 100.0f;
                }

                //Procura paradoxo
                else if (splatText[i].Contains("dox"))
                {
                    button.GetComponent<ButtonScript>().objectDox.SetActive(true);
                    splatText[i] = splatText[i].Replace("dox", "");
                    Debug.Log(splatText[i]);
                    button.GetComponent<ButtonScript>().doxNumber.text = (splatText[i] + "%");
                    button.GetComponent<ButtonScript>().clockDox.fillAmount = int.Parse(splatText[i]) / 100.0f;
                }

                //Procura mana
                else if (splatText[i].Contains("mana"))
                {                    
                    splatText[i] = splatText[i].Replace("mana", "");
                    if (splatText[i] != "0")
                    {
                        button.GetComponent<ButtonScript>().manaCost = int.Parse(splatText[i]);
                        button.GetComponent<ButtonScript>().objectMana.gameObject.SetActive(true);
                        button.GetComponent<ButtonScript>().objectMana.manaCost.text = splatText[i];
                    }
                }

            }
        }
    }

    void WriteRune(string runeString, GameObject button)
    {
        List<GameObject> runes;
        runes = button.GetComponent<ButtonScript>().runeImages;

        switch (runeString)
        {
            case "death":
                FindByNameInList(runes, "runeDeath").SetActive(true);
                break;

            case "fate":
                FindByNameInList(runes, "runeFate").SetActive(true);
                break;

            case "forces":
                FindByNameInList(runes, "runeForces").SetActive(true);
                break;

            case "life":
                FindByNameInList(runes, "runeLife").SetActive(true);
                break;

            case "matter":
                FindByNameInList(runes, "runeMatter").SetActive(true);
                break;

            case "mind":
                FindByNameInList(runes, "runeMind").SetActive(true);
                break;

            case "prime":
                FindByNameInList(runes, "runePrime").SetActive(true);
                break;

            case "space":
                FindByNameInList(runes, "runeSpace").SetActive(true);
                break;

            case "spirit":
                FindByNameInList(runes, "runeSpirit").SetActive(true);
                break;

            case "time":
                FindByNameInList(runes, "runeTime").SetActive(true);
                break;

            case "acanthus":
                FindByNameInList(runes, "runeAcanthus").SetActive(true);
                break;

            case "mastigos":
                FindByNameInList(runes, "runeMastigos").SetActive(true);
                break;

            case "moros":
                FindByNameInList(runes, "runeMoros").SetActive(true);
                break;

            case "obrimos":
                FindByNameInList(runes, "runeObrimos").SetActive(true);
                break;

            case "thyrsus":
                FindByNameInList(runes, "runeThyrsus").SetActive(true);
                break;

            default:
                Debug.Log("writeRune defaulted");
                break;
        }
    }

    public GameObject FindByNameInList(List<GameObject> lista , string name)
    {
        for (int i = 0; i < lista.Count; i++)
        {
            if(lista[i].name == name)
            {
                return lista[i];
            }
        }

        return null;

    }

    public void DeactivateThing(GameObject thing)
    {
        thing.SetActive(false);
    }

    bool CheckFirstTag(string tag)
    {
        if (_inkStory.currentTags.Count > 0)
        {
            Debug.Log("First Tag=" + _inkStory.currentTags[0]);
            if (_inkStory.currentTags[0] == tag)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
}
