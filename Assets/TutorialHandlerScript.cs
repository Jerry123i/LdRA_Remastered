using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class TutorialHandlerScript : MonoBehaviour {
    
    public TextMeshProUGUI textoCorpo;
    public TextMeshProUGUI textoTitulo;

    int position=0;

    List<string> titulos;
    List<string> textos;


    private void Awake()
    {
        titulos = new List<string>();
        textos = new List<string>();

        titulos.Add("Risco");
        titulos.Add("Mana");
        titulos.Add("Paradoxo");

        textos.Add("Algumas situações arriscadas, difíceis ou perigosas vão ter uma chance de falhar, essas opções vão estar indicadas por um ''C'' " +
            "seguido da chance da ação dar certo. O principal fator que influencia suas chances é sua saúde, mas suas escolhas ao longo do jogo também " +
            "podem facilitar ou dificultar certas ações. Falhar em uma ação nunca significa o fim do jogo, apenas pode trazer consequências desagradáveis ao longo da história.");

        textos.Add("Existem duas situações em que você utiliza mana, algumas magias mais poderosas sempre vão precisar" +
            " de um ou mais pontos de mana para serem utilizadas. E qualquer magia que não seja de um dos seus dois arcanas principais," +
            " custa um ponto de mana a mais para ser usada.");

        textos.Add("As vezes, distorcer a realidade pode ter consequências graves. Usar magia de forma que poderia ser confundida com sorte," +
            " coincidência, ou algum fenômeno estranho porém sutil é geralmente inofensivo. Porém feitos realmente impossíveis que desafiem " +
            "as leis naturais podem resultar em paradoxos. A realidade resiste a ser alterada, podendo fazer sua magia falhar, agir de forma " +
            "inesperada ou te ferir de alguma forma. Dano causado por paradoxo não pode ser curado com magia e é indicado por um X na sua barra " +
            "de saúde. Opções que tenham risco de paradoxo vão estar indicadas por um ''P'', seguido da chance do paradoxo ocorre. Forçar a realidade repetidamente" +
            " é perigoso, cada vez que você arrisca causar pardoxo (ele ocorrendo ou não) as chances de controlar os próximos diminuem.");
        
    }
    
    private void OnEnable()
    {    
        UpdateTexts();        
    }

    public void MoveUp()
    {
        position++;
        if(position >= titulos.Count)
        {
            position = 0;
            gameObject.SetActive(false);
        }
        else
        {
            UpdateTexts();
        }
    }

    public void MoveDown()
    {
        position--;
        if (position < 0)
        {
            position = 0;
            gameObject.SetActive(false);
        }
        else
        {
            UpdateTexts();
        }
    }

    void UpdateTexts()
    {
        textoCorpo.text = textos[position];
        textoTitulo.text = titulos[position];

    }



    // Update is called once per frame
    void Update () {
		
	}
}
