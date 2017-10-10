using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class CharInfoScript : MonoBehaviour {

    public TextMeshProUGUI displayName;
    public Image displayRune;
    public List<BolinhaDeVidaScript> lifeBar;
    public List<Image> manaBar;

    public Color manaOnColor;
    public Color manaOffColor;

    public Color lifeOnColor;
    public Color lifeOffColor;
    public Sprite doxSprite;


}
