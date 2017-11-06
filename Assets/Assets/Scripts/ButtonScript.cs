using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ButtonScript : MonoBehaviour {

    public List<GameObject> runeImages;

    public GameObject objectRoll;
    public GameObject objectDox;
    public ManaObjectScript objectMana;

    public TextMeshProUGUI textoOpcao;

    public int manaCost;

    /*[HideInInspector]
    public Image clockRoll, clockDox;
    [HideInInspector]
    public TextMeshProUGUI rollNumber, doxNumber;    */

    // Use this for initialization
    void Awake () {

        /*clockRoll = objectRoll.GetComponent<Image>();
        rollNumber = objectRoll.GetComponentInChildren<TextMeshProUGUI>();

        clockDox = objectDox.GetComponent<Image>();
        doxNumber = objectDox.GetComponentInChildren<TextMeshProUGUI>();*/

	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
