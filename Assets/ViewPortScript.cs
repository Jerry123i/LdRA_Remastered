using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ViewPortScript : MonoBehaviour {

    ScrollRect sr;
    bool boleano = false;

    private void Start()
    {
        sr = this.GetComponent<ScrollRect>();
    }

    private void Update()
    {
        if (!boleano)
        {
            boleano = true;
            sr.verticalScrollbarVisibility = ScrollRect.ScrollbarVisibility.AutoHide;
            sr.verticalScrollbar.value = 1;
        }
        else
        {
            sr.verticalScrollbarVisibility = ScrollRect.ScrollbarVisibility.AutoHideAndExpandViewport;
            this.enabled = false;
        }
    }

}
