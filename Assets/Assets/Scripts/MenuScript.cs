using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Ink.Runtime;
using System;
using System.Runtime.Serialization.Formatters.Binary;
using System.IO;

public class MenuScript : MonoBehaviour {

    public GameObject loadMenu;
    public GameObject menuMenu;
    public GameObject instrucoes;
    public GameObject canvas;
    
    private void Awake()
    {
        //DontDestroyOnLoad(this.gameObject);
    }
    
    public void OpenLoadMenu()
    {
        canvas.SetActive(true);
        menuMenu.SetActive(false);
        loadMenu.SetActive(true);
        loadMenu.GetComponent<LoadGameMenuScript>().UpdateButtons();
    }

    public void OpenInstrucoes()
    {
        instrucoes.SetActive(true);
    }

    public void OpenMenuMenu()
    {
        canvas.SetActive(true);
        loadMenu.SetActive(false);
        menuMenu.SetActive(true);
    }

    public void CloseMenu()
    {
        canvas.SetActive(false);
    }

    public void ReturnToMenu()
    {
        SceneManager.LoadScene("menu");
    }

    public void StartGame(int loadIndicator)
    {
        PlayerPrefs.SetInt("loadIndicator", loadIndicator);
        SceneManager.LoadScene("main_model");        
    }

    public void AutoSaveGame(Story storyToSave)
    {
        BinaryFormatter bf = new BinaryFormatter();
        FileStream file = File.Create(Application.persistentDataPath + "/playerInfo0.dat");

        SaveData data = new SaveData();
        data.name = (string)storyToSave.variablesState["nomeCurto"];
        data.tower = (int)storyToSave.variablesState["path"];
        data.jsonSave = storyToSave.state.ToJson();

        Debug.Log(Application.persistentDataPath + "/playerInfo0.dat");

        bf.Serialize(file, data);
        file.Close();
    }

    public void SaveGame(int saveNumber)
    {
        Debug.Log("Saving Into File " + saveNumber.ToString());

        if (File.Exists(Application.persistentDataPath + "/playerInfo" + saveNumber.ToString() + ".dat"))
        {
            File.Delete(Application.persistentDataPath + "/playerInfo" + saveNumber.ToString() + ".dat");
        }

        File.Copy(Application.persistentDataPath + "/playerInfo0.dat", Application.persistentDataPath + "/playerInfo" + saveNumber.ToString() + ".dat");

        loadMenu.GetComponent<LoadGameMenuScript>().UpdateButtons();
    }

    public void LoadGame(Story storyToLoad, int n)
    {
        if(File.Exists(Application.persistentDataPath + "/playerInfo" + n.ToString() + ".dat"))
        {
            BinaryFormatter bf = new BinaryFormatter();
            FileStream file = File.Open(Application.persistentDataPath + "/playerInfo" + n.ToString() + ".dat", FileMode.Open);
            SaveData data = (SaveData)bf.Deserialize(file);
            storyToLoad.state.LoadJson(data.jsonSave);

            file.Close();

        }
    }
       

}

[Serializable]
public class SaveData
{
    public string name;
    public int tower;
    public string jsonSave;
}

