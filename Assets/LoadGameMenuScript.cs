using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;

public class LoadGameMenuScript : MonoBehaviour
{

    public List<SaveButtonScript> botoes;
    public GameObject image;
    public List<Sprite> runes;

    private void Awake()
    {

    }

    private void Start()
    {
        UpdateButtons();
    }

    public void UpdateButtons()
    {
        for (int i = 0; i < 6; i++)
        {
            if (File.Exists(Application.persistentDataPath + "/playerInfo" + (i + 1).ToString() + ".dat"))
            {
                BinaryFormatter bf = new BinaryFormatter();
                FileStream file = File.Open(Application.persistentDataPath + "/playerInfo" + (i + 1).ToString() + ".dat", FileMode.Open);
                SaveData data = (SaveData)bf.Deserialize(file);
                botoes[i].saveData = data;
                if (data.name == " ")
                {
                    botoes[i].text.text = "[Sem Nome]";
                }
                else
                {
                    botoes[i].text.text = data.name;
                }

                botoes[i].imge.enabled = true;
                botoes[i].imge.sprite = ReturnRuneImage(data.tower);

                file.Close();
            }
            else
            {
                botoes[i].text.text = "Vazio";
                botoes[i].imge.enabled = false;
            }
        }
    }

    Sprite ReturnRuneImage(int x)
    {
        if (x >= 0)
        {
            return runes[x];

        }
        else
        {
            return runes[5];
        }

    }
}
