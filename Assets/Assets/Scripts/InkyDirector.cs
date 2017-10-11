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
    GameObject currentButtonsSet;

    public Scrollbar textScroll;
    public ContentSizeFitter sizeFit;

    public CharInfoScript displayInfo;
    
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
        SpendMana(currentButtonsSet.GetComponent<ButtonSupportScript>().buttonsList[number].GetComponent<ButtonScript>().manaCost);
        


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
        currentButtonsSet = allButtonSets[0];

        allButtonSets.ForEach(DeactivateThing);
        inputField.SetActive(false);

        DisplayLifeAndMana();
        DisplayPlayerRune();

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

        DisplayName();
    }

    void CleanNames(string inputName)
    {
        string[] nomes;

        nomes = inputName.Split(new char[] { ' ' });
        
        _inkStory.variablesState["nomeCurto"] = nomes[0];
                
    }

    void WriteButton(GameObject button, string optionText)
    {
        button.GetComponent<ButtonScript>().textoOpcao.text = "";

        if (!optionText.Contains("_"))
        {
            button.GetComponent<ButtonScript>().textoOpcao.text = optionText;
        }

        else
        {
            string[] splatText;

            splatText = optionText.Split(new char[] { '_' });
            
            for (int i = 0; i< splatText.Length-1; i++)
            {
                //Procura runas
                WriteRune(splatText[i].ToLower(), button);

                //Procura rolagens
                if (splatText[i].Contains("roll"))
                {
                    string numbers;
                    
                    numbers = splatText[i].Replace("roll","");
                    button.GetComponent<ButtonScript>().textoOpcao.text = ("[C:" + numbers + "%]");
                   
                }

                //Procura paradoxo
                else if (splatText[i].Contains("dox"))
                {                    
                    splatText[i] = splatText[i].Replace("dox", "");
                    button.GetComponent<ButtonScript>().textoOpcao.text = ("[P:" + splatText[i] + "%]");
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
            //Escreve texto
            button.GetComponent<ButtonScript>().textoOpcao.text += " " + splatText[splatText.Length - 1];
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

    public void DisplayName()
    {
        displayInfo.displayName.text = _inkStory.variablesState["nomeCurto"].ToString();
    }

    public void DisplayPlayerRune()
    {
        if((int)_inkStory.variablesState["path"] >= 0)
        {
            string runeName;

            switch ((int)_inkStory.variablesState["path"])
            {
                case 0:
                    runeName = "runeAcanthus";
                    break;

                case 1:
                    runeName = "runeMastigos";
                    break;

                case 2:
                    runeName = "runeMoros";
                    break;

                case 3:
                    runeName = "runeObrimos";
                    break;

                case 4:
                    runeName = "runeThyrsus";
                    break;

                default:
                    runeName = " ";
                    break;
            }

            displayInfo.displayRune.sprite = FindByNameInList(allButtonSets[0].GetComponent<ButtonSupportScript>().buttonsList[0].GetComponent<ButtonScript>().runeImages, runeName).GetComponent<Image>().sprite;
            displayInfo.displayRune.color = new Color(1, 1, 1, 0.37f);

        }
    }

    public void DisplayLifeAndMana()
    {      
        for(int i = 0; i < displayInfo.manaBar.Count; i++)
        {
            if (i+1 <= (int)_inkStory.variablesState["mana"])
            {
                displayInfo.manaBar[i].color = displayInfo.manaOnColor;
            }
            else
            {
                displayInfo.manaBar[i].color = displayInfo.manaOffColor;
            }
        }

        for (int i = 0; i<displayInfo.lifeBar.Count; i++)
        {
            if(i+1 <= (int)_inkStory.variablesState["danoDox"] + (int)_inkStory.variablesState["dano"])
            {
                displayInfo.lifeBar[i].bolinha.color = displayInfo.lifeOffColor;
            }
            else
            {
                displayInfo.lifeBar[i].bolinha.color = displayInfo.lifeOnColor;
            }

            if(i + 1 <= (int)_inkStory.variablesState["danoDox"])
            {
                displayInfo.lifeBar[i].doxOverlay.enabled = true;
                displayInfo.lifeBar[i].doxOverlay.sprite = displayInfo.doxSprite;
            }

            else
            {
                displayInfo.lifeBar[i].doxOverlay.enabled = false;
            }


        }

    }

    void SpendMana(int n)
    {
        _inkStory.variablesState["mana"] = (int)_inkStory.variablesState["mana"] - n;
    }

}
