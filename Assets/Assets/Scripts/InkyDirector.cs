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
        //Sobe a tela
        textScroll.value = 1;

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
            currentButtonsSet.GetComponent<ButtonSupportScript>().buttonsList[i].GetComponent<ButtonScript>().objectMana.SetActive(false);
            currentButtonsSet.GetComponent<ButtonSupportScript>().buttonsList[i].GetComponent<ButtonScript>().manaCost = 0;
            currentButtonsSet.GetComponent<ButtonSupportScript>().buttonsList[i].GetComponent<ButtonScript>().runeImage.color = new Color(0, 0, 0, 0);
            currentButtonsSet.GetComponent<ButtonSupportScript>().buttonsList[i].GetComponent<ButtonScript>().objectDox.SetActive(false);
            currentButtonsSet.GetComponent<ButtonSupportScript>().buttonsList[i].GetComponent<ButtonScript>().objectRoll.SetActive(false);
            //Escreve texto e re-ativa Addons
            writeButton(currentButtonsSet.GetComponent<ButtonSupportScript>().buttonsList[i], _inkStory.currentChoices[i].text);
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

    void writeButton(GameObject button, string optionText)
    {
        if (!optionText.Contains("_"))
        {
            button.GetComponentInChildren<TextMeshPro>().text = optionText;
        }

        else
        {
            string[] splatText;

            splatText = optionText.Split(new char[] { '_' });
            //Escreve texto
            button.GetComponentInChildren<TextMeshPro>().text = splatText[splatText.Length-1];
            
            for (int i = 0; i< splatText.Length-1; i++)
            {
                //Procura runas
                if (writeRune(splatText[i].ToLower()) != null)
                {
                    button.GetComponent<ButtonScript>().runeImage.color = new Color(1, 1, 1, 1);
                    button.GetComponent<ButtonScript>().runeImage.sprite = writeRune(splatText[i].ToLower());
                }

                //Procura rolagens
                else if (splatText[i].Contains("roll"))
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
                        button.GetComponent<ButtonScript>().objectMana.SetActive(true);
                        button.GetComponent<ButtonScript>().manaText.text = (splatText[i] + " Mana");
                    }
                }

            }
        }
    }

    Sprite writeRune(string runeString)
    {
        switch (runeString)
        {
            case "death":
                return runeList[0];

            case "fate":
                return runeList[1];

            case "forces":
                return runeList[2];

            case "life":
                return runeList[3];

            case "matter":
                return runeList[4];

            case "mind":
                return runeList[5];

            case "prime":
                return runeList[6];

            case "space":
                return runeList[7];

            case "spirit":
                return runeList[8];

            case "time":
                return runeList[9];

            case "acanthus":
                return runeList[10];

            case "mastigos":
                return runeList[11];

            case "moros":
                return runeList[12];

            case "obrimos":
                return runeList[13];

            case "thyrsus":
                return runeList[14];

            default:
                Debug.Log("writeRune defaulted");
                return null;
        }
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
