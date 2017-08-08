﻿/* 
 * File:   acanthus.c
 * Author: Usuario
 *
 * Created on 8 de Agosto de 2015, 19:51
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

void mask_on(int);

int * acanthus() {
    
    static int awake[3];
    
    int a;
    int a1;
    int a2; //1= rapaz
    int a3=0; //1= fez show ou viu a briga
    int ok;
    int x1=0;
    
    extern int gen;
    extern char str[50];
    
    system("cls");
    
    printf("Você segue pela estrada de prata, o céu ensolarado e uma brisa fres"
            "ca que sopra às suas costas faz da caminhada até o bosque um passe"
            "io bastate agradável. Conforme você se aproxima do destino a veget"
            "ação rasa e arbustos das laterais da estrada passam a crescer sem "
            "controle, cada vez invadindo um pouco mais da trilha, até que você"
            " está abrindo caminho entre o emaranhado de galhos e espinhos. Por"
            "ém eles não agarram nas suas roupas ou na sua pele, alguns dos gal"
            "hos se curvam levemente quando você passa, e os espinhos parecem se"
            " recolher ou virar para o outro lado, a fim de evitar te ferir."
            "\n\nEntre a folhagem você vai encontrando pedaços de roupas rasgad"
            "as presas nos espinhos e uma variedade de pertences caídos pelo ch"
            "ão, como celulares, animais de pelúcia, isqueiros e sapatos perdid"
            "os. Quanto mais você adentra a sebe mais diversos os itens vão se "
            "tornando, convites de casamento, diplomas e contratos, todos com d"
             "atas absurdas em meses impossíveis, marcados para nunca acontecere"
           "m."
            "\n\nDe repente você avista uma luz, o corredor de galhos parece se abr"
            "ir logo a frente.\n\n"
            ""
            "1.Continuar...\n\n");
    
    scanf("%i",&a);
    system("cls");
    
    do{
        
        if(!x1){
    printf("Chegando ao jardim você parece ter encontrado uma festa, dentro de uma "
            "clareira em meio ao bosque de arbustos e espinhos, em frente a uma torre"
            " com um grande relógio no topo."
            " Figuras de todas as formas, usando máscaras coloridas e decoradas"
            " conversam entre si, trocando risadas educadas e elogios polidos. "
            "Levando suas taças de cristal de uma conversa até a outra, alternand"
            "o os pequenos goles com mordidas dos delicados petiscos que os garç"
            "ons de máscaras brancas idênticas equilibram em bandejas de prata."
            "\n\nNenhum deles parece ter notado sua chegada, nenhum olhar é dir"
            "ecionado a você, nenhum servente aparece para pedir que se retire."
            " Existem algumas máscaras apoiadas em uma mesa, você provavelmente "
            "poderia pegar uma se quisesse, talvez você deva...");
        }
        
        else{
            printf("A mesa de máscaras continua intocada perto da entrada, pare"
                    "ce que o traje correto é mais importante do que você havia"
                    " pensado.");
        }
    
    printf("\n\n1.Pegar uma máscara");
    
    if(!x1){
            printf("\n2.Entrar sem máscara");
    }
    
    printf("\n\n");
    
    scanf("%i",&a);
    system("cls");
    
    if(a==1){ //Máscaras
        
        ok=1;
        
        do{
        printf("Uma variedade de máscaras se encontra disposta sobre a mesa, pr"
                "ovavelmente postas ali para os convidados que não conseguiram "
                "uma fantasia, ou assim você espera. Provavelmente ningém notar"
                "ia se você escolhesse uma.");
        
        printf("\n\n1.A máscara do político [Mente]");
        printf("\n2.A máscara do viajante [Espaço]");
        printf("\n3.A máscara do domador [Vida]");
        printf("\n4.A máscara do filósofo [Primórdio]");
        printf("\n5.A máscara do alquimista [Matéria]");
        printf("\n6.A máscara fúnebre [Morte]");
        printf("\n7.A máscara do xamã [Espírito]");
        printf("\n8.A máscara do músico [Forças]\n\n");
        
        scanf("%i",&a1);
        
        system("cls");
        
        }while(1>a1||a1>8);
    }
    
    else if(a==2&&x1==0){//Sem máscara
                
        x1=1;
        ok=0;        
        
        
        printf("Você ignora a mesa de máscaras, encarando os convidados com seu"
                " próprio rosto.\n\nUma jovem solitária, apoiada em uma árvore c"
                "hama sua atenção, ela brinca com os cabelos e com as penas da m"
                "áscara de coruja, olhando entediada para um ponto qualquer no ar."
                " Você se apresenta e pergunta o nome dela, ela parece não t"
                "er te ouvido, você finge tossir para chamar sua atenção. Nada,"
                " bastante rude da parte dela, ou seria a garota realmente surd"
                "a? Qualquer que seja o caso é melhor você se afastar antes que"
                " os outros reparem sua deselegância.\n\nUm dos garçons passa c"
                "om uma bandeja de taças longas cheias de um líquido azul e bor"
                "bulhante. Quando você se aproxima para pegar uma delas ele te "
                "ignora completamente e vai atender um senhor de máscara de tar"
                "taruga do outro lado da festa.\n\nTodos os convidados de que v"
                "ocê tenta se aproximar te ignoram completamente. Você tenta s"
                "implesmente ficar de pé no centro de uma conversa, mas todos cont"
                "inuaram como se você fosse perfeitamente invisível.");
        
    printf("\n\n1.Continuar...\n\n");
    
    scanf("%i",&a);
    system("cls");
        
    }
    
    else{
        ok=0;
        system("cls");
    }  
    }while(!ok);
    
    /******************Máscaras************************/
    
    if(a1==1){ //Mente
        
        awake[1]=5;
        awake[2]=5;
        
        printf("A máscara mostra um rosto sorridente e simpático, de tons escur"
                "os no centro e com penas e detalhes coloridos espalhados pelas"
                " laterais, propositalmente desviando a atenção dos seus olhos "
                "e distraindo aqueles com quem você venha a falar.");

        mask_on(x1);
        
    printf("1.Continuar...\n\n");
    
    scanf("%i",&a);
    system("cls");        
        
        printf("Alguns outros convidados se aproximam para falar com você, em s"
                "ua maioria outros usando máscaras semelhantes a sua. Um círcul"
                "o logo se forma ao seu redor, eles rapidamente lhe incluem no "
                "assunto que discutiam, conversando energeticamente sobre o mai"
                "s novo rei e as tendências liberais do príncipe, um deles pare"
                "ce ter comentado algo sobre um assassinato, mas você não tem c"
                "erteza. Todas as vozes soam semelhantes, e as opiniões são par"
                "ecidas, as máscaras coloridas e brilhantes desviam as atenções"
                " e todos conversam sem nunca se olhar nos olhos.\n\nUm deles f"
                "az um comentário sobre a família real e todos concordam, o con"
                "vidado a sua direita em seguida comenta a guerra com o reino v"
                "izinho e todos concordam, depois uma crítica sobre o última le"
                "i aprovada, todos concordam, você concorda. Por que? Parece ce"
                "rto claro, todos concordaram, certo? Você acha melhor se afast"
                "ar por um segundo, antes que chegue sua vez, embora derrepente"
                " você tenha adquirido uma forte opinião sobre os novos impostos em p"
                "edras preciosas.");
        
    }
    
    else if(a1==2){ //Espaço
        
        awake[1]=7;
        awake[2]=7;
        
        printf("A máscara do viajante lembra uma colcha de retalhos. Feita do q"
                "ue parecem várias partes de várias máscaras diferentes conectada"
                "s, variadas em materiais e estilos, realmente como se feita d"
                "e um pedaço de cada canto do mundo. Além disso, os olhos são cob"
                "ertos por uma estranha lente de vidro distorcido. Quando você olh"
                "a através dela sua visão precisa de um momento para se ajustar"
                ", mas em seguida as lentes se moldam aos seus olhos.");
        
        mask_on(x1);
        
        printf("Alguns outros convidados se aproximam, suas máscaras, assim c"
                "omo suas roupas feitas de uma combinação de estilos e culturas"
                ". Eles se aproximam para trocar histórias sobre os locais em q"
                "ue estiveram e as viagens que fizeram. Você um tanto envergonhad");

        if(gen){
            printf("a");
        }
        else{
            printf("o");
        }
        
        printf(" adimite que acabou de pegar a máscara, e não tem realmente sobre o que dizer.\n\n"
                "''Excelente!'' Uma delas exclama ''Eu posso te falar sobre tod"
                "os os lugares que visitei então. Esse detalhe, na parte direit"
                "a da máscara, consegui em um reino norte daqui, seis dias de vi"
                "agem. Logo além do riacho''\n\n"
                "Você espera que ela comente algo sobre o reino, um nome sequer"
                ", mas ela simplesmente para de falar. Você tem a impressão que "
                "deveria dizer ou fazer alguma coisa...");
        
        printf("\n\n1.Continuar...\n\n");
        scanf("%i",&a);
        system("cls");
        
        printf("''Ali. Aquela direção.'' Ela aponta para o norte, quando você vira a cabeça ela toca na lateral da sua máscara. As lentes de vidro se movem e se ajustam, seus olhos doem por um segundo, e você os fecha. Quando abre novamente você  não encherga mais o jardim, você está além de um riacho, olhando para um reino próspero no meio de um deserto e, onde as pessoas se vestem com mais ouro que tecido, e cavalgam lagartos gigantes.\n\n"
                "Você ainda consegue ouvir um convidado da festa, distante. ''Esse reino? Não entedie ");
        
        if(gen){
            printf("a garota");
        }

        else{
            printf("o rapaz");
        }

        printf(", aqui, vou te mostrar onde eu consegui essas luvas''\n\n"
               "Ele vira sua cabeça em outra direção e toca sua máscara. Você se sente tont");
        
        if(gen){
            printf("a");
        }
        else{
            printf("o");
        }

        printf(" por um momento, sua visão percorre centenas de quilômetros em"
                " menos de um segundo. Quando seus olhos se  ajustam você est"
                "á no topo de uma montanha de pedra vermelha, pessoas de pele acinzentada c"
                "arregam pedras preciosas como sacos de farinha no lombo de bodes.\n\n");
        
        printf("1.Continuar...\n\n");
        scanf("%i",&a);
        system("cls");

        printf("A primeira convidada protesta, e aponta sua visão na direção de "
                "um terceiro reino. Você consegue ver uma praia e um vasto oceano de"
                " água turquesa, mas antes de perceber qualquer outro detalhe sua ca"
                "beça é apontada para outra direção. Então antes mesmo das lentes"
                 "focarem no novo destino você é arrastado também deste.\n\n"
                "Você fecha os olhos para evitar vomitar. Sem conseguir ver onde "
                "você realmente está simplesmente estende seus braços a esmo, e consegue "
                "afastar dois corpos, então tocando sua própria máscara sua visão retorna ao jardim.\n\n"
                "Você se afasta dos outros viajantes deixando para trás protestos de\n\n"
                "''Eu ainda não te mostrei o melhor deles''\n\n"
                "''Não quer saber onde eu consegui esses botões de esmeralda?''");
        
    }
    
    else if(a1==3){ //Vida
        
        awake[1]=3;
        awake[2]=3;
        
        printf("A máscara cobre apenas seus olhos, e é feita a fim de se asseme"
                "lhar a um cão de caça, completa com o focinho proeminente e as"
                " orelhas. Ela é revestida por um metal escuro e reluzente, com detalhes"
                " em ouro e couro.");

        
        mask_on(x1);
        
        printf("Alguns dos convidados se aproximam usando máscaras semelhantes a sua,"
                " todas máscaras de animais, predadores: lobos, falcões,"
                " tigres. Alguns deles "
                "acompanhados de incomuns mascotes. Pássaros mais coloridos que"
                " qualquer ave tropical, cães com anatomias exóticas, e algumas"
                " outras criaturas que você não saberia nomear.\n\nEles começam"
                " a trocar histórias sobre eles, onde conseguiram cada "
                "um dos seus animais. ''Você não seriam capazes de reconhecê-la"
                " quando eu a encontrei. As penas eram de um tom horrendo de am"
                "arelo, ela passou o dia sendo pintada para esse evento na verd"
                "ade, é uma pena que as penas de pavão que foram colocadas não "
                "deixam mais ela voar. Mais aquela cauda quadrada era simplesmente inconc"
                "ebível ao lado desse vestido''\n\n"
                "O senhor com a máscara de tigre, acompanhado de um cão então comenta ''Eu criei esse aqui desde p"
                "equeno, ele tem as patas cumpridas da mãe e o focinho esguio do"
                " pai, exatamente como eu queria. Uma pena que ele tenha sido o único"
                " da ninhada a sobreviver.''");
        
        printf("\n\n1.Continuar...\n\n");
        scanf("%i",&a);
        system("cls");
        
        printf("O cachorro olha na sua direção "
                "com os olhos grandes de um filhote triste, o pássaro não canta"
                ", mas se move de um lado para o outro inqueito, revoltado. Uma ter"
                "ceira criatura, que você ainda não tem ideia do que é parece si"
                "mplesmente confusa, algo lhe diz que ela também não sabe.\n\n"
                "O cachorro continua a te encarar diretamente, quase como ele p"
                "edisse ajuda, na verdade ele está te pedindo ajuda, ele óbvia"
                "mente não pode falar, mas você consegue claramente entende-lo, "
                "a todos eles. ''Quieto! Desculpe por isso, não sei o que deu nele"
                "'' O senhor dá um puxão na coleira e o cachorro para,"
                " retornando a postura ereta que foi treinado a manter, eles en"
                "tendem os seus mascotes, todos eles. Você se sente um misto de "
                "raiva e indignação. Pedindo licença aos outros convidados e de"
                "sculpas ao cão por não poder ajuad-lo você se afasta. Os convi"
                "dados te ignoram e continuam a conversar, o cachorro compreende"
                " e agradece a atenção.");
        
    }
    
    else if(a1==4){ //Prime
        
        awake[1]=6;
        awake[2]=6;
        
        do{
        printf("A máscara do filósofo, recoberta no que parece ser uma fina cama"
                "da de mármore muito branco e decorada com vincos profundos, coloridos em um azul brilhante que"
                " parecem passear formando veias ou canais ao redor da expressão "
                "neutra da máscara.");
        
        mask_on(x1);
        
        printf("Dois convidados com máscaras semelhantes a sua discutiam fervoro"
                "samente até notarem sua presença, então um deles aponta para voc"
                "ê e eles se aproximam.\n\n''Pronto! Um");
        if(gen){
            printf("a outra pensadora para resolver nossa contenda''");
        }
        else{
        printf(" outro pensador para resolver nossa contenda''");
        }
        
        printf("\n\nAs máscaras são praticamente idênticas a sua, exceto pelo padrão dos"
                " vincos, que parece ser único em cada uma delas.");
        
        printf("\n\n''Perdoe o incômodo ");
        if(gen){
            printf(" senhorita");
        }
        else{
            printf(" meu bom senhor");
        }
        
        printf(". Apenas um segundo se nos permitir, se importaria de dar sua opinião em um pequeno debate de cavalheiros?"
                " A essência do ser, ");
        
        if(gen){
            printf(" a senhorita");
        }
        else{
            printf(" o senhor");
        }
        
        printf(" acredita, está no seu nome ou na sua imagem?''");
        
        printf("\n\n1.''No seu nome''");
        printf("\n2.''Na sua imagem''");
        printf("\n3.''Em nenhum do dois, creio eu''");
        
        printf("\n\n");
        scanf("%i",&a);
        system("cls");
        }while(a<1||a>3);
        
        if(a==1){
            
            a3=1;
            
            printf("''Óbviamente não é mesmo?'' O filósofo que lhe fez a pergunta"
                    " parece concordar com você.\n\n"
                    "''Humf! A opinião del");
            if(gen){
                printf("a");
            }
            else{
                printf("e");
            }
            printf(" indifere para mim. Com quem está discutindo afinal? Eu nunca con"
                    "cordei em pedir a opinião de terceiros'' O segundo parece discordar."
                    "\n\n''Acredito não estar discutindo com mais ninguém, pois creio que ganhei, agora se "
                    "me dá licença...''");
            
        }
        
        if(a==2){
            
            a3=1;
            
            printf("''O que?!'' O que filósofo que lhe fez a pergunta exclama, chocado.\n\n"
                    "''Vê? ");
            
            if(gen){
                printf("Ela");
            }
            else{
                printf("Ele");
            }
            
            printf(" concorda comigo. Apenas adimita de uma vez que eu estava certo'' o segundo comenta."
                    "\n\n''Nunca! Devo ter bebido mais do que pensava para entre"
                    "gar o rumo de nosso debate nas mãos de um");
            if(gen){
                printf("a");
            }
            
            printf(" qualquer. Que bases essa pessoa tem para pesar em seu argumento? Que estudo!? "
                    "Vai confiar na sabedoria das massas agora'' Ele cospe no chão, em"
                    " sinal de desprezo.\n\n"
                    "''Você mesmo sugeriu que perguntassemos e agora foge das consequências "
                    "dos seus atos?! Típico. Eu apresento sua recusa em aceitar os termos a que se compromete como argumento final e "
                    "me retiro de sua presença.''");
        }
            
        if(a==3){
            printf("Ambos olham na sua direção com olhares confusos sob as máscaras de mármore."
                    "\n\n''Como assim? Acho que não lhe compreendo.''\n\n"
                    "''Apenas responda logo, a essência do ser é seu nome ou sua"
                    " imagem?''");
            printf("\n\nVocê reafirma sua opinião, mas antes que possa elaborar "
                    "é interrompid");
            if(gen){
                printf("a");
            }
            else{
                printf("o");
            }
            printf("\n\n''Que absurdo! Como se atreve?!''\n\n''Que tipos de indulgentes "
                    "tem sido convidados para estes eventos? Se não pretende seguir"
                    " nenhuma das escolas de pensamento reconhecidas faça o favor de retirar essa"
                    " máscara!''\n\nEles lhe dão as costas e continuam sua conversa em outro canto da festa.");
            
        }
        
        if(a!=3){
            printf("\n\n''Não se atreva a me dar as costas!'' O filósofo que se"
                    " retirava é agarrado pelo braço, e responde com nada menos"
                    " que uma cotovelada. Você se afasta dos dois pensadores engalfinhados "
                    "entre socos e ponta-pés. Dois serventes rapidamente surgem para"
                    " separa-los e retira-los da festa. Um terceiro prontamente se "
                    "aproxima de você para pedir perdão pelos convidados inconvenientes e lhe oferecer"
                    " o que parece uma fatia de fruta amarela sobre uma torrada avermelhada.");
        }
        
    }
    
    else if(a1==5){ //Matéria
        
        awake[1]=4;
        awake[2]=4;
        
        printf("A máscara é provalmente a mais simples das oito. Feita de algum"
                " metal bruto e escuro, duas aberturas para os olhos e elevações"
                " que sugerem lábios e um nariz. Ela é pesada, e não se ajusta bem ao seu"
                " rosto. ");
        
        mask_on(x1);
        
        printf("Alguns convidados se aproximam de você, todos logo se ident"
                "ificam como alquimistas, mas você não poderia teria adivinhado"
                ". Suas máscaras não poderiam ser mais diferentes da que você e"
                "scolheu, e diferentes entre si. Muitas são feitas de metais r"
                "eluzentes e preciosos, outras de seda ou até mesmo papel, mas"
                " aparentando ser tão resistentes quanto são leves.\n\n"
                "''Acabaste de chegar? Vamos! Molde logo sua máscara.'' Uma del"
                "as comenta.\n\nCada alquimista parece ter alterado e moldado "
                "a máscara a seu gosto, mas você um pouco encabulad");
        if(gen){
            printf("a");
        }
        else{
            printf("o");
        }
        printf(" responde que não saberia como.\n\n''Ah! Um");
        
        if(gen){
            printf("a");
        }
        
        printf(" aprendiz provavelmente, não é? Permita-me ajudar então.'' Um s"
                "enhor com uma máscara de mármore e esmeraldas toca seu queixo,"
                " e um pequeno cristal verde surge.\n\n''Temos que fazer algo s"
                "obre essa forma, não é mesmo?'' Uma jovem usando um complexo m"
                "ozaico de metal e vidro no rosto pressiona suas bochechas e "
                "sua testa, dando uma formato mais interessante a sua má"
                "scara.\n\n''Mas essa cor? Nunca!'' ''Só um ajuste no tamanho'' "
                "''Por que você não tenta esse material?''"
                ""
                "\n\nEles continuam a te cutucar e apertar, modelando como bem "
                "entendem seu rosto. Até que você diz basta e se afasta revolta"
                "d");
        if(gen){
            printf("a");
        }
        else{
            printf("o");
        }
        printf(" da turba que se formou ao seu redor, você nem tem mais ideia d"
                "e como está sua máscara, mas por sorte depois de todas as mudanças"
                " pelas quais ela passou você já sabe molda-la exatamente como "
                "quer. Talvez fosse essa a intensão deles...");
        
    }
    
    else if(a1==6){ //Morte
        
        awake[1]=0;
        awake[2]=0;
        
        printf("Com um pouco de dificuldade você veste a máscara, ela"
                " e construída de forma a ficar alguns centímetros afastada do "
                "rosto. Além de não interferir com o pranto e facilitar a eventua"
                "l limpeza dos olhos esperada em alguém de luto, o espaço extra, junto com o véu escuro ajud"
                "am a esconder os olhos. A máscara é preta com filigramas branc"
                "os ao redor dos olhos, descendo ao longo do nariz sugerindo lág"
                "rimas. Ela cobre todo o rosto e não possui boca, talvez repres"
                "entando o jejum ou o silêncio como sinal de luto, mas a distância entre ela "
                "e seu rosto bastaria para você comer caso desejasse.");
        
        mask_on(x1);
        
    printf("1.Continuar...\n\n");
    
    scanf("%i",&a);
    system("cls");
        
        printf("Quando percebem sua máscara alguns convidados se aproximam p"
                "ara oferecer suas condolências. Alguns mais sucintos e educado"
                "s, outros lhe dando abraços antes que você possa recusa"
                "-los. Aparentemente muitos ali conheciam o falecido. Dois amig"
                "os de infância contam anedotas que conseguem fazer alguns sorr"
                "isos surgirem, um rival lamenta a perda como a de um irmão, de"
                "samparado sem motivação, sem aquele que o obrigava sempre a melhorar,"
                " um antigo amante amargurado pessoalmente lhe confessa alguns "
                "pecados e lamenta não ter mais uma chance de perdão.\n\nCada u"
                "m deles acrescentando história e personalidade a essa figura q"
                "ue você achava ter inventado. Você sente"
                " como se tivesse também no fundo da memória um conto para part"
                "ilhar\n\n''Houve uma vez...'' Você para derrepente, acometid");
        if(gen){
            printf("a");
        }
        else{
            printf("o");
        }
        printf(" pelo fato de que você conhece o falecido, uma torrente de lemb"
                "ranças cai sobre você, memórias queridas dessa pessoa que você"
                " nunca viu mas que nunca voltará a ver.\n\nVocê pede licença e"
                " se retira, limpando os olhos por debaixo da máscara.");
    }
    
    else if(a1==7){ //Espírito
        
        awake[1]=8;
        awake[2]=8;
        
        printf("A máscara do Xamã talvez tenho o formato mais interessante das oito. "
                "A área ao redor dos ouvidos tem um complexo formato côncavo, en"
                "quanto a área dos olhos tem apenas duas aberturas estreitas, "
                "que bloqueiam boa parte da visão.");
        
        mask_on(x1);
        
        printf("Você ouve alguém lhe chamando assim que ajusta a máscara ao rosto,"
                " aparentemente o desenho realmente ajuda sua audição.\n\n"
                ""
                "Uma voz feminina, comentando sobre como está cansada, parece"
                " ter trabalhado árduamente o dia todo. Uma das serventes você"
                " imagina, curioso da parte dela começar tão espontaneamente a "
                "conversar, mas você responde sempre com bom humor e simpatia."
                " Você consegue ouvir alguns murmurinhos dos outros convidados,"
                " e sua companheira responde.\n\n"
                "''As pessoas estão começando a comentar, melhor terminarmos por "
                "aqui. Não se preocupe, eu vou ficar bem.''\n\n");
        
        printf("\n\n1.Continuar...\n\n");
        scanf("%i",&a);
        system("cls");
        
        printf("Você educadamente se despede e se afasta, seguindo com cuidado"
                " já que você não consegue ver tão bem, uma segunda voz lhe chama. "
                "Parece ser também uma mulher, essa mais idosa, lhe chama para conversar.\n\n"
                "Aparentemente uma antiga residente da propriedade ela lhe conta "
                "as mais interessantes histórias sobre o jardim, desde suas primeiras"
                " mudas até os bailes anteriores a esse. No meio de uma curiosa"
                " história sobre as flores de cardo você ouve alguns comentários"
                " maldosos novamente. Seria essa outra servente? Uma jardineira"
                " talvez, seja quem for, as histórias foram ricas e a conversa"
                " animadora.");
                
        printf("\n\nMas ela também diz que acha melhor encerrar a conversa"
                " e ir andando quando os comentários começam. Outra voz lhe chama, essa"
                " um homem, você se orienta pelo som, e com cuidado e muitos "
                "pedidos de desculpa consegue encontrar sua origem."
                " Ele logo se gaba de ser um dos membros mais antigos e "
                " importantes da propriedade, talvez você consiga manter uma"
                " conversa sem os comentários dos outros convidados."
                "\n\nPara alguém tão importante ele não parece tão interessante,"
                " no máximo chega a lhe contar algumas das mesmas histórias que "
                "a senhora antes dele, e mesmo assim sem o mesmo humor e atenção "
                "aos detalhes. Enquanto você pensa em uma desculpa para se afastar,"
                " novamente os mesmos comentários mal intencionados.");
        
        printf("\n\n1.Continuar...\n\n");
        scanf("%i",&a);
        system("cls");
        
        printf("Simplesmente não é possível, você precisa ver o que está acontecendo,"
                " procurando ajustar sua máscara para conseguir enchergar ao menos"
                " um mínimo, você encontra uma alça que não havia notado antes. "
                "Com a máscara em uma posição melhor você consegue voltar e ver,"
                " embora não ouça mais tão bem. "
                "E rapidamente olha em volta procurando as senhoras com quem "
                "conversou, não encontrando ninguém que se assemelhe as pessoas"
                " com quem você imaginou ter falado.\n\n"
                "Você olha para o lado, o senhor que falava com você também não"
                " está em lugar nenhum, ao seu lado apenas um pilar de pedra. Você tenta"
                " traçar novamente o caminho que fez as cegas, sua trilha lhe "
                "leva até uma das árvores mais antigas do jardim e uma das mesas"
                " que apoia parte da decoração.\n\n"
                "Você não tem certeza do que aconteceu, mas parece ser uma boa"
                " ideia deixar a máscara nessa posição por enquanto.");
        
        
    }
    
    else if(a1==8){ //Forças
        
        awake[1]=2;
        awake[2]=2;
        
        do{
        printf("A máscara do músico é vistosa e brilhante, coberta de espelhos coloridos"
                " e pequenas peças de metal penduradas nas laterais que se fazem"
                " barulho quando você se move. Os lábios estão constantemente "
                "esticados em um largo sorriso de bobo da corte, e os olhos são "
                "cobertos por vidro tingido que parece mudar de tonalidade conforme a"
                " luz.");
        
        mask_on(x1);
        
        printf("Assim que percebem que você chegou vários dos convidados se apro"
                "ximam de você. Alguns puxando cadeiras outros encontrando uma boa"
                " posição para ficar de pé, rapidamente uma platéia de tamanho ra"
                "zoável se formou ao seu redor. Você consegue distinguir alguma coisa"
                " no murmurinho dos convidados como ''Finalmente, algum entreterimento''"
                " e ''Espero que seja melhor que o anterior''\n\n"
                "Você não tem não possui nenhum instrumento, mas sua plateia exige um show."
                "\n\n1.Cantar"
                "\n2.Improvisar um instrumento"
                "\n3.Dar as costas e se retirar\n\n");
        
        scanf("%i",&a);
        system("cls");
                
        }while(a<1||a>3);
        
        if(a==1){
            printf("Você limpa a garganta alto o bastante para conseguir a atenç"
                    "ão da plateia. Todos param de falar e se viram na sua direç"
                    "ão, inclusive os convidados que não se aproximaram. O silêncio"
                    " é absoluto, você pode ver dezenas de olhares fixos em você"
                    "sob o mar de máscaras.\n\nVocê começa a cantarolar as primeiras notas"
                    " da primeira música que lhe vem a cabeça, baixo, tímid");
            if(gen){
                printf("a");
            }
            else{
                printf("o");
            }
            printf(" no começo. Mas a plateia continua a lhe observar com atenção,"
                    " alguns sorrisos de aprovação lhe incentivam a começar a me"
                    "lodia com mais confiança. As palavras deslizam da sua boca em"
                    " tons perfeitos, os olhares da plateia agora parecem realmente"
                    " encantados com a sua performance, mas você poderia fazer ai"
                    "nda melhor. Uma brisa sopra sobre você vinda do bosque, agi"
                    "tando os sinos de metal ao redor da sua máscara, não ao acaso"
                    ", mas criando perfeitamente a harmonia para seu canto.\n\n"
                    "Absolutamente todos os convidados tem agora com os olhos fixos em você, "
                    "você se aproxima do final, e sabe exatamente como torna-lo"
                    " grande. Conforme você evolui em direção a ultima nota, as"
                    " nuvens que cobriam o sol lentamente se abrem, gradualmente"
                    " iluminando seu rosto de baixo a cima, os espelhos na másca"
                    "ra criando feixos de luz irradiando e todas as direções, v"
                    "ocê canta a última nota no momento em que a luz alcança as lentes"
                    " de vidro nos seus olhos, o reflexo do vidro tingido parece"
                    " se dispersar em todas as cores e todas as direções. Os fei"
                    "xes de luz se contorcem e dobram sobre os raios refletidos"
                    " pelos espelhos, criando arco-íris em espiral sobre a plateia.");
        }
        
        else if(a==2){
            printf("Você olha ao redor nervos");
            if(gen){
                printf("a");
            }
            else{
                printf("o");
            }
            printf(" procurando um instrumento, enquanto a plateia parece ficar impaciente."
                    " Um garçom passa ao seu lado com uma bandeja repleta de taças do líquido "
                    "borbulhante azul que tem sido servido aos convidados. Você segura-o pelo braço e "
                    " pega a bandeja das suas mãos. Ele não reage, e simplesmente "
                    "volta por onde veio, a plateia entretanto parece chocada.\n\n"
                    "Você tira um pouco de líquido de cada uma das taças, e as organiza"
                    " sobre uma das mesas, você viu isso na TV uma vez, deve dar certo, não é?"
                    " Deslizando seu dedo sobre uma das taças você produz uma perfeita"
                    " nota aguda, a plateia se cala. Testando uma segunda taça ela"
                    " produz um zumbido grave."
                    "\n\nCom a multidão devidamente focada, você começa. De forma"
                    " ágil, porém suave tocando as taças, como um grande piano de"
                    " vidro. Seus braços se movem quase que por instinto, você"
                    " não reconhece a música que está tocando, mas assim que toca"
                    " uma taça se torna óbvia a nota que a sucede. Os olhares da plateia agora parecem realmente"
                    " encantados com a sua performance, mas você poderia fazer ai"
                    "nda melhor. Uma brisa sopra sobre você vinda do bosque, agi"
                    "tando os sinos de metal ao redor da sua máscara, não ao acaso"
                    ", mas criando perfeitamente a harmonia para sua melodia.\n\n");
            
            printf("1.Continuar...\n\n");
            scanf("%i",&a);
            system("cls");
            
            
                printf("Absolutamente todos os convidados tem agora com os olhos fixos em você,"
                    " a música se torna mais intensa e mais complexa, parece impossível"
                    " tocar certos trechos com apenas duas mãos, mas de alguma forma"
                    " você continua com perfeição, e algumas vezes três ou quatro taças"
                    " parecem soar ao mesmo tempo.\n\n"
                    "Conforme você se aproxima do final, as"
                    " nuvens que cobriam o sol lentamente se abrem, gradualmente"
                    " iluminando seu rosto de baixo a cima, os espelhos na másca"
                    "ra criando feixos de luz que parecem se contorcer e se curvar"
                    " de forma que passam por dentro dos copos, iluminando cada taça"
                    " com um radiante brilho azulado conforme você as toca. Quando "
                    "a luz atinge seus olhos o reflexo do vidro tingido parece"
                    " se dispersar em todas as cores e todas as direções, iluminando"
                    " cada nota que você toca com uma cor diferente. Sete das"
                    " taças vibram ao mesmo tempo, e você termina sua performance"
                    " derramando um arco-íris sobre a plateia.");
            
        }
        
        else if(a==3){
            printf("Você não é obrigad");
            if(gen){
                printf("a");
            }
            else{
                printf("o");
            }
            printf(" a lidar com isso. Em momento nenhum concordou em entreter ninguém,"
                    " trabalhar para ninguém. Dando as costas você se afasta do "
                    "grupo que se formou ao seu redor.");
        }
        
        if(a==1||a==2){
            a3=1;
            
            printf("\n\n1.Continuar\n\n");
            scanf("%i",&a);
            system("cls");
            
            printf("Você termina, as luzes de dissipam. A plateia manteve os olhos"
                    " fixos em você e as bocas abertas durante todo o show, claramente"
                    " impressionados. Você se curva para cumprimenta-los, aguarda"
                    "ndo os aplausos.\n\nNada. Quando se levanta a plateia ja se"
                    " dispersou e voltou ao que fazia antes, comentando em suas"
                    " rodinhas sobre a qualidade do show, mas essencialmente lhe"
                    " ignorando completamente, parece que o músico é mais próximo"
                    " de um dos serventes do que de um convidado.");
            
        }
        
        else{
            printf("\n\nVocê espera gritos de protesto ou reclamação, mas nada"
                    " acontece. Olhando para trás você vê que o grupo rapidamente"
                    " se dispersou e retomou ao que fazia antes. Alguns comentam"
                    " como se ainda estivessem ''esperando o show começar'' aparente"
                    "mente eles acreditam que você ainda vai se apresentar. Que"
                    " continuem esperando.");
        }

        
    }
    
    printf("\n\n1.Continuar...\n\n");
    scanf("%i",&a);
    system("cls");
    
    //Fim das máscaras
    
    do{
    printf("Do outro lado do jardim, uma figura solitária chama sua atenção.\n"
            "\n1.Um rapaz\n2.Uma moça\n\n");
    
    scanf("%i",&a2);
    system("cls");
    }while(a2<1||a2>2);
    
    
    //Rapaz
    if(a2==1){
        printf("Um jovem, aparentando estar um pouco perdido no centro do salão"
                ", sozinho, como quem não sabe para onde ir ou com quem falar e"
                "le ajusta, meio sem jeito, a máscara de pardal no rosto e dá p"
                "equenos goles na taça de cristal o tempo todo.");
        
    }
    
    //Moça
    else{ 
        if(x1){
            printf("A mesma jovem de máscara de coruja que lhe ignorou no começ"
                    "o da festa, ainda apoiada em uma árvore brincando com os c"
                    "abelos e bebericando de uma taça comprida. Você decide ten"
                    "tar falar com ela mais uma vez.");
        }
        else{printf("Uma jovem solitária, apoiada em uma árvore, ela brinca com os cabelos e com as penas da m"
                "áscara de coruja, olhando entediada para um ponto qualquer no ar.");
            
        }            
    }
        
    printf("Assim que começa a andar em sua direção ");
    
    if(a==2){
        printf("ela");
    }
    else{
        printf("ele");
    }
    
    printf(" levanta a cabeça e percebe você se aproximando. Parando o que estava fazendo e "
            "partindo de encontro a você"
            "no meio do caminho.\n\n");
    
    if(awake[1]==0){
        printf("''Meus pêsames'' ");
        
        if(a2==2){
            printf("Ela");
        }
        else{
            printf("Ele");
        }
        
        printf(" comenta como todos os outros. Mas parece soar apenas um pouco mais"
                " sincer");
        
        if(a2==2){
            printf("a");
        }
        else{
            printf("o");
        }
        
        printf(".");
        
    }
    
    if(awake[1]==2){
        
        if(a3){
        printf("''Parabéns pelo show, belíssima arte'' ");
        
        if(a2==2){
            printf("Ela soa sincera, até animada");
        }
        else{
            printf("Ele soa sincero, até animado");
        }
        
        printf(", você se sente um pouco melhor em relação ao descaso dos outros"
                " convidados.");
        
        }
        else{
            printf("''Você não pretende se apresentar não é mesmo? Não se procupe,"
                    " a maioria não se importa.''");
        }
    }
    
    if(awake[1]==3){
        printf("''Fico feliz em ver que pelo menos ");
        if(gen){
            printf("uma das domadoras");
        }
        else{
            printf("um dos domadores");
        }
        printf(" não trouxe animais a festa. Simplesmente não é adequado, e os "
                "coitados acabam sofrendo tanto''");
    }
    if(awake[1]==4){
        printf("''Perdão, porém permita-me alogiar sua máscara. É belíssima! A maioria dos alquimistas não possui essa"
                " fineza''");
    }
    if(awake[1]==5){
        printf("''Que prazer encontrar uma figura política disposta a socializar."
                " A maioria deles se fecha em um círculo e reclamam até o fim do "
                "evento''");
    }
    if(awake[1]==6){
        
        if(a3){ //Briga
            printf("''Você faz bem em se afastar daqueles tipos, não faço ideia de como ainda são convidados. "
                    "Sempre acabam enxotados por causa de alguma discução infantil''");
        }
        else{ //Expulso
            printf("''Não se preocupe com aqueles dois, desde que eu os conheço estão perdendo tempo "
                    "com a mesma discução, e nunca aceitam a opinião dos outros.''");
        }
        
    }
    if(awake[1]==7){
        printf("''Oh! Que bom. Eu temia que você não estivesse realmente olhando "
                "para mim. Tão difícil de saber com esses viajantes''");
    }
    if(awake[1]==8){
        printf("''Eu estava te vendo, mas não se preocupe. Aposto que aquela"
                " árvore é mais interessante que muitos dos convidados. E talvez mais jovem que alguns''");
    }
    
    printf("\n\n");
    
    if(a2==2){
            printf("Ela");
        }
        else{
            printf("Ele");
        }
    
    printf(" parece ser mais agradável que os outros convidados. Casualmente come"
            "ntando sobre a comida e a decoração, puxando conversa com temas amenos"
            " porém agradáveis. Mas sem nunca se apresentar ou perguntar seu nome"
            ", provavelmente uma questão de etiqueta em um baile de máscaras.");
    
    printf("\n\n");
   
    if(a2==2){
            printf("Ela");
        }
    else{
            printf("Ele");
        }
    
    printf(" lhe convida a sentar em um dos bancos mais afastados, mais próximos "
            "do bosque. ");
    
    if(a2==2){
            printf("A moça da máscara de coruja tem a pele muito clara e usa um"
                    " vestido elegante, um pouco acima do tornozelo, um tanto mais"
                    " curto que o das outras convidadas. Seu corpo magro é delicado"
                    " e tem uma silhueta moldada a espartilho, a cintura esculpida"
                    " destacando o busto e os quadris. Ela vai até o ban"
                    "co em passos leves mas decididos, com dois tapinhas no assento"
                    " ao lado ela te chama para sentar.");
        }
    else{
            printf("O rapaz da máscara de pardal tem a pele morena tostada de sol, "
                    "os cabelos curtos, sob um chapéu decorado com uma flor vermelha,"
                    "incomum, mas em harmonia com a jaqueta social escura com detalhes em vinho. "
                    "O corpo jovem, de compleição esguia mas ombros largos, a muscula"
                    "tura modesta se mostrando ocasionalmente sob as roupas, em um "
                    "movimento ou outro dos braços. Ele segue até o banco e com "
                    "dois tapinhas no assento ao lado lhe chama para sentar.");    
        }
    
    printf("\n\n1.Continuar...\n\n");
    scanf("%i",&a);
    system("cls");
    
    
    do{
    printf("Assim que você se senta");
    
    printf(" ao seu lado ");
    
    if(a2==2){
            printf("ela");
        }
    else{
            printf("ele");
        }
    
    printf(" comenta sobre os pássaros e as árvores, e começa uma entusiasmada"
            " história sobre o último baile que compareceu. Você não contribui "
            "muito com a conversa, mas ");
    if(a2==2){
            printf("ela");
        }
    else{
            printf("ele");
        }
    printf(" não se importa, diz que você é um");
    
    if(gen){
        printf("a boa");
    }
    else{
        printf(" bom");
    }
    
    printf(" ouvinte. O céu se torna alaranjado conforme o sol se põe, alguns dos"
            " convidados começam a se despedir. ");
    
    if(a2==2){
            printf("Ela");
        }
    else{
            printf("Ele");
        }
    printf(" vira na sua direção, chatead");
    if(a2==2){
            printf("a");
        }
    else{
            printf("o");
        }
    printf("\n\n''Parece que vamos ter que nos despedir logo. Me permita mostrar "
            "uma última coisa antes de partir.''\n\n");

    if(a2==2){
            printf("Ela");
        }
    else{
            printf("Ele");
        }
    
    printf(" segura delicadamente sua mão e te guia ao longo da clareira até a "
            "torre de relógio. Vocês entram por uma porta de cristal e em frente "
            "a escada ");
    if(a2==2){
            printf("a moça");
        }
    else{
            printf("o rapaz");
        }
    printf(" para, e olhando nos seus olhos pergunta.\n\n");
    
    printf("''Nós poderíamos ir até o telhado, ver as estrelas e fazer um pedido, "
            "ou ver o jardim através do vidro do relógio. O que você prefere?''");
    
    printf("\n\n1.Ver as estrelas [Destino+]"
            "\n2.Ir até o relógio [Tempo+]\n\n");
    
    scanf("%i",&a);
    system("cls");
    
    }while(a<1||a>2);
    
    if(a2==2){
            printf("Ela dá um sorriso largo e inocente, do tipo que faz seus olhos parecerem pequenos atrás da máscara.");
        }
    else{
            printf("Ele dá um sorriso largo e sincero, com todos os seus dentes perfeitamente brancos.");
        }
    
    printf("\n\n''Então vamos! Por aqui'' ");
    
    if(a2==2){
            printf("Ela");
        }
    else{
            printf("Ele");
        }
    
    printf(" segue pela escada em espiral que acompanha as paredes da torre até ");
    
    if(a==1){ //Estrelas
        awake[0]=1;
        
        printf("encontrar um alçapão no teto que leva até uma pequena sacada sobre "
                "o telhado. Vocês sobem e percebem que o sol terminou de se por, j"
                "á é noite. Os serventes terminam de arrumar o jardim iluminados"
                " apenas por enxames de vagalumes que flutuam entre as taças e "
                "cadeiras. Acima de vocês o céu pontilhado de mais estrelas que você"
                " jamais viu, em constelações feitas a mão como verdadeiros mosaicos,"
                " em cores que você não achava serem possíveis.\n\n"
                "Além disso, sobre esse fantástico plano de fundo, duas estrelas"
                " se destacam, com brilho que arrisca se equiparar a lua, duas es"
                "trelas cadentes cruzam o céu uma ao lado da outra. ");
        
        if(a2==2){
            printf("Ela");
        }
        else{
            printf("Ele");
        }
        
        printf(" abraça seu braço, recostando a cabeça no seu ombro, e fechando "
                "os olhos diz. ''Faça um pedido''");
        
        printf("\n\n1.Continuar...\n\n");
        scanf("%i",&a);
        system("cls");
        
        if(a2==2){
            printf("A moça");
        }
        else{
            printf("O rapaz");
        }
        
        printf(" abre os olhos e larga seu braço, segurando suas mãos e olhando "
                "nos seus olhos.\n\n''Eu sei que não deveria contar. Mas eu desejei,"
                " poder ver você de novo. Mesmo que não se realize, eu ficaria "
                "satisfeit");
        
        if(a2==2){
            printf("a");
        }
        else{
            printf("o");
        }
        
        printf(" de pelo menos saber seu nome'' \n\n");        
       
        
    }
    
    if(a==2){ //Relógio
        awake[0]=9;
        
        printf("o centro da torre. Em frente a face do grande relógio, atrás de "
                "vocês as peças e engrenagens conectadas aos ponteiros, e ao enorme"
                " sino de prata no topo da torre. ");
        
        if(a2==2){
            printf("Ela");
        }
        else{
            printf("Ele");
        }
        
        printf(", segurando a sua mão, lhe leva até em frente a grande janela de"
                " vidro\n\n''O bosque e o jardim são visões realmente sublimes "
                "depois que o sol se põe. Veja por si mesm");
        
        if(gen){
            printf("a");
        }
        else{
            printf("o");
        }
        
        printf("''\n\nA luz brilha sobre os buquês de flores brancas, que"
                " refletem um tom quase azulado, espectral. Os vagalumes flutuam "
                "através do bosque, pontilhando em verde o breu sob a copa das árvores. "
                "Borboletas de asas prateadas levantam de sob as folhas e as flores"
                " lentamente se abrem apenas para elas, revelando todo um arco-íris"
                "de pétalas fluorecentes, das espécies que reservam sua beleza para a noite.");
        
        if(a2==2){
            printf("Ela");
        }
        else{
            printf("Ele");
        }
        
        printf(" segura sua mão, e vocês passam vários minutos em silêncio, simplesmente apreciando"
                " o dançar das luzes.");
        
        printf("\n\n''Eu sei que eu não deveria'' ");
        
        if(a2==2){
            printf("Ela");
        }
        else{
            printf("Ele");
        }
        
        printf(" diz, quebrando o silêncio. ''Mas eu gostaria de saber seu nome, eu não quero"
                " esquecer hoje. Eu não quero esquecer você.'' ");
        
        
        
    }
    
    printf("\n\n");
    
    if(a2==2){
            printf("Ela");
        }
        else{
            printf("Ele");
        }
        
        printf(" puxa uma pena da máscara, e lhe entrega, a ponta suja de tinta. ");
        
               
        printf("Então estende a mão. ''Aqui, mesmo que a tinta não dure eu prometo não esquecer, basta escrever seu nome.''\n\n");
        
        gets(str);
        gets(str);
        
        system("cls");
        
        
        printf("Passando os dedos ao longo da sua caligrafia ");
        
        if(a2==2){
            printf("ela");
        }
        else{
            printf("ele");
        }
        
        printf(" dá um pequeno sorriso de canto de boca, sutil, satisfeito. Então "
                "derrepente te abraça, sussurando ''Obrigad");
        
        if(a2==2){
            printf("a");
        }
        else{
            printf("o");
        }
        
        printf("'' no seu ouvido, e colocando o rosto em frente ao seu, um dos braços "
                "ao redor do seu corpo, a outra mão acariciando o limite entre sua máscara e sua pele.\n\n"
                "Você faz o mesmo, os dedos del");
        
        if(a2==2){
            printf("a");
        }
        else{
            printf("e");
        }
        
        printf(" ameaçando remover sua máscara. Você gentilmente levanta a del");
        
        if(a2==2){
            printf("a");
        }
        else{
            printf("e");
        }
        
        printf(", podendo finalmente ver seu rosto.");
        
        printf("\n\nMas você encontra o seu próprio rosto, sendo usado pel");
        
        if(a2==2){
            printf("a moça");
        }
        else{
            printf("o rapaz");
        }

        printf(" como se lhe pertencesse. Aterrorizad");
        
        if(gen){
            printf("a");
        }
        else{
            printf("o");
        }
        
        printf(" você dá um passo para trás. ");
        
        if(a2==2){
            printf("Ela");
        }
        else{
            printf("Ele");
        }
        
        printf(" da um sorriso debochado, especialmente debochado, porque é dado com seus próprios lábios."
                " Ainda com uma das mãos sobre a sua máscara, ");
        
        if(a2==2){
            printf("ela");
        }
        else{
            printf("ele");
        }
        
        printf(" diz mais uma vez ''Obrigad");
        
        if(a2==2){
            printf("a");
        }
        else{
            printf("o");
        }
        
        printf("'', mas dessa vez com a sua voz. Então violentamente puxa sua máscara.\n\n"
                "Tudo fica escuro, pois você não tem olhos, não tem nariz, "
                "você quer gritar, mas não tem boca. Vagando atordoad");
        
        if(gen){
            printf("a");
        }
        else{
            printf("o");
        }
        
        printf(" você sente um empurrão. ");
        
        if(awake[0]==1){
            printf("Tropeçando sobre o curto beiral da sacada você sente seu corpo"
                    " cair, e ouve uma risada alta e histérica, feita com a sua voz, que lentamente se distancia enquanto você cai.");
        }
        
        else{
            printf("Tropeçando sobre a fina janela de cristal do relógio, "
                    " o vidro quebra sob seu peso, enqaunto cai, você pode ouvir uma risada alta e histérica, feita com a sua voz, que lentamente se distancia.");
        }
    
    
    return awake;
}

void mask_on(int x1){
    
            
        printf(" Assim que você veste a máscara algumas cabeças viram na s"
                "ua direção, ");
    
        if(x1){
            printf("parece que agora eles finalmente podem lhe ver.");
        }
        
        else{
            printf("eles parecem surpresos, mas não assustados. Parece que real"
                    "mente ninguém era capaz de lhe ver enquanto você não tives"
                    "se uma máscara.");
        }
        
        printf("\n\n");

}