using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BolinhaDeVidaScript : MonoBehaviour {

    public Image doxOverlay;
    public Image bolinha;

    private void Start()
    {
        bolinha = this.GetComponent<Image>();
    }

}
