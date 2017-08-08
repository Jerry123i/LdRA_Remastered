/* 
 * File:   main.c
 * Author: Usuario
 *
 * Created on 8 de Agosto de 2015, 17:07
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

//Funções de despertar
int * obrimos ();
int * moros ();
int * mastigos ();
int * acanthus ();
int * thyrsus ();

//Funções do Finale
void j_aguiam();
void j_aguiav();
void j_counter();
void j_cura();
void j_escape();
void j_shot();
void j_telecinesia();
void j_teleport();
void j_tempo();

void y_sorte();
void y_arma();
void y_destroy();
void y_bala();
void y_aguiam();
void y_aguiav();
void y_teleport();
void y_tempo();
void y_nope();

//Funções do tronco
void tronco_mudei();
void tronco_queimei();
void tronco_amassei();
void tronco_matei(int);

//Funções do tutorial
void tutorial_mana(int);
void tutorial_dox();
void tutorial_roll();

//Funções de random
int roll (int, int); //(chance base, outros)
int dox  (int, int); //(chance base, outros)

int calc_roll (int, int); //(chance base, outros)
int calc_dox  (int, int); //(chance base, outros)

//Função clear
void clear(); //(mana, life)
int  mana_check(int, int); //(custo, path)

//Outras funções
int  cat(int);
void car();
void heal();
void help();
void eye_grab();
void go_janus();
void go_yoonir();


//Globais

char str[50];
char sdw[50];

int mana;
int dmg;
int dmg_dox;

int tool;
int sleepers;
int cum_dox;

int gen;

int tut_dox;
int tut_mana;

int path;
int arc[10];

int clem[40];

int main(int argc, char** argv) {   
    
    //Nomes
    char name[24][10];
    
    strcpy(name[0], "Vinícius");
    strcpy(name[1], "Vinicius");
    strcpy(name[2], "Farinha");   
    strcpy(name[3], "Tupucã");
    strcpy(name[4], "Tupuca");
    strcpy(name[5], "Pierre");
    strcpy(name[6], "Ares");
    strcpy(name[7], "Jacob");
    strcpy(name[8], "Corvo");
    strcpy(name[9], "Pandora");
    strcpy(name[10], "Elizabeth");
    strcpy(name[11], "Mano");
    strcpy(name[12], "vinícius");
    strcpy(name[13], "vinicius");
    strcpy(name[14], "farinha");
    strcpy(name[15], "tupucã");
    strcpy(name[16], "tupuca");
    strcpy(name[17], "pierre");
    strcpy(name[18], "ares");
    strcpy(name[19], "jacob");
    strcpy(name[20], "corvo");
    strcpy(name[21], "pandora");
    strcpy(name[22], "elizabeth");
    strcpy(name[23], "mano");
    
    
    
    //Variáves
    int a;
    int b;
    int ok;
    int x1=0;
    int* p;
    int bonus=0;
    
    
    //tutorials
    
    int tut_mana=0;
    int tut_dox=0;
    
    mana = 3;
    dmg = 0;
    dmg_dox = 0;
    tool=0;
    sleepers=0;
    cum_dox=0;
    
    gen=0;

    for(a=0;a<10;a++){
    arc[a]=0;   
    }
    
    for(a=0;a<40;a++){
    clem[a]=0;   
    }
    
    //0. Death
    //1. Fate
    //2. Forces
    //3. Life
    //4. Matter
    //5. Mind
    //6. Prime
    //7. Space
    //8. Spirit
    //9. Time 
    
    int tird_a;
    
    //Paths
    //0. Acanthus
    //1. Mastigos,
    //2. Moros,
    //3. Obrimos,
    //4. Thyrsus,
    
    extern char str[50];
    
    
    
    /********************************GAME**************************************/

printf("  _                          _             _                     \n"
" | |                        | |           | |                    \n"
" | |     ___  __ _  __ _  __| | ___     __| | ___                \n"
" | |    / _ \\/ _` |/ _` |/ _` |/ _ \\   / _` |/ _ \\            \n"
" | |___|  __/ (_| | (_| | (_| | (_) | | (_| | (_) |              \n"
" |______\\___|\\__, |\\__,_|\\__,_|\\___/   \\__,_|\\___/          \n"
"              __/ |                                              \n"
"             |___/___      _       _                             \n"
"               |  __ \\    (_)     | |                            \n"
"               | |__) |___ _    __| | ___                        \n"
"               |  _  // _ \\ |  / _` |/ _ \\                       \n"
"               | | \\ \\  __/ | | (_| |  __/                       \n"
"               |_|  \\_\\___|_|  \\__,_|\\___|             _   _     \n"
"                                /\\  | | | |           | | (_)    \n"
"                               /  \\ | |_| | __ _ _ __ | |_ _ ___ \n"
"                              / /\\ \\| __| |/ _` | '_ \\| __| / __|\n"
"                             / ____ \\ |_| | (_| | | | | |_| \\__ \\\n"
"                            /_/    \\_\\__|_|\\__,_|_| |_|\\__|_|___/\n");
printf("\n\n"
"******************************   EPISóDIO - 0   *******************************");

printf("\nPor Igor \"Jerry\" Carneiro - 2015"
        "\nBaseado em Mago: O Despertar (Copyright - White Wolf Publishing Inc.)");

sleep(5);

system("cls");


    
    
        
    printf("Por favor amplie a janela até enchergar o texto abaixo\n"
            "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    
    printf("Por favor amplie a janela até enchergar o texto acima\nEntão pressione 1 e então Enter\n\n1.Continuar\n\n");
    scanf("%i",&a);
    system("cls");
    
    do{    
    printf("Digite o número relativo a opção que deseja escolher, e pressione Enter\n\n"
            "Qual gênero você prefere que seja usado para se referir ao seu pers"
            "onagem?\n\n");
   
    printf("1.Masculino\n2.Feminino\n\n");
    
    scanf("%i",&a);
    system("cls");
    
    if(a==1){
        gen=0;
    }
    
    else if(a==2){
        gen=1;
    }
    
    }while(a!=1&&a!=2);
    
    printf("Você está prestes a se tornar um Mago. As decisões que sua alma tom"
            "ar agora irão definir quais aspectos da realidade você será capaz "
            "de controlar.");
    
    printf("\n\n1.Continuar...\n\n");
    scanf("%i",&a);
    system("cls");
    
    printf("*Morte representa o poder de influenciar fantasmas e mortos-vivo"
            "s, também de degradar e decompor aquilo a sua volta."
            "\n\n*Destino te dá o poder de ter sorte extraordinária e amaldiçoar"
            " outros com azar, de ler e até criar profecias e pragas."
            "\n\n*Matéria representa a habilidade de alterar e compreender subst"
            "âncias, líquidos, sólidos e gases, molda-los e transforma-los."
            "\n\n*Mente é a capacidade de telepatia, alterar memórias, ler auras"
            " e até controlar mentes."
            "\n\n*Forças influência as forças físicas da realidade, calor, fogo,"
            " som, luz, a habilidade de manipular ou criar esses elementos.");
    
    printf("\n\n1.Continuar...\n\n");
    scanf("%i",&a);
    system("cls");   
    
            
    printf("*Primórdio simboliza o poder de controlar magia e mana, a energ"
            "ia usada pelos magos. Manipulando-a para formar ilusões ou nulific"
            "ando os feitiços de outros."
            "\n\n*Vida representa a influência sobre seres vivos e seus corpos, "
            "cura, mudança de forma e influenciar animais, todas habilidades de "
            "magos experientes em Vida."
            "\n\n*Espaço representa a manipulação da distância e da posição de s"
            "eres e objetos, o poder da vidência e para magos poderosos o teletransporte.");   
            
    printf("\n\n*Espírito controla e influencia espíritos (não fantasmas), sere"
            "s elementais que representam conceitos, animais ou emoções do noss"
            "o mundo."
            "\n\n*Tempo inicialmente lhe permite ver o passado e ter alguns curt"
            "os vislumbres do futuro. Mas um mago poderoso pode acelerar o temp"
            "o ou voltar alguns segundos para corrigir erros.");
    
    printf("\n\n1.Continuar...\n\n");
    scanf("%i",&a);
    system("cls");
    
    printf("Cada um desses aspectos pode ser separado em 3 níveis de aptidão, o"
           " primeiro deles permitindo sutis influências na realidade, o tercei"
           "ro completo controle sobre tal aspecto, sendo capaz de completamente des"
           "truir ou criar elementos por pura força de vontade. Quando sua alma retor"
              "nar vai estar controlando 3 desses aspectos, dois deles devem ser escolhidos juntos, e um deles você irá controlar de forma um pouco mais completa.\n\nA primeira decisão é a mais importante, siga seus instintos ao escolher, deixe sua alma dize"
            "r qual caminho seguir até a ascensão.");
    
    sleep(4);
    
    printf("\n\nE boa sorte...");
    
    sleep(2);
    
    printf("\n\n1.Continuar...\n\n");
    scanf("%i",&a);
    system("cls");    

    do{
    
    system("cls");
        
    printf("Você abre os olhos e se encontra em uma encruzilhada, ao seu redor "
            "estão 5 estradas.\n\nA primeira tem um caminho de ouro e leva até "
            "um cemitério. A segunda tem um caminho de terra e leva até uma flo"
            "resta. A terceira é calçada com mármore e leva até um castelo. A q"
            "uarta é feita de ferro e leva até uma mansão. A quinta é uma estra"
            "da de prata, que termina em um jardim.\n\nQual caminho sua alma se"
            "gue?\n");
    printf("\n1. A estrada de ouro, que promete morte e riqueza[Morte/Materia]\n2. A estrada d"
            "e terra, que promete sabedoria e vigor[Vida/Espirito]\n3. A estrada de mármore, q"
            "ue promete força e glória[Forças/Primordio]\n4. A estrada de ferro, que promete cont"
            "role e soberania[Espaco/Mente]\n5. A estrada de prata, que promete descoberta e "
            "liberdade[Tempo/Destino]\n\n");
   
    
        
    
    scanf ("%i", &a);
       
    
    if (a==1){ //Moros
        ok=1;
        path=2;
        arc[0]++;
        arc[4]++;
        
        p = moros();            

        gets(str);
        gets(str);
           
        printf("\n\nSua tumba está agora completa, ");
        if(*(p)==0){printf("a tinta escura escorre do último traço da assinatura, marcando a última letra do seu nome com uma grande gota cinza.");}
        if(*(p)==4){printf("a caligrafia dourada brilha uma vez, refletindo luz que não parece vir de lugar nenhum.");}
        printf("\n\nVocê dá um passo para trás, para observar seu trabalho. Então a forma esquelética para, ela larga um carro de luxo e um punhado de almas gemendo no ar, parados em suspensão. Ela olha para você, um par de mãos feitas de ossos negros te agarra, com o cuidado de uma mãe segurando um filhote, a morte te leva ao peito.\n\nVocê afunda entre suas costelas em direção a escuridão.");        
    }
    
    else if (a==2){
        ok=1;
        path=4;
        arc[3]++;
        arc[8]++;
        
        p = thyrsus();
        
        gets(str);
        gets(str);
        
        if(*(p)==3){printf("\n\nAssim que termina de escrever o lobo abre a boca e solta um longo uivo seguido de algo que soa como um latido. Ele parece de certa forma orgulhoso.");}//Vida
        if(*(p)==8){printf("\n\nQuando você escreve a última letra, um raio da lua cheia parece brilhar diretamente sobre seu nome. Uma lágrima se forma ao seu lado e escorre pelo tronco, caindo em uma das poças de sangue entre as raízes.");}//Espírito
        
        printf("\n\nSeu nome agora pertence entre os outros que atravessaram a floresta e escalaram a árvore.");
        printf("Ele então inclina lentamente o focinho para baixo, você tenta agarrar em algum galho, mas ele move todos para longe do seu alcance. Você desliza e cai");
        if(*(p)==8){printf(", como a lágrima,");}
        printf(" em direção ao chão. No caminho você passa pela nascente rubra no peito do lobo, e pode por um segundo ver seu coração em carne, pulsando dentro da madeira. Seu corpo cai na poça de sangue, afundando lentamente no líquido espesso. Você consegue ouvir");
        if(*(p)==3){printf(" mais");}
        printf(" um longo e emocionado uivo antes de apagar.");
        
    }
    
    else if (a==3){
        ok=1;       
        path=3;
        arc[2]++;
        arc[6]++;           
        
        p = obrimos();
        
        gets(str);
        gets(str);
        
        if(*(p)==2){
            if(gen){
             printf("\nLady %s Algoz das Bestas e Cavaleira em nome da coroa.", str);   
            }
            else{
            printf("\nLorde %s Algoz das Bestas e Cavaleiro em nome da coroa.", str);
            }
        }
        
        if(*(p)==6){
            
            if(gen){
                printf("\nLady %s Defensora do Reino e Campeã da coroa.", str);
            }
            else{
            printf("\nLorde %s Defensor do Reino e Campeão da coroa.", str);
            }
        }
        
        printf("\n\nSua visão é bloqueada por um clarão. Quando seus olhos retoma"
                "m foco você vê o resto da sua vida passando rapidamente a sua "
                "frente, festas e celebrações sem fim sobre seu heroísmo, músic"
                "as e poemas sendo escritos em seu nome. Seus últimos anos vivi"
                "dos em paz e conforto, até seu último suspiro e seu funeral co"
                "m todas as honras de");
        
        if(gen){
            printf(" uma heroína.");
        }
        else{
        printf(" um herói.");
        }
    }
    
    else if (a==4){
        ok=1;
        path=1;
        arc[5]++;
        arc[7]++;                
        
        p = mastigos();   
        
        printf("X");
        gets(str);
        gets(str);

        system("cls");

        printf("Assim que você termina de assinar ele arranca o contrato das suas mãos."
                " Rapidamente dobra o documento e o coloca dentro de um envelope, ele "
                "arrasta uma unha afiada sobre a palma da mão e começa a sangrar um "
                "líquido espesso e escuro. Uma gota grande cai sobre a aba do envelope"
                " e ele pressiona um carimbo de madeira sobre ela, o sangue rapidamente"
                " seca como cera, criando um selo. Ele toca o envelope ele desaparece.\n\n"
                "''Pronto, temos tudo acertado. Boa sorte''"
                "\n\nEle se levanta e estende a mão através da mesa, você"
                ", um pouco hesitante, responde. Ele dá um aperto de mão firme e confiante"
                " e com a outra mão estala os dedos."
                "\n\nO escritório desaparece, todo o prédio e a mansão desaparecem, "
                "você é ");

        if(gen){
            printf("deixada suspensa");
        }
        else{
            printf("deixado suspenso");
        }

        printf(" no ar, e imediatamente começa a cair. Desesperad");

        if(gen){
            printf("a");
        }
        else{
            printf("o");
        }

        printf(" você deseja estar em outro lugar, estala os dedos desejando estar em"
                " outro lugar. Você para de cair, tudo fica escuro.");
        
    }
    
    else if (a==5){
        ok=1;
        path=0;
        arc[9]++;
        arc[1]++;  
        
        p = acanthus(); 
        
    }      
    
    else{
        
        system("cls");
        printf("Existem apenas cinco caminhos, sua alma pode escolher um destino, mas não escapar dele.");
        ok=0;
        
        printf("\n1.Continuar\n");
        scanf("%i");
        
        
    }
    
    }while (ok!=1);  
    


    //Alocação dos arcanas    
    
    arc[*(p)]++;
    arc[*(p+1)]++;
    tird_a=*(p+2);  
    
/*
    printf("\nEscolha os arcana mais forte e o extra, respectivamente");
    scanf("%i",&a);
    arc[a]++;
    scanf("%i",&a);
    arc[a]++;
*/

    
    /*
    *******************************Final************************************
    */
    
        
    dmg++;  
    
    printf("\n\n1.Continuar...\n\n");    
    scanf("%i",&a);    
    clear();
    
    printf("Você desperta, porém não abre os olhos ainda, você não se lembra de nada que aconteceu. Lembra apenas do sonho incrívelmente real que acabou de ter. Seu corpo e sua cabeça doem");
    
    //Life health check
    if(arc[3]>0){
        printf(", você fraturou uma costela e a tíbia esquerda, e teve cortes e contusões leves no torso e nos braços");
    }
    
    //Hora
    if(arc[9]>0){
        printf(", é de noite, exatamente 1:53am, embora você não faça ideia de como tem certeza disso sem nem conseguir enxergar nada");
    }
    
    printf(".");
    
    if(arc[0]>0||arc[2]>0||arc[3]>0||arc[4]>1){
    printf(" Alguma coisa pesada lhe esmaga as pernas, impedindo que você se mova.");
    }
        
    do{
        printf("\n\n1.Abrir os olhos\n\n");
        scanf("%i",&a);
        clear();
    }while(a!=1);
       
    //Tutorial mana    
    if((arc[5]&&path!=1)||(arc[7]&&path!=1)||(arc[8]&&path!=4)){
        tutorial_mana(path);
        tut_mana=1;
        }
    
    printf("Você lentamente abre os olhos, tudo está um pouco embaçado ainda, ");
            
    if(arc[9]==0){
        printf("é noite e ");}
    
     printf("o ar parece estar coberto por uma fumaça escura. ");
    
    if(arc[5]==0&&arc[7]==0&&arc[8]==0){//Nada na visão
            }
    
     
    //Vê algo
    else{ 
        do{
        printf("Além da escuridão da noite e da fumaça você tem a impressão de ter sua visão encoberta por algo mais, como um véu ou filtro que te limita os sentidos.");
        printf("\n\n1.Realmente abrir os olhos");
        
        if(arc[5]){
            printf("[Mente]");}
        if(arc[7]){
            printf("[Espaço]");}
        if(arc[8]){
            printf("[Espírito]");}
        
        if((arc[5]&&path!=1)||(arc[7]&&path!=1)||(arc[8]&&path!=4)){//Check for mana cost        
        printf("(-1 Mana)");
         }
        
      
        printf("\n\n");
        scanf("%i",&a);
        clear();
        
        }while(a!=1);
        
        printf("Você imagina esse véu sendo erguido dos seus olhos, dos seus ouvidos, suas mãos e da sua alma.");
        
        //Mana cost
        if((arc[5]&&path!=1)||(arc[7]&&path!=1)||(arc[8]&&path!=4)){
            mana--;
        }
        
        //Espaço (Visão 360))
        if(arc[7]>0){
            printf("Sua visão se distorce por um segundo se esticando como um elástico"
                    " tensionado ao redor da sua cabeça, sua visão periférica se expandindo "
                    "aos poucos até chegar a sua nuca, e com um flash de luz tudo entra em foco.\nVocê enxerga tudo ao seu redor, "
                    "como se seus olhos tirassem uma perfeita foto panorâmica de 360 graus.");
            
            if(arc[5]>0){
                printf("Quando você se adapta a sua nova visão você sente potencial para mais."
                        "Você expande sua percepção além do que jamais poderia ter imaginado antes. Além de ver e ouvir você realmente sente, "
                        "alguém, alguma coisa,"
                    " ali com você. Uma consciência, porém não completamente humana. Parece estar atrás de você.");
            }
            
            if(arc[8]>0){
                printf("\nAlgo mais impede sua visão, você tem o potencial p"
                        "ara ver algo invisível, algo como o que você viu no se"
                        "u sonho. Você remove esse véu da mesma forma que o anterior. Agora de"
                        " olhos realmente abertos você");
                if(arc[5]>0){
                    printf(" vê o dono da consciência que chamou sua atenção.");
                }
                else{
                    printf(" vê algo que simplesmente não estava ali um segundo antes.");
                }
                
                printf("\n\n1.Continuar...\n\n");    
                scanf("%i",&a);    
                clear();
                
                printf("Qualquer outro o chamaria de um monstro, mas algo dentro de você sabe que se trata "
                        "de um espírito. Idêntico a um gato doméstico comum, porém com duas caudas, duas bocas e quatro olhos, "
                        "de pelo todo branco execeto por uma das caudas e uma das patas, pretos. Os dois pares de olhos estão fixos em você"
                        ", sem iris ou pupila, quatro orbes negros te observam com atenção. O gato não parece notar que foi descoberto, só agora você percebe"
                        "que ele está atras de você e não parece ter se dado conta de como você expandiu seu dom da visão"
                        "\nDe qualquer forma, você não pode ir a lugar nenhum antes de levantar.");
                clem[1]=1;//Viu o gato
            }
            
            if (arc[5]>0&&arc[8]==0){
                printf("Mas mesmo sendo capaz de enxergar em todas as direção ao mesmo tempo, você não encontra nada ali.");
            }
        }
        
        //Mente, sem espaço
        else if(arc[5]>0){
            printf("Você expande sua percepção além do que jamais poderia ter imaginado antes. Além de ver e ouvir você realmente sente, alguém, alguma coisa,"
                    " ali com você. Uma consciência, porém não completamente humana.");
            
            if(!arc[8]){
                printf(" Mas você não vê mais nada ali com você.");
            }
            
        }
        
        //Espírito
        
        else{
            printf("Você sabe que existe potencial para algo mais nos seus sentidos, algo que foi invisível a sua vida toda mas não mais, algo que você tem a impressão "
                    "de estar por aqui");
            
            if(arc[0]>0||arc[2]>0||arc[3]>0||arc[4]>1){
                printf(", mas que não pode ver da posiçao que está");
            }
            
            printf(".");
        }
        
    }
     
    printf("\n\n1.Continuar...\n\n");    
    scanf("%i",&a);    
    clear();
    
    if((!tut_mana)&&((arc[3]&&path!=4)||(arc[2]&&path!=3)||(arc[0]&&path!=2))){
        tutorial_mana(path);
        tut_mana=1;
    }
    
    if(arc[3]||arc[4]>1){
         tutorial_dox();
         tut_dox=1;
     }
     
     printf("Você consegue observar seus arredores com mais calma, aparente"
             "mente você estave em um acidente de carro, o automóvel batido e e"
             "m chamas a alguns metros deixa pouca dúvida. Na verdade, você pro"
             "vavelmente teve muita sorte de sair viv");
     
     if(gen){
         printf("a.");
     }
     else{
         printf("o.");
     }
     
     ///Visão do artefato
     
     //Prime + fate
     
     if(arc[6]&&arc[1]){
         
         printf("\n\n[Primórdio]\nVindo do carro, além das chamas, outra coisa chama sua atençã"
                 "o. Uma luz, uma aura iradiando de algo no banco de trás. Você"
                 " sente uma estranha conexão com essa energia, ela te atrai su"
                 "tilmente naquela direção, como um elástico levemente tensiona"
                 "do entre você e a fonte dessa aura.");
         
     }
     
     //Fate
     
     else if (arc[1]){
         
         printf("\n\n[Destino]\nVindo do carro, além das chamas, outra coisa chama sua atenção, "
                 "você sente uma estranha conexão, algo te atrai su"
                 "tilmente naquela direção, como um elástico levemente tensiona"
                 "do entre você e o banco do carro.");
         
     }
     
     //Prime
     
     else if(arc[6]){ 
         printf("\n\n[Primórdio]\nVindo do carro, além das chamas, outra coisa chama sua atençã"
                 "o. Uma luz, uma aura");         
         if(path==2){
             printf(" estranhamente familiar");
         }                 
        printf(" iradiando de algo no banco de trás.");
     }
     
     
     //Visão do acidende if Tempo
     if(arc[9]>0){
         printf("\n\n[Tempo]\nVocê tenta se lembrar do que ocorreu, sua memória está complet"
                 "amente perdida, mas você consegue abrir os olhos e encarar di"
                 "retamente o passado. Você se vê dirigindo, a estrada vazia e "
                 "escura, é difícil se concentrar na visão e ela "
                 "parece turva em vários pedaços, como uma janela embaçada. Alg"
                 "o te distrai na estrada, parece haver algum tipo de falha mec"
                 "ânica, você bate o veículo e a visão desaparece.");
     }
     
     
     //Cena do tronco
     
     do{
     if(arc[0]>0||arc[2]>0||arc[3]>0||arc[4]>1){
         
         
         
     printf("\n\nO peso que você sentia sobre as pernas é na verdade um tronco de á"
             "rvore que tombou sobre você.");
     
     
     if(arc[3]>0){
         printf(" De alguma forma você sabe que a madeira ainda está viva, morren"
                 "do, porém viva. Existe potencial nessa energia vital, você ac"
                 "ha que pode se livrar da árvore dessa foma.");     
         
     }
     
     if(arc[2]>0){
         printf(" A alguns metros de distância você repara nas chamas ao redor d"
                 "o carro, se você conseguisse trazer elas até aqui de"
                 " alguma forma, talvez pudesse queimar o tronco, sem se que"
                 "imar com alguma sorte.");
         
         
     }
     
     if(arc[0]>0){
         printf(" Talvez você consiga simplesmente quebrar a madeira, se houvesse"
                 " uma forma de deixa-la mais frágil.");         
     }
     
     if(arc[4]>1){
         printf("Talvez, parece difícil, mas você acredita ser capaz de moldar "
                 "a madeira, achar uma forma de torna-la mais leve.");                  
     }
     
    //***\\ 
     
    printf("\n\n1.");
    
    if(arc[3]>0){
        printf("Transformar o tronco[Vida]");        
        if(path!=4){
            printf("(-1 Mana)");
        }        
        printf(" (P)%i%%",(100-calc_dox(30,0)));
    }
    
    else if(arc[2]>0){
        printf("Usar o fogo[Forças]");
        if(path!=3){
            printf("(-1 Mana)");
        }
    }
    
    else if(arc[0]>0){
        printf("Destruir o tronco[Morte]");
        if(path!=2){
            printf("(-1 Mana)");
        }
    }
    
    else if(arc[4]>1){
        printf("Moldar o tronco[Matéria+]");
        printf(" (P)%i%%",(100-calc_dox(30,0)));        
    }
    
    //***\\
    
    if(((arc[3]>0)+(arc[2]>0)+(arc[0]>0)+(arc[4]>1))>1){
    printf("\n2.");
    
    if((arc[2]>0)&&(arc[3]>0)){        
        printf("Usar o fogo[Forças]");     
        if(path!=3){
            printf("(-1 Mana)");
        }
        
    }
    
    else if ((arc[0]>0)&&((arc[3]>0)||(arc[2]>0))){
        printf("Destruir o tronco[Morte]");
        if(path!=2){
            printf("(-1 Mana)");
        }
    }
    
    else if ((arc[4]>1)&&((arc[0]>0)||(arc[3]>0)||(arc[2]>0))){
        printf("Moldar o tronco[Matéria+]"); 
        printf(" (P)%i%%",(100-calc_dox(30,0)));        
    }
    }
    //***\\

    
    if(((arc[3]>0)+(arc[2]>0)+(arc[0]>0)+(arc[4]>1))>2){
    printf("\n3.");
    
    if(arc[4]>1){
        printf("Moldar o tronco[Matéria]"); 
        printf(" (P)%i%%",(100-calc_dox(30,0)));        
    }
    }
    
    
    printf("\n\n");
    
    scanf("%i",&a);
    
    //Scan
    
    //Para a==1
    
    if(a==1){
    
    if(arc[3]>0){ //Mudei
        
       clear();
        tronco_mudei(); 
        if(path!=4){
            mana--;
        }
        ok=1;
    }
    
    else if(arc[2]>0){ //Queimei
        
      clear();
        tronco_queimei();
        if(path!=3){
            mana--;
        }
        ok=1;
    }
    
    else if(arc[0]>0){ //Matei
        
       clear();
        tronco_matei(arc[3]);
        if(path!=2){
            mana--;
        }
        ok=1;
    }
    
    else if(arc[4]>1){ //Amassei
        
       clear();
        tronco_amassei();
        ok=1;
    }
    
    else{
        ok=0;
       clear();
    }
    }
    
    //***\\

    //Para a==2
    
    else if(a==2){
    
    if(((arc[3]>0)+(arc[2]>0)+(arc[0]>0)+(arc[4]>1))>1){
       
    if((arc[2]>0)&&(arc[3]>0)){ //Queimei       
        
       clear();
        tronco_queimei();
        if(path!=3){
            mana--;
        }
        ok=1;
         
    }
    
    else if ((arc[0]>0)&&((arc[3]>0)||(arc[2]>0))){ //Matei
       clear();
        tronco_matei(arc[3]);
        if(path!=1){
            mana--;
        }
        ok=1;
    }
    
    else if ((arc[4]>1)&&((arc[0]>0)||(arc[3]>0)||(arc[2]>0))){ //Amassei
        clear();
        tronco_amassei();
        ok=1;
    }
    
    else{
        ok=0;
        clear();
    }
    }
    }
    
    //***\\

    else if(a==3){
    
    if(((arc[3]>0)+(arc[2]>0)+(arc[0]>0)+(arc[4]>1))>2){ //Amassei
        
    if(arc[4]>1){
        
        clear();
        tronco_amassei(); 
        ok=1;
    }
    }
    
    else{
        ok=0;
       clear();
    }
    
    }
    
    //***\\

    else{
        ok=0;
        clear();
    }
    }              
    }while(!ok);
    
    //Fim cena do tronco//
    
    printf("\n\n1.Levantar...");
    printf("\n\n");
    scanf("%i",&a);
    clear();
    
    tutorial_roll();
    
    if((tut_mana==0)&&(arc[3]>0)){
        tutorial_mana(path);
        tut_mana=1;
    }
    
//Caso o jogador tenha espírito mas não tenha espaço ele vê o gato atrás dele, com obs caso ele tenha mente
    
    do{
        
    clear();    
        
    if((arc[8])&&!(arc[7])){
        if(arc[5]){
            printf("Você procura pela consciência que sentiu anteriormente. \n\n");
        }
                
        printf("[Espírito]\nQuando olha para trás você vê, uma pequena criatura que te obser"
                "vava. Qualquer outro o chamaria de um monstro, mas algo dentro"
                " de você sabe que se trata de um espírito. Idêntico a um gato "
                "doméstico comum, porém com duas caudas, duas bocas e quatro ol"
                "hos, de pelo todo branco execeto por uma das caudas e uma das "
                "patas, pretos. Os dois pares de olhos estão fixos em você, sem"
                " iris ou pupila, quatro orbes negros te observam com atenção.\n\n"
                "Ele inclina a cabeça para a direita, curioso, como se não ente"
                "ndesse por que você olha na direção dele. Só então o espírito "
                "percebe que você consegue vê-lo, e dispara correndo na direção"
                " das árvores.\n\n");
        
        clem[1]=1;
        
    }
//Caso o jogador tenha espaço e espírito ele já avistou o gato e tem um bônus caso vá persegui-lo
    
    if(arc[8]&&arc[7]){
        
        if(x1){
            printf("O espírito que você viu antes já desapareceu entre as árvores.");
        }
        
        else {
            printf("O espírito que você tinha visto antes ainda está atrás de você,"
                " ele te observa com atenção, e parece não ter percebido que você sabe "
                "que ele está ali.\n\n");
        }
    }
    
//Caso o jogador tenha prime ele percebe o artefato

    if((arc[6]||arc[1])){
        
        
        printf("Dentro do carro acidentado, no que parece ser o banco de trás, ");
        
        if(arc[6]){
                printf("a curiosa aura ainda chama sua atenção, é bastante intensa");
        
            if(path==2){
                printf(" e de certa forma lhe faz lembrar do seu sonho");
        }
        }
        
        else if(arc[1]){
            printf("alguma força ainda te compele naquela direção");
        }
        
        printf(", mas pode ser perigoso se aproximar do carro em chamas.");
    }

//Dar uma chance do jogador se curar
    
    if((arc[8]&&x1==0)||(arc[6]||arc[1])){
        printf("Porém, talvez não seja uma boa ideia ir a lugar nenhum, ferid");
        if(gen){
            printf("a");
        }
        else{
            printf("o");
        }
        printf(" da forma que você está.");
        }    
        
    else{
        printf("Você levanta com alguma dificuldade, bastante ferid");
        
        if(gen){
            printf("a");
        }
        else{
            printf("o");
        }
    printf(" devido ao acidente.");
    }
    
    if(arc[3]){
        printf(" Mas depois desse sonho, você acredita que pode fazer algo quanto a is"
                "so.");
                
    }    
    
    
    //Opções   
    
    printf("\n\n1.");
    
    if(arc[8]&&x1==0){
        if(arc[7]){
        printf("Ir na direção do espírito");
        }
        else{
            if(arc[8]>1){
                bonus=10;
            }
            printf("Perseguir o espírito (C)%i%%",(calc_roll(60,bonus)));
        }
    }
    
    else if((arc[6]||arc[1])){
        printf("Investigar o carro");
    }
    
    else if(arc[3]){
        printf("Cuidar dos seus ferimentos [Vida]");
        if(path==4){
            printf("(-1 Mana)");
        }
        else{
            printf("(-2 Mana)");
        }
    }
    
    else{
        printf("Procurar ajuda");
    }
    
    if((((arc[8]&&x1==0)>0)+((arc[6]||arc[1])>0)+(arc[3]>0)+1)>1){
    printf("\n2.");
    
    if((arc[6]||arc[1])&&arc[8]){
        printf("Investigar o carro");
    }
    
    else if(arc[3]&&((arc[6]||arc[1])||(arc[8]&&x1==0))){
        printf("Cuidar dos seus ferimentos [Vida]");
        if(path==4){
            printf("(-1 Mana)");
        }
        else{
            printf("(-2 Mana)");
        }
    }
    
    else{
        printf("Procurar ajuda");
    }
    }
    
    if((((arc[8]&&x1==0)>0)+((arc[6]||arc[1])>0)+(arc[3]>0)+1)>2){    
    printf("\n3.");
    
    if(arc[3]&&((arc[6]||arc[1])&&(arc[8]&&x1==0))){
        printf("Cuidar dos seus ferimentos [Vida]");
        if(path==4){
            printf("(-1 Mana)");
        }
        else{
            printf("(-2 Mana)");
        }
    }
    
    else{
        printf("Procurar ajuda");
    }
    }
    
    if((((arc[8]&&x1==0)>0)+((arc[6]||arc[1])>0)+(arc[3]>0)+1)>3){    
    printf("\n4.");
    
    printf("Procurar ajuda");
    }
    
    printf("\n\n");
    
    scanf("%i",&a);
    
    //Scan
    
    if(a==1){
    
    if(arc[8]&&x1==0){
        if(arc[7]){
            x1 = cat(1);
            
            if(x1==1){
                ok=0;
            }
            else{
                ok=1;
            }
        }
        else{
            x1 = cat(0);
            ok=1;
        }
    }
    
    
    else if((arc[6]||arc[1])){
        
        if (tut_mana==0&&((arc[0]&&path!=2)||(arc[2]&&path!=3))){
        
        tutorial_mana(path);
        
        tut_mana=1;
    }
        
        car();
        ok=1;
    }
    
    else if(arc[3]){
        heal();
        ok=mana_check(1,4);
        mana--;
    }
    
    else{
        help();
        ok=1;
    }
    }
    
    else if(((((arc[8]&&x1==0)>0)+((arc[6]||arc[1])>0)+(arc[3]>0)+1)>1)&&(a==2)){        
    
    if((arc[6]||arc[1])&&(arc[8]&&x1==0)){
        
        if (tut_mana==0&&((arc[0]&&path!=2)||(arc[2]&&path!=3))){
        
        tutorial_mana(path);
        
        tut_mana=1;
    }
        
        car();
        ok=1;
    }
    
    else if(arc[3]&&((arc[6]||arc[1])||(arc[8]&&x1==0))){
        heal();
        ok=mana_check(1,4);
        mana--;
    }
    
    else{
        help();
        ok=1;
    }
    }
    
    
    
    else if(((((arc[8]&&x1==0)>0)+((arc[6]||arc[1])>0)+(arc[3]>0)+1)>2)&&(a==3)){            
    
    if(arc[3]&&((arc[6]||arc[1])&&arc[8])){
        heal();
        ok=mana_check(1,4);
        mana--;
    }
    
    else{
        help();
        ok=1;
    }    
    }
    
    else if(((((arc[8]&&x1==0)>0)+((arc[6]||arc[1])>0)+(arc[3]>0)+1)>3)&&(a==4)){            
        help();
        ok=1;
    }
    
    else{
        ok=0;
    }

    
    }while(!(ok));
    
    
//Caso o jogador não tenha nem espírito nem prime, ou resolva esperar, ir direto para a cena do Janus chegando    
    

printf("\n\n1.Continuar\n\n");
scanf("%i",&a);
clear();

    
//Jogador chegando na cena

//Tutorial para gasto de mana na leitura das auras
    
if((tut_mana==0)&&(((arc[6]>0)&&(path!=3))||((arc[5]>0)&&(path!=1)))){
    tutorial_mana(path);
    tut_mana=1;
}
    
do{
    
        clear();

//Janus surgindo
        
if(clem[4]){
    printf("Voltando da parte mais fechada do trecho de mata ao redor da estrada"
            " você encontra alguém no local do acidente. Uma silueta masculina "
            "contra as chamas, de pé ao lado do seu carro em chamas, olhando"
            " ao redor e dentro do carro como se procurasse por algo. Uma motocicleta"
            " parada a certa distância do local explica de onde ele surgiu.");
}

else{
    printf("No fim da estrada você percebe alguma coisa se aproximando, apenas "
            "um farol, uma moto, o único veículo que você vê passar desde que acordou."
            " Ela para no acostamento, alguns metros antes do acidente, o motor"
            "ista desce, a viseira do capacete cobre todo o seu rosto, mas apar"
            "entemente é um homem.");
}

//Se puder ler auras
if(arc[6]||arc[5]){    

    
    printf("\n\nAntes mesmo de conseguir enxerga-lo direito você tem a impressão"
            " de que pode ver algo, ao redor dele");
    
    if((arc[6]&&(path!=3))||(arc[5]&&(path!=1))){
        printf(" mas vai ser necessário um pouco de esforço para realmente discernir o que é.");
    }
    
    else if((arc[6]&&path==3)||(arc[5]&&path==1)){
        printf(" claro como o dia.");
    }
    
    printf("\n\n1.");
    
    if(arc[6]){
        printf("Ver a alma dele[Primórdio]");
        if(path!=3){
            printf("(-1 Mana)");
        }
    }
    
    else if(arc[5]){
        printf("Ler a aura dele[Mente]");
        if(path!=1){
            printf("(-1 Mana)");
        }
    }
    
    if(((arc[6]>0)+(arc[5]>0))>1){
        printf("\n2.");
        printf("Ler a aura dele[Mente]");
        if(path!=1){
            printf("(-1 Mana)");
        }
        
        printf("\n3.Ver ambos[Primórdio][Mente](-1 Mana)");
        
        printf("\n4.Ignorar a aura a redor dele");
        
    }
    
    else {
        printf("\n2.Ignorar a aura a redor dele");
    }
    
   //Scans
    
    printf("\n\n");
    scanf("%i",&a);    
    clear();
    
    if(a==1){
    
    if(arc[6]){//Primórdio
        
        ok=mana_check(1,3);
        
        if(ok){
                       
            printf("Você vê percebe a alma como uma silhueta de luz ao redor e d"
                    "entro do corpo, mas você não consegue distinguir nada de útil"
                    " exceto pelas pequenas faíscas de luz que parecem piscar a"
                    "o redor dele parece uma alma ''normal'' até onde você pode dizer"
                    ". Na verdade algumas faíscas piscam ao redor da sua também,"
                    " algo te diz que isso tem a ver com seu sonho e as "
                    "coisas estranhas que você tem visto e feito desde que levantou."
                    " Algo te diz que ele também pode ver e fazer coisas.");
        }
        
    }
    
    else if(arc[5]){//Mente
       
        ok=mana_check(1,1);
        
        if(ok){
            clem[6]=1;//Liga a visão de aura            
            printf("Você consegue distinguir uma aura turva de luz colorida ao "
                    "redor dele");
            
            if(clem[4]==0){
                printf(" enquanto ele se aproxima");
            }
            else{
                printf(" mesmo contra a luz das chamas, ela se sobrepõe");
            }
            
            printf(". A aura é principalmente de um tom forte de violeta, com fe"
                    "ixes vermelhos surgindo momentáriamente e se dissipando. F"
                    "elicidade, euforia, é surpreendentemente óbvio o que as co"
                    "res significam. Alguém está bastante animado em ver um aci"
                    "dente de carro.");
            
        }
    }
    }
    
    else if(((arc[6]>0)+(arc[5]>0))>1){
        
        if(a==2){//Mente           
      
            ok=mana_check(1,1);
        
        if(ok){
            clem[6]=1;//Liga visão de aura
            
            printf("Você consegue distinguir uma aura turva de luz colorida ao "
                    "redor dele");
            
            if(clem[4]==0){
                printf(" enquanto ele se aproxima");
            }
            else{
                printf(" mesmo contra a luz das chamas, ela se sobrepõe");
            }
            
            printf(". A aura é principalmente de um tom forte de violeta, com fe"
                    "ixes vermelhos surgindo momentáriamente e se dissipando. F"
                    "elicidade, euforia, é surpreendentemente óbvio o que as co"
                    "res significam. Alguém está bastante animado em ver um aci"
                    "dente de carro.");
        }
        }
    
        else if(a==3){//Ambos
                    
            ok=mana_check(1,999);
            if(ok){              
                
                clem[6]=1;//Liga visão de aura
                
                printf("Você vê percebe a alma dele como uma silhueta de luz, ti"
                        "ngida pelas cores da aura ao redor e d"
                    "entro do corpo, você não consegue distinguir nada de útil da alma em si"
                    " exceto pelas pequenas faíscas de luz que parecem piscar a"
                    "o redor dele, ela parece uma alma ''normal'' até onde você pode dizer"
                    ". Na verdade algumas faíscas piscam ao redor da sua também,"
                    " algo te diz que isso tem a ver com seu sonho e as "
                    "coisas estranhas que você tem visto e feito desde que levantou."
                    " Algo te diz que ele também pode ver e fazer coisas.");
                
                printf("\n\nA aura é principalmente de um tom forte de violeta, com fe"
                    "ixes vermelhos surgindo momentáriamente e se dissipando. F"
                    "elicidade, euforia, é surpreendentemente óbvio o que as co"
                    "res significam. Alguém está bastante animado em ver um aci"
                    "dente de carro.");
                                                
            }
        }
        
        else if(a==4){
            printf("Seja lá o que for não vale a pena se distrair com isso no "
                    "momento. Você dispersa a imagem que emana dele e se concen"
                    "tra na pessoa em si.");
        }
        
        else{
            ok=0;
        }
    }
    
    else {
        
        if(a==2){     
        
        printf("Seja lá o que for não vale a pena se distrair com isso no "
                    "momento. Você dispersa a imagem que emana dele e se concen"
                    "tra em falar com a pessoa em si.");
            
        }
        
        else{
            ok=0;
        }
        
    }    
    
    
}
        
//Sem prime nem mente        
else{
    ok=1;
}
    }while(!ok);
    

printf("\n\n1.Continuar...\n\n");
scanf("%i",&a);
clear();

// Interação com Janus //

//Caso o jogador esteja vindo de longe

if(clem[4]){
    do{
        clear();
        
printf("Você não tem certeza do que ele está procurando, mas ele ainda não te v"
        "iu. Você poderia usar a oportunidade a seu favor. Ou simplesmente se a"
        "proximar, ele pode estar procurando por sobreviventes.");

printf("\n\n1.Ir até lá cumprimenta-lo\n2.Tentar se aproximar silenciosamente (C)%i%%", (calc_roll(60,0)));

if((2+(arc[2]>0)+(arc[7]>0))>2){
    printf("\n3.");
    
    if(arc[2]){
        printf("Se aproximar silenciosamente controlando o som[Forças]");
        if(path!=3){
            printf("(-1 Mana)");
        }
    }
    
    else if(arc[7]){
        printf("Estender seus sentidos naquela direção[Espaço]");
        if(path!=1){
            printf("(-1 Mana)");
        }
    }
    
}

if((2+(arc[2]>0)+(arc[7]>0))>3){
    printf("\n4.");
    if(arc[7]){
        printf("Estender seus sentidos naquela direção[Espaço]");
        if(path!=1){
            printf("(-1 Mana)");
        }
    }
}

printf("\n\n");
scanf("%i",&a);
clear();

//Scans

if(a==1){//Greet
    ok=1;
    
    printf("Você vai na direção dele, acenando para chamar sua atenção ''Ei!''. Ele logo"
            " vira na sua direção, e você consegue vê-lo melhor. Ele é jovem, te"
            "m os cabelos loiros despenteados e olhos claros, usa uma jaqueta "
            "escura e uma calça jeans bastante desbotada. Quando te vê ele "
            "para o que estava fazendo e acena de volta, te chamando para se ap"
            "roximar.");
    
    if(clem[6]){
        printf("\n\nAs cores vibrantes ao redor dele esmaecem e dão espaço a um t"
                "om fechado de azul que sugere desconfiança.");
    }
}

else if(a==2){//Sneak
    ok=1;
    
    if(roll(60,0)){//Sucesso
        printf("Você se aproxima com cuidado, usando as sombras da folhagem e a"
                " iluminação imprecisa das chamas ao seu favor. Você consegue c"
                "hegar perto o bastante para vê-lo melhor. Ele é jovem, te"
                "m os cabelos loiros despenteados e olhos claros, usa uma jaqueta "
                "escura e uma calça jeans bastante desbotada. Ele está com certeza "
                "procurando alguma coisa ao redor do seu carro.");        
        if(arc[1]||arc[6]){
            printf(" Você se lembra da");
            if(arc[6]){
                printf(" aura que viu vindo dessa direção.");
            }
            else if(arc[1]){
                printf(" sensação de atração que sentiu.");
            }
        }
        else{
            printf(" Ele constantemente olha para alguma coisa no banco de trás"
                    " do carro.");
        }
        
        printf("\n\nEle xinga baixo sobre ter queimado os dedos e parece estar "
                "procurando ao redor por algo que o ajude a alcançar o banco. V"
                "ocê teria que se aproximar para ver o que ele está procurando,"
                " e de qualquer forma se está no seu carro provavelmente te per"
                "tence."
                "\n\nVocê sai das sombras e vai na direção do carro. Ele acena "
                "assim que te vê, de forma amigável aparentemente.");
            
    }
    
    else{
        printf("Você se aproxima com cuidado, usando as sombras da folhagem e a"
                " iluminação imprecisa das chamas ao seu favor. Você consegue c"
                "hegar perto o bastante para vê-lo melhor. Ele é jovem, te"
                "m os cabelos loiros despenteados e olhos claros, usa uma jaqueta "
                "escura e uma calça jeans bastante desbotada.\n\n"
                "Ele parece estar resmungando ou falando sozinho, chegando mais "
                "perto você poderia...\n\nCRACK!\n\nUm galho especialmente seco"
                " e barulhento quebra quando você dá mais um passo. O homem olha na"
                " sua direção, e acena, de forma amigável aparentemente, convid"
                "ando você a se aproximar.");
    }
    
    if(clem[6]){
        printf("\n\nAs cores vibrantes ao redor dele esmaecem e dão espaço a um t"
                "om fechado de azul que sugere desconfiança.");
    }

}

else if(((2+(arc[2]>0)+(arc[7]>0))>2)&&a==3){
        
    if(arc[2]){
        ok=mana_check(1,3);
        
        if(ok){//silent+
            printf("Se concentrando nas vibrações do ar, você consegue"
                    " enxergar a energia em forma de som emanando sutilmente d"
                    "a sua respiração, das folhas sacudidas pelo vento e do rap"
                    "az que parece estar falando sozinho enquanto procura por a"
                    "lgo ao redor do seu carro. Tocando nos seus pés você imagi"
                    "na um vácuo ao redor de cada um deles, uma bolha suprimind"
                    "o som, e impedindo que o ar se mova. Em perfeito silêncio "
                    "você consegue se aproximar\n\nEle é jovem, te"
                "m os cabelos loiros despenteados e olhos claros, usa uma jaqueta "
                "escura e uma calça jeans bastante desbotada. Ele fala sozinho, "
                    "reclamando sobre como queimou os dedos tentando pegar ''a "
                    "droga do olho''.");     
            
            if(arc[1]||arc[6]){
            printf(" Você se lembra da");
            if(arc[6]){
                printf(" aura que viu emanando do carro.");
            }
            else if(arc[1]){
                printf(" sensação de atração que sentiu vinda do carro.");
            }   
            }
            
            printf("Independente do que se trate se está no seu carro provavelm"
                    "ente te pertence. Você não vai descobrir mais do que isso "
                    "se escondendo, liberando os seus pés do vácuo que você cri"
                    "ou você decide falar com ele.\n\n''Ei!''\n\nEle vira na su"
                    "a direção quando te ouve e acena de forma amigável, convid"
                    "ando você a se aproximar.");
            
            if(clem[6]){                
                printf("\n\nAs cores vibrantes ao redor dele esmaecem e dão espaço a um t"
                        "om fechado de azul que sugere desconfiança.");
            }
        }
    }
    
    else if(arc[7]){
        ok=mana_check(1,1);
        
        if(ok){//Space
           
            printf("Ele ainda não parece ter te visto, por sorte não existe ne"
                    "cessidade de se aproximar. Você mentaliza seus sentidos, s"
                    "ua audição e sua visão, desligados dos seus orgãos ou do s"
                    "eu corpo, uma entidade maleável, móvel. Você gentilmente a"
                    "rrmessa sua percepção na direç"
                    "ão do carro, observando o homem como se estivesse ao seu l"
                    "ado.\n\n"
                    "Ele é jovem, te"
                    "m os cabelos loiros despenteados e olhos claros, usa uma jaqueta "
                    "escura e uma calça jeans bastante desbotada. Ele constante"
                    "mente olha para dentro do carro, na direção do banco de tr"
                    "ás.");
            
            if(arc[1]||arc[6]){
                printf("Você logo se lembra da ");
                
                if(arc[6]){
                    printf("aura");
                }
                else if(arc[1]){
                    printf("sensação de atração");
                }
                printf(" que vinha do carro. ");
            }
            
         printf("Ajustando um pouco o ângulo dos seus setidos você consegue "
                 "ver o que parece ser uma pedra preciosa ou um cristal, red"
                 "ondo, do tamanho de uma bola de gude caído próximo ao cinto"
                 " de segurança. Independente do que seja, se está dentro do seu"
                 " carro provavelmente te pertence, mas você não vai conseguir faze"
                 "r muito mais do que observar de onde está.\n\n"
                 "Saindo do seu esconderijo o rapaz logo percebe sua aproximação"
                 " e acena amigávelmente para que você se aproxime.");
         
         clem[8]=1; //Viu o cristal
         
         if(clem[6]){                
                printf("\n\nAs cores vibrantes ao redor dele esmaecem e dão espaço a um t"
                        "om fechado de azul que sugere desconfiança.");
            }
        }
    }
    
    else{
        ok=0;
    }
    
}

else if(((2+(arc[2]>0)+(arc[7]>0))>3)&&a==4){
   
    if(arc[7]){
        
       ok=mana_check(1,1);
        
        if(ok){//Space
            
            printf("Ele ainda não parece ter te visto, por sorte não existe ne"
                    "cessidade de se aproximar. Você mentaliza seus sentidos, s"
                    "ua audição e sua visão, desligados dos seus orgãos ou do s"
                    "eu corpo. Você gentilmente arrmessa sua percepção na direç"
                    "ão do carro, observando o homem como se estivesse ao seu l"
                    "ado.\n\n"
                    "Ele é jovem, te"
                    "m os cabelos loiros despenteados e olhos claros, usa uma jaqueta "
                    "escura e uma calça jeans bastante desbotada. Ele constante"
                    "mente olha para dentro do carro, na direção do banco de tr"
                    "ás.");
            
            if(arc[1]||arc[6]){
                printf("Você logo se lembra da ");
                
                if(arc[6]){
                    printf("aura");
                }
                else if(arc[1]){
                    printf("sensação de atração");
                }
                printf(" que vinha do carro. ");
            }
            
         printf("Ajustando um pouco o ângulo dos seus sentidos você consegue "
                 "ver o que parece ser uma pedra preciosa ou um cristal, red"
                 "ondo, do tamanho de uma bola de gude caído próximo ao cinto"
                 " de segurança. Independente do que seja, se está dentro do seu"
                 " carro provavelmente te pertence, mas você não vai conseguir faze"
                 "r muito mais do que observar de onde está.\n\n"
                 "Saindo do seu esconderijo o rapaz logo percebe sua aproximação"
                 " e acena amigávelmente para que você se aproxime.");
         
         clem[8]=1; //Viu o cristal
         
         if(clem[6]){                
                printf("\n\nAs cores vibrantes ao redor dele esmaecem e dão espaço a um t"
                        "om fechado de azul que sugere desconfiança.");
            }
            
        }
    }
    
    else{
        ok=0;
    }
}

else{
    ok=0;
}

    }while(!(ok));
 
printf("\n\n1.Continuar...\n\n");
scanf("%i",&a);
clear();
    
}

else{//Já estava
    
    printf("Assim que te vê próximo ao carro, em meio a cena do acidente, ele guarda o capacete na moto e acena, indo na sua direção. "
            "Ele é jovem, tem os cabelos loiros despenteados e olhos claros, us"
            "a uma jaqueta escura e uma calça jeans bastante desbotada.");
    
    if(clem[6]){                
                printf(" As cores vibrantes ao redor dele esmaecem e dão espaço a um t"
                        "om fechado de azul que sugere desconfiança.");
            }
    printf("\n\n");
}

//Janus mais próximo

do{
printf("''Ei! Tudo bem com você?'' Ele tem olhos grandes e sorridentes, estatur"
        "a mediana, e mãos que não parecem acostumadas a trabalho físico, embora"
        " ele não aparente estar fora de forma, ou ao menos não parece especial"
        "mente gordo ou franzino.\n\n");

printf("''é o seu carro? Você se machucou?''");

printf("\n\n1.''Claro que sim? Você viu o estado do meu carro?''"
        "\n2.");
if(dmg){
    printf("''Um pouco, eu acho que tive sorte na verdade...''");
}
else{
    printf("''Não, eu acho que já dei jeito nisso na verdade''");
}
    printf("\n3.");
if(clem[4]){
    printf("''O que você quer com o meu carro?''");
}
else{
    printf("''Um pouco, obrigado por parar para ajudar''");
}
    
printf("\n\n");    
scanf("%i",&a);
clear();
}while(a<1||a>3);

//Respostas

if(a==1){//Rude
    printf("''Wow! Desculpa por ter perguntado. Considerando o estado do carro "
            "eu to surpreso que alguém tenha saído vivo de lá. Bem... não muito s"
            "urpreso''");
}

else if(a==2){
    if(dmg){//Machucado
        printf("''Sorte!'' Ele sorri e faz aspas com as mãos quando fala. ''Sei"
                " bem como é''");
    }
    else{//curado
        printf("''Ah! Entendi, bom pra você, eu não ia poder te curar. Não que eu"
                " não queira nem nada, eu só não sei mesmo''");
    }
}

else if(a==3){
    if(clem[4]){//Acusador
        printf("''Hum... Eu...'' Ele coloca a mão na nuca e vira o rosto para os lados "
                "evitando seu olhar. ''Eu meio que esq"
                "ueci uma coisa no seu carro''");
    }
    
    else{//Obrigado
        printf("''Não que eu não fosse parar para ajudar alguém em um acidente,"
                " mas para ser sincero eu já estava procurando por você''");
    }    
    clem[7]=1;
}

printf("\n\n1.''Como assim?''\n\n");
scanf("%i",&a);
clear();

do{
printf("''Quer dizer...'' Ele para, te encarando de forma especialmente confusa.");

if(clem[6]){
    printf(" A aura ao redor dele muda para um tom mais calmo e menos escuro, vo"
            "cê pode ver a dúvida dele na forma de pequenos pontos coloridos que"
            " rapidamente surgem quando ele pergunta.");
}

printf("''Ei, mas qual seu nome?''");

printf("\n\n1.''%s, e o seu?''"
        "\n2.''%s, mas pare de mudar de assunto!''\n\n", str, str);

scanf("%i",&a);
clear();
}while(a<1||a>2);

do{
printf("''Mas, esse é seu nome de verdade?! Como assim? Você acabou de despertar por acaso?!''");
printf("\n\n");
printf("1.''Hun? Do que você está falando?''"
        "\n2.''Claro que é meu nome de verdade, o que você esperava?''"
        "\n3.''Despertar? Você quer dizer o sonho...''");

printf("\n\n");
scanf("%i",&a);
clear();

}while(a<1||a>3);

if(a==1){
    printf("''Você não sabe mesmo!''");
}

else if(a==2){
    printf("''Qualquer coisa menos seu nome de verdade. Hahahaha!''");
}

else if(a==3){
    printf("''Sim! Sim!''");
}

printf("\n\nEle aponta para você e começa a falar rápido em um tom entusiasmado e agitando os braços, você tem a impressão que "
        "ele está se contendo para não lhe segurar e te sacudir no ar.");

if(clem[6]){
    printf(" Ondas de vermelho e amarelo se alternam rapidamente em um padrão frenético, refletindo a animação dele.");
}

printf("\n\n''Logo depois desse acidente provavelmente. Você teve um sonho muito rea"
        "l, e desde que ele acabou você vê as coisas de forma diferente. Conse"
        "gue fazer coisas que não deveriam fazer sentido, mas que parecem per"
        "feitamente naturais para você, mesmo que você não saiba explicar?''");

printf("\n\n1.''Sim... Exatamente isso''\n\n");

scanf("%i",&a);
clear();

do{
printf("''Ah! Eu sempre quis ser o primeiro a contar pra alguém'' Ele dá um passo"
        " para trás e abre os braços como se jatos de confete e efeitos pirotécnicos"
        " fossem surgir atrás dele.\n\n");

printf("''Você é um");
if(gen){
    printf("a maga!!!");
}
else{
    printf(" mago!!!");
}
printf("''");

printf("\n\n1.''Tipo com varinhas e chapéis pontudos e caldeirões?''"
        "\n2.''E é por isso que eu não me lembro de nada?''"
        "\n3.''Ok, mas falando sério agora sério agora...''");

printf("\n\n");
scanf("%i",&a);
clear();
}while(a<1||a>3);

if(a==1){
    printf("''Não! Claro que não!''\n\n''Quer dizer... as varinhas sim, mas são "
            "opcionais. Na verdade eu já ouvi falar de algumas pessoas que usam"
            " caldeirões... Mas definitivamente sem chapéis pontudos!''");
}

else if(a==2){
    printf("''Você perdeu a memória? Não, eu acho que você só bateu a cabeça mesmo. Mas eu tenho uma a"
            "miga que talvez possa te ajudar com isso.''");
}

else if(a==3){
    printf("''Sempre tem um cético não é mesmo?'' Ele rola os olhos, sarcástico."
            " ''Você não está vendo o mundo de forma diferente? Não fez nada que"
            " não consiga explicar desde que acordou? Sua alma não se sente livre de "
            " uma âncora que te acompanhava a vida toda?! Eu estou literalmente"
            " olhando pra ela nesse momento ");
    if(gen){
        printf("moça");
}
    else{
        printf("cara");
    }
    
    printf(", você é um");
    
    if(gen){
        printf("a maga");
    }
    else{
        printf(" mago");
    }
    printf(".''");
    
}

printf("\n\n''Primeira lição sobre ser um mago. Nomes tem poder, evite contar seu"
        " nome verdadeiro para outros magos, mais fácil de te encontrarem, espionarem "
        "em você e coisas assim. Geralmente usamos nomes falsos entre nós, e mesmo esses"
        " ainda tem um pouco de poder, mas ia ser tipo, impossível, conviver sem chamar "
        "as pessoas de alguma coisa. Você pode me chamar de Janus falando nisso.''");

printf("\n\n");
printf("1.Continuar...\n\n");
scanf("%i",&a);
clear();

if(clem[7]){
    printf("''Mas eu quase esqueço. Como eu dizia tem um motivo para eu ter te encontrado aqui. Seu carro,"
            " eu esqueci uma coisa dentro dele.");
}
else{
    printf("Ele para um momento e dá um passo para trás como se te estudasse.\n\n''Eu acho que eu posso te contar de qualquer forma, eu não te encontrei por acaso passando pela estrada, "
            "eu deixei uma coisa no seu carro.");
}

if(clem[4]){//janus já viu o cristal
    printf(" Ficou ali atrás está vendo? Aquele cristalzinho roxo.''"
            "\n\nEle aponta para dentro do carro, você se aproxima para ver mais de "
            "perto, ele está largado no banco do passageiro perto do cinto.");
    
    if((arc[6]||arc[1])&&(!(clem[8]))){
        
        printf(" Era, afinal, essa a fonte da ");
        
        if(arc[6]){
            printf("aura que você viu.");
        }
        
        else if(arc[1]){
            printf("força que parecia te atrair nessa direção.");
        }
    }
    
    else if(clem[8]){
        printf(" O mesmo cristal que você tinha avistado antes.");
    }
    
    eye_grab();
    
}

else{//Janus chegou agora e não viu
    printf(" Tipo um cristal, parece um olho. Ele é um artefato mágico, então talvez você tenha percebido ele.''");
    
    //Ja peguei troxão
    if(clem[3]==1){
        printf("\n\n1.''Esse aqui?'' *Mostrar o cristal*");
        
        printf("\n\n");
        scanf("%i",&a);
        clear();
        //E caímos para o you are the chosen 1!        
    }
    
    //Não peguei
    else{
        if(clem[8]){
            printf(" Você reconhece como provavelmente sendo o que você viu mais"
                    " cedo no banco de trás do seu carro. O pequeno cristal arredondado "
                    "ainda está ali.");
        }
        else if (arc[6]||arc[1]){
            printf("\n\nIsso provavelmente explica a ");
            
            if(arc[6]){
                printf("aura que você viu vinda da direção do carro");
            }
            else if(arc[1]){
                printf(" atração que você estava sentindo por alguma coisa na direção do carro");
            }
            
            printf(". Uma observação rápida do banco de trás encontra uma pequena"
                    " pedra arredondada, mas lapidada em várias faces.");
        }
        
        else{
            printf("\n\nVocê explica que não percebeu nada desse gênero. ''Eu "
                    "me lembro de ter jogado pela janela, ainda deve estar aqui"
                    " atrás'' Ele vai na direção do carro e olha por dentro da "
                    "janela quebrada. ''Ali! no banco de trás'' largado ao lado "
                    "do cinto você vê uma pequena pedra arredondada, mas lapidada "
                    "em várias faces. ");
        }
        
        eye_grab();
    }
}

//YOU ARE THE CHOSEN ONE!!1!!!11ELEVEN

{
printf("Assim que ");
    
if(clem[3]==1){
        printf("você mostra o cristal");
}
    
else{
        printf("você vê o cristal");
}

if(arc[1]){
    
    printf(" a sensação de atração que você sentia se intensifica. Alguma força "
            "parece agir não só sobre você e o cristal, mas sobre Janus também,"
            " ele parece perceber a mesma coisa, pois começa a sorrir descontroladamente.");    
}

else{
    printf(" Janus começa a sorrir descontroladamente, olhando para você depois para o "
            "cristal, e para você de novo.");
}

printf("\n\n''Você é ");

if(gen){
    printf("a terceira");
}
else{
    printf("o terceiro");
}

printf("!? Hahahaha! Esse dia só fica melhor''");

printf("\n\n1.''Como assim? Do que você está falando?''"
        "\n2.");

if(arc[1]){
    printf("''Você quer dizer essa força que eu sinto...?''");
}
else{
    printf("''Acho que você está vendo alguma coisa que eu não estou''");
}

printf("\n3.''Você está realmente me assustando agora...''\n\n");

scanf("%i",&a);
clear();

}while(a<1||a>3);


do{
if(a==1){
    
    if(gen){
        printf("''Você é o cara que nós estávamos procurando! A mulher no caso...''");
    }
    
    else{
        printf("''De você! E desse olho!'' ");
        
        if(clem[3]==1){
            printf("Ele aponta pro cristal na sua mão.");
        }
        else{
            printf("Ele te mostra novamente o cristal, quase esfregando-o na sua cara.");
        }
    }
}

else if(a==2){
    if(arc[1]){
        printf("''Ah você sente também! ótimo, vai ser mais fácil de explciar''");
    }
    else{
        printf("''Você não sente? Talvez por que eu sou treinado em Destino, mas a aura "
                "parece tão forte em você quanto em mim, com certeza''");
    }
}

else if(a==3){
    printf("''Desculpa! Desculpa! É que... longa história''");
}

printf("\n\nEle para para respirar por um segundo, tentando se acalmar.");

if(clem[6]){
    printf(" Você consegue ver as cores na aura dele se tornando mais amenas.");
}

printf("\n\n''Eu tenho uma irmã, maga também. Quando despertamos nós descobrimos"
        " que tinhámos nascido sob uma profecia, mas ela também mencionava um "
        "'terceiro, de outro sangue'. Alguém que não fosse da nossa família. Na verdade...'' "
        "Ele olha ao redor apreensivo.\n\n"
        "''Eu te conto no caminho, é melhor sairmos daqui. Mais ninguém te viu, certo?''");

printf("\n\n1.");

if(clem[1]){
    printf("''Eu vi um gato...''");
}

else if(arc[5]){
    printf("''Eu achei ter sentido uma presença...''");
}

else{
    printf("''Não, você é a primeira pessoa que passa''");
}

printf("\n\n");
scanf("%i",&a);
clear();
}while(a!=1);




    if(clem[1]){
        printf("''Era uma gata meio estranha? Quatro olhos, dois rabos, na verdade"
                " um espírito?''");
        
        printf("\n\nVocê confirma");
        
        printf("\n\n''Merda! Era a Fortuna, o familiar da minha irmã, ela já deve saber que "
                "o olho está aqui, mas talvez ainda não saiba quem é você''");
        
        if(clem[1]==2){
            printf("\n\n''Na verdade...'' Você acrescenta ''Sua irmã é loira? Olhos verdes como os seus?''");
            
            printf("\n\n''Sim... como você sabe''");
            
            printf("\n\n''Eu segui a gata, vi quando ela abriu um portal e pulou nos braços da sua irmã''\n\n");
            
            printf("''Isso é pior ainda, quer dizer que ela...''");
            
        }
        
    }
    
    else if(arc[5]){
        printf("''Presença? Como uma consciência? Você sabe Mente então, certo? Pode"
                " ter sido só um animal ou algo assim, mas é melhor ...''");
    }
    
    else{
        printf("''ótimo, talvez ela ainda não...''");
    }
    
    printf("\n\nJanus para de falar de repente. Você sente um calafrio na base da espinha");
    
    if(clem[1]==2){
        printf(", a mesma sensação de quando viu o portal sendo aberto");
    }
    
    printf(".");
    
    if(arc[7]){
        printf("\n\n[Espaço]\nSua visão continua estendida, passando atrás de você, por entre"
                " as árvores você consegue ver um vulto, passando rápido de mais para identificar. ");
    }
    
    if(arc[5]){
        
        printf("\n\n[Mente]\n");
        
        if(arc[7]){
            printf("Além disso v");
        }
        else{
            printf("V");
        }
        
        printf("ocê sente mais uma consciência além da sua e de Janus, mais dua"
                "s na verdade, diferentes entre si e diferentes da que você sent"
                "iu quando acordou.");
    }
    
    printf("\n\n");
    
    printf("Janus puxa do bolso uma moeda de prata, grande como o que você veria"
            " em um filme de piratas, mas marcada com um pentagrama em um dos "
            "lados, e dois rostos virados em direções opostas do outro. Ele com"
            "eça a move-la entre os dedos, e você tem a impressão que ele se con"
            "centra para conjurar algum tipo de magia.\n\n");
    
    printf("1.Continuar...\n\n");
    scanf("%i",&a);
    clear();
    
    printf("Você ouve um farfalhar entre as folhas e um bater de asas, algo passa"
            " ao seu lado, rápido de mais para identificar. ");   
    
    if(clem[3]==1){
        printf("Você sente uma dor aguda nas costas da mão, dois cortes profundos "
                "fazem você derrubar o cristal no chão [-1 Saúde]. Em um segundo rasante, t"
                "ão rápido quanto, o falcão que te atacou recolhe o artefato do "
                "chão e levanta voo. Janus se desconcentra, seja lá o que tentava"
                " fazer parece ter falhado.");        
        dmg++;
        
    }
    
    if(clem[3]==2){
        printf("A sombra vai na direção de Janus, ele sufoca um grito de dor, m"
                "as deixa cair o cristal, ele para qualquer magia que estivesse "
                "tentando para tentar estancar os dois cortes profundos nas costas da"
                " mão. Logo em seguida o falcão que o atacou dá um segundo rasante, re"
                "colhendo o artefato e levantando voo.");
    }
    
    printf("\n\nDe trás de uma das árvores um homem aparece, ele chama o animal, que "
            "pousa diligentemente sobre seu braço e lhe entrega o olho de cristal.\n\n"
            "''Merda!'' Janus xinga. ''Parece que alguém te viu''\n\n"
            "O recém-chegado é um homem negro, aparentando ser um pouco mais velho"
            " que o outro mago, um palmo mais alto e de compleição forte. Ele usa um "
            "casaco de frio pesado e tem os cabelos em dreadlocks curtos e bem cuidados."
            " Ele agita o braço e a ave voa para uma árvore próxima."
            "\n\n''Janus! Sua irmã pediu que eu lhe avisasse que isso já foi longe"
            " de mais. Entregue os artefatos que você tem, e pare de procurar pelo "
            "rei. Não vale a pena o risco!''");
    
    printf("\n\n1.Continuar...\n\n");
    scanf("%i",&a);
    clear();
    
    do{
    printf("''Ah, claro Yoonir. Estávamos 2 a 1, eu finalmente ia conseguir empatar a pontuação"
            " com o olho. Você tem que adimitir que largar ele em um carro aleatório para despistar "
            "vocês foi genial. Nós temos uma profecia para cumprir, parar de competir agora s"
            "implesmente não é justo com o destino''\n\n");
    
    printf("Enquanto fala Janus casualmente coloca as mãos atrás do corpo, assim que termina"
            " a frase saca uma pistola que tinha escondida nas costas. Apontando-a "
            "para Yoonir. Antes que ele possa atirar, o outro mago age mais rápido, ele "
            "faz um movimento com as mãos, você sente uma onda de calor"
            " seca e intensa, um conjunto de runas radiantes surge sobre os braços de Janus"
            ", que começam a subtamente se contrair em espasmos descordenados. "
            "Ele dispara uma vez, e erra.");
    
    printf("\n\nYoonir então vira na sua direção.\n\n"
            "''Você! Você é ");
    
    if(gen){
        printf("a terceira");
    }
    else{
        printf("o terceiro");
    }
    printf(", de outro sangue não é?! Janus é um lunático, você precisa vir comigo!''"
            "\n\n''Lunático? Que exagero, nós dois sabemos que um tiro não ia"
            " te matar, eu só precisava te distrair enquanto você se cura''");
    
    if(clem[6]){
        printf("\n\nVocê ainda consegue ver a aura de ambos, mas a magia parece "
                "estar se dissipando. A aura de Yoonir tem um tom fechado de azul e"
                " alguns tons ocilantes de verde, indicando desconfiança. A aura de Janus "
                "é tomada por tons escuros de verde e marrom, emoções negativas, inveja"
                " talvez, mas nada que indique agressividade, ou violência. O efeito "
                "acaba e sua visão volta ao normal.");
    }
    
    printf("\n\n1.Ir com Yoonir\n"
            "2.Ajudar Janus\n\n");
    
    scanf("%i",&a);
    clear();
    
    }while(a<1||a>2);
    
    if(a==1){
        clem[8]=1;        
        if((tut_mana==0)&&(((arc[0]>0)&&(path!=2))||((arc[1]>0)&&(path!=0))||((arc[3]>0)&&(path!=4))||((arc[5]>0)&&(path!=1))||((arc[7])&&(path!=1))||(arc[9]>1))){
            tutorial_mana(path);
            tut_mana=1;
        }
        if((tut_dox==0)&&((arc[7]>0)||(arc[9]>1))){
            tutorial_dox();
            tut_dox=1;
        }        
        go_yoonir();
    }
    else if(a==2){
        clem[8]=0;        
        if((tut_mana==0)&&((arc[9]>1)||((arc[7]>0)&&(path!=1))||((arc[5]>0)&&(path!=1))||((arc[3]>0)&&(path!=4))||((arc[6]>0)&&(path!=3)))){
            tutorial_mana(path);
            tut_mana=1;
        }
        if((tut_dox==0)&&((arc[9]>1)||(arc[7]>0)||(arc[2]>1))){
            tutorial_dox();
            tut_dox=1;
        }        
        go_janus();
    }
    
    printf("\n\n1.Continuar...\n\n");
    scanf("%i",&a);
    clear();
    
    //Shot-back
    if(clem[11]&&(!((dmg+dmg_dox)>=5))){
        
        do{
        printf("Yoonir fugiu por entre as árvores, e lhe chama para segui-lo. "
                "Mas Janus está desarmado na sua frente, você com a pistola dele "
                "em mãos. Ele talvez continue a perseguir vocês, se ele é realmente um lunático, mas nas verdade ele não parecia"
                " tão perigoso assim antes do outro mago chegar.\n\n");
        
        printf("1.Disparar contra Janus\n"
               "2.Dar as costas e acompanhar Yoonir\n\n");
        
        scanf("%i",&a);
        clear();
        }while(a<1||a>2);
        
        if(a==1){
            do{
            clem[11]=2;
            printf("Você aponta a arma para Janus, a expressão dele muda de frustração "
                    "para legítima surpresa.\n\n"
                    "''Wow! Wow! Wow! Vamos com calma aí. Eu não sou um xamã que "
                    "nem aquele cara, eu estou sozinho aqui e não tenho como me curar''\n\n");
            
             printf("1.Mirar na perna\n"
                     "2.Mirar na cabeça\n\n");
             scanf("%i",&a);
             clear();
            }while(a<1||a>2);
            
            if(a==1){
                printf("Você não responde, simplesmente aponta a arma para as pernas"
                        " dele e puxa o gatilho. ");
                
                if(arc[1]){
                    printf("\n\n[Destino]\nVocê ouve um soar de cordas, os "
                            "fios do destino se tensionam como uma guitarra desafinada"
                            " para protege-lo.\n\n");
                }
                
                printf("O tiro acerta-o na coxa, você ouve um som metálico, e não"
                        " vê sangue. Ele tranquilamente põe a mão no bolso e tira um"
                        " isqueiro zippo amassado.\n\n"
                        "''Wow, que sorte a minha não é?'' Ele diz sarcástico"
                        " ''Já é o quarto isqueiro que desvia uma bala. Falando "
                        "nisso eu só tinha uma bala, então...''\n\n"
                        "Ele começa a calmamente seguir de volta para sua motocicleta."
                        "\n\n''Só vai logo com ele, manda um abraço pra minha irmã.''\n\n");
                
                printf("1.Continuar...\n\n");
                scanf("%i",&a);
                clear();
                
            }
            else if(a==2){
                printf("Você não responde, simplesmente aponta a arma para testa"
                        " dele e puxa o gatilho. A arma emperra.\n\n"
                        "''Você acabou de tentar me matar!? Nossa, quando você"
                        " acha que conhece as pessoas... Eu disse, essa arma não mata,"
                        " ela é encantada pra isso.''\n\n"
                        "Ele começa a calmamente seguir de volta para sua motocicleta."
                        "\n\n''Só vai logo com ele, manda um abraço pra minha irmã.''\n\n");
                
                printf("1.Continuar...\n\n");
                scanf("%i",&a);
                clear();
            }
        }
        
        else if(a==2){
            printf("Guardando a pistola na cintura assim como o mago havia feito para "
                    "esconde-la, você dá as costas e corre para entre as árvores.\n\n");
            
            printf("1.Continuar...\n\n");
            scanf("%i",&a);
            clear();
        }
    }
    
    //#morta
    if((dmg+dmg_dox)>=5){
        if(clem[8]){
            // com Yoonir
            printf("Seu corpo todo dói, mas com alguma dificuldade você consegue acompanhar Yoonir, mesmo"
                    " ferid");
            if(gen){
                printf("a");
            }
            else{
                printf("o");
            }
            printf(" e mancando. Ele se vira na sua direção, sem parar de correr"
                    " mas desacelerando ao notar sua condição.\n\n"
                    "''Você está bem? Pare um segundo eu posso te curar se...''\n\n"
                    "Tudo fica escuro, você consegue apenas sentir seu corpo cair"
                    " antes de perder completamente sua consciência.");
        }
        else{
            // com Janus
            printf("Yoonir escapa");            
            if(!(clem[9])){
                printf(" com o artefato");
            }
            printf(", você olha para Janus como quem diz ''E agora?'', mas derrepende"
                    " todo seu corpo dói. A adrenalina estava te distraindo dos seus"
                    " ferimentos, mas você rapidamente sente sua cabeça girar, tudo fica"
                    " escuro e você perde completamente a consciência.");            
        }
        
        printf("\n\n1.Continuar...\n\n");
        scanf("%i",&a);
        clear();
    }
    
    //Não morta
    else{
        //Yoonir
        if(clem[8]){
            
            do{
            printf("Você logo alcança Yoonir entre as árvores, ele pede que você continue a co"
                    "rrer mais ou pouco. Vocês logo cruzam o curto trecho de mata"
                    " e encontram uma segunda estrada do outro lado, parado no acosta"
                    "mento o carro de Yoonir. Você para para recuperar o fólego. ");
            
            if(clem[10]){
                printf("Enquanto isso, ele põe uma das mãos sobre o ferimento no braço, imediatamente"
                        " curando-o, o rasgo no casaco e a mancha de sangue ao redor de repente parecendo um tanto "
                        "incoerentes. ");
            }
            
            if((dmg+dmg_dox)>1){
                printf("\n\n''Ei! Precisa de ajuda? Eu posso te curar se você "
                        "precisar");
                
                if((dmg+dmg_dox)>2){
                    printf(", você não me parece muito bem");
                }
                printf("''");
                
                printf("\n\n1.Aceitar a cura\n"
                        "2.Recusar");
                
                if((arc[3]>0)&&(((path=4)&&(mana>=1))||(mana>=2))){
                    printf("\n3.Recusar, e curar a si mesm");
                    if(gen){
                        printf("a");
                    }
                    else{
                        printf("o");
                    }
                    printf("[Vida]");
                    if(path==4){
                        printf("(-1 Mana)");
                    }
                    else{
                        printf("(-2 Mana)");
                    }
                }                
                printf("\n\n");
                scanf("%i",&a);                
                clear();
                
                if(a==1){
                    ok=1;
                    printf("''Aqui, só fique parad");
                    if(gen){
                        printf("a");
                    }
                    else{
                        printf("o");
                    }
                    printf(" um segundo por favor''");
                    
                    printf("\n\nEle põe as mãos estendidas em frente ao seu corpo,"
                            " você sente uma onda de calor passar pelo seu corpo, "
                            "parecida com quando ele encantou os braços de Janus,"
                            " mas menos seca, um calor mais confortável, como "
                            "um dia ensolarado.");
                    
                    if((dmg==0)&&(dmg_dox>0)){
                        printf(" Mas você ainda se sente tão mal quanto.\n\n"
                                "''Hum, parece que seus ferimentos foram causados"
                                " por paradoxo, desculpe, mas eu não posso curar isso com ma"
                                "gia, só o tempo recupera o sua matriz vital nesses casos''");
                    }
                    
                    else if(dmg_dox>0){
                        printf(" Você se sente um pouco melhor, mas ainda um"
                                " pouco machucad");
                                if(gen){
                                    printf("a");
                                }
                        
                                else{
                                    printf("o");
                                }
                        printf("''Eu fiz o que pude, mas parte dos seus ferimentos"
                                " foram causados por paradoxo, só o tempo recupera o sua matriz vital nesses casos''");                        
                    }
                    
                    else{
                        printf(" Você se sente perfeitamente curad");
                        if(gen){
                            printf("a");
                        }
                        else{
                            printf("o");
                        }
                        
                        printf(", todo mínimo arranhão ou pequeno ferimento completamente"
                                " reparado\n\n");
                        printf("''Acho que eu consegui cuidar de tudo, se sente melhor?''");
                    }
                    dmg=0;                                        
                }
                
                else if(a==2){
                    ok=1;
                    printf("''Você é quem sabe, mas não tenha medo de pedir se "
                            "precisar.''");
                }
                
                else if((a==3)&&((arc[3]>0)&&(((path=4)&&(mana>=1))||(mana>=2)))){
                    ok=1;
                    if(path==4){
                        mana--;
                    }
                    else{
                        mana-=2;
                    }
                    printf("Você olha para dentro do seu próprio corpo, escaneando"
                            " cada célula danificada e orientando seu corpo "
                            "para imediatamente repara-los.");
                    
                    if(dmg_dox>0){
                        printf(" Você repara tudo que pode, mas alguns dos ferimentos"
                                " parecem simplesmente impossíveis. Yoonir nota"
                                " sua preocupação."
                                "\n\n''Você se machucou tentando fazer alguma magia mais complexa"
                                " depois do despertar? Parece que você tem alguns ferimentos causados"
                                " por paraoxo. É impossível cura-los com magia, só o tempo recupera o sua matriz vital nesses casos''");
                    }                    
                    dmg=0;                            
                }
                
                else{
                    ok=0;
                }                
            }    
            //Caso nao tenha nem a cena da cura passa logo com um ok =1
            else{
                ok=1;
            }
            
            printf("\n\n1.Continuar...\n\n");
            scanf("%i",&a);
            clear();
            
            //Ele entra no carro and drives to the sunset
            printf("Vocês entram no carro e Yoonir começa a dirigir. Passam-se "
                    "alguns momentos um tanto tensos de silêncio em que ele parece"
                    " concentrado em alguma outra coisa além da estrada, de vez "
                    "em quando olhando na sua direção e abrindo a boca antes de "
                    "simplesmente desistir de falar.");
            
            }while(!(ok));            
        }
        
        //Janus
        else{
            printf("Yoonir escapa");            
            
            if(clem[9]){
                printf(" mas você consegue recuperar o olho de cristal");
            }            
            else{
                printf(" com o artefato");
            }            
            printf(".");
            
            if(clem[9]){
                printf("\n\n''Olha pra isso! Novo artefato e eu ainda encontro"
                        " parte da profecia perdid");
                if(gen){
                    printf("a");
                }
                else{
                    printf("o");
                }
                printf(" no meio da estrada. Eu geralmente não tenho tanta sorte no"
                        " mesmo dia nem com magia!''");
            }
            
            else{
                printf(" Janus encara o trecho de floresta por algum tempo, então"
                        " guarda novamente a pistola, frustrado."
                        "\n\n''Ei, obrigado por ficar ao meu lado. Foi uma pena"
                        " termos perdido o olho, mas não é sua culpa. Tudo ficou"
                        " muito tenso muito rápido, você acabou de despertar, relaxa''");
            }
            
            printf("\n\n''De qualquer forma, acho que você vai precisar de uma carona"
                    "'' Ele inclina a cabeça na direção do esqueleto ");
            if(clem[2]){
                printf("destruído");
            }
            else{
                printf("flamejante");
            }
            printf(" que era seu carro.\n\n");
                       
            printf("''Nós podemos parar em algum lugar no caminho para eu te explicar"
                    " toda essa questão da profecia, mas não é uma boa ficar parados "
                    "no meio da estrada do lado de um acidente.''");
            
            printf("\n\nEle pega um capacete extra na moto e te entrega. Vocês dois"
                    " sobem na moto, e ele dá partida.");
            
            printf("\n\n1.Continuar...\n\n");
            scanf("%i",&a);
            clear();
           
        }
    }
    
    //Acordando ferido    
    if((dmg+dmg_dox)>=5){        
        //Acordando ferido com Yoonir
        if(clem[8]){
            dmg=0;
            printf("Você sente que está em movimento, e se sentindo bastante melhor"
                    " você acorda, sentad");
            if(gen){
                printf("a");
            }
            else{
                printf("o");
            }
            printf(" no banco do carona de um carro, Yoonir dirigindo ao seu lado."
                    "\n\n''Ei que bom que você está bem, eu cuidei dos seus feri"
                    "mentos como pude, mas você tem algumas marcas de paradoxo,"
                    " elas devem melhorar daqui a algum tempo. Eu sei que você"
                    " é nov");
            if(gen){
                printf("a");
            }
            else{
                printf("o");
            }
            printf(" nisso, mas precisa tomar mais cudiado''");        
        }
        
        //Acordando ferido com Janus
        else{
            dmg--;
            printf("Quando acorda você sente alguma coisa pesada ao redor da s"
                    "ua cabeça, você está em movimento, apoiad");
            if(gen){
                printf("a");
            }
            else{
                printf("o");
            }
            printf(" contra alguma coisa. Você abre os olhos, você está na moto de"
                    " Janus, ele colocou um capacete em você e equilibrou seu corpo"
                    " sobre a moto, apoiado contra o dele. Dirigindo bem lentamente"
                    " até perceber que você acordou e acelerar.\n\n"
                    "''Ei, finalmente! Desculpa te acordar assim, mas eu não podia"
                    " ficar lá esperando você. Aqui, vamos parar ali em frente.''\n\n");
        }        
    }
       
    printf("Ele entra em um posto de gasolina na beira da estrada, estacionando"
            " ao lado da loja de conveniência.\n\n"
            "''Vamos entrar, podemos conversar com mais calma,"
            " e eu preciso comer alguma coisa''");
    
    
    printf("\n\n1.Continuar...\n\n");
    scanf("%i",&a);
    clear();
    
    do{
    printf("A loja de conveniência não tem nada de extraordinário, provavelmente "
            "algo bom com tudo que tem acontecido. Uma pequena lanchonete, alguns"
            " biscoitos e doces com o típico preço inflacionado desse tipo de lugar."
            " Já é de manhã, o sol começou a nascer a pouco tempo, a loja está vazia"
            " exceto por alguns poucos funcionários sonolentos.\n\n"
            "''Quer alguma coisa?'' ");
    if(clem[8]){
        printf("Yoonir");
    }
    else{
        printf("Janus");
    }
    printf(" pergunta. Você põe a mão no bolso, e se dá conta de que perdeu sua carteira no acidente."
            " ''Não se preocupe");
    if(clem[8]){
        printf(" eu pago");
    }
    else{
        printf(", você me paga depois");
    }
    printf("''");
    
    printf("\n\n1.Uma água\n2.Um café\n3.Algo para comer\n4.Recusar\n\n");
    scanf("%i",&a);
    clear();
    
    }while(a<1||a>4);  
    
    if(a==1){
        printf("Você pega uma garrafa de água em uma das geladeiras ao "
                "lado do balcão");
        clem[12]=1;
    }
    else if(a==2){
        printf("Uma das funcionárias lhe serve uma xícara fumegante de espresso "
                "acompanhado de um biscoito");
        clem[12]=2;
    }
    else if(a==3){
        printf("Você escolhe entre os salgados da vitrine o que parece estar mais "
                "fresco e recebe uma coxinha de galinha em um guardanapo de papel");
        clem[12]=3;
    }
    else if(a==4){
        printf("Você educadamente recusa a oferta, esperando ");
        if(clem[8]){
            printf("Yoonir");
        }
        else{
            printf("Janus");
        }
        printf(" se servir");
        clem[12]=0;
    }
    
    printf(". Ele pega um");
    if(clem[8]){
        printf("a água e um sanduíche natural");
    }
    else{
        printf(" café e um pacote de biscoitos recheados");
    }
    printf(" e vocês vão se sentar em uma das mesas mais afastadas.\n\n");
    
    printf("1.Continuar...\n\n");
    scanf("%i",&a);
    clear();
    
    //Papos de nome
    
    //Yoonir
    if(clem[8]){
        
        do{
        printf("''Então... eu ainda não sei seu nome''\n\n");
        
        printf("1.''%s''\n2.''Eu prefiro não dizer''\n\n",str);
        scanf("%i",&a);
        clear();
        }while(a<1||a>2);
        
        do{
        if(a==1){
            a=0; 
            b=0;

            do{        
               ok = strcmp(str, name[a]);                   
               if(ok==0){
                   b=1;
               }
               a++;        
            }while((a<24)&&(b==0));

            if(b==1){
                clem[13]=1;
                printf("''%s? Hum...'' Ele para pensativo por um momento. ''Você tem o mesmo nome que um",str);
                if(gen){
                    printf("a heroína");
                }
                else{
                    printf(" herói");
                }
                printf(" do mundo mágico, sabia? Mais uma lenda pra falar a verdade, "
                        "ninguém tem certeza se aconteceu mesmo...''\n\n"
                        "1.Continuar...\n\n");
                scanf("%i",&a);
                clear();
            }

        printf("''Nomes são coisas poderosas entre Magos, tome nota e tome cuidado "
                "com quem sabe o seu, mas não se preocupe, você pode confiar em mim.''");        
            
        }
        
        else if(a==2){
            printf("''Oh!'' Ele parece um pouco envergonhado em ter perguntado. ''"
                    "Desculpe, eu não quis dizer desse jeito. Eu diria que você"
                    " pode confiar em mim com seu nome verdadeiro, mas acabamos de"
                    " nos conhecer, seria tolo da sua parte acreditar em mim''");
        }
        
        printf("\n\nEle abre a garrafa de água e toma um gole.\n\n"
                "''Você precisa de um nome das sombras. Magos tem um segundo nome"
                " para usar entre nós, Yoonir não está na minha certidão de nascimento "
                "sabe? Tem algo em mente?''\n\n");            
        
        gets(sdw);
        gets(sdw);
        clear();
        
        ok = strcmp(str,sdw);
        
        if(ok==0){            
            printf("Seu nome das sombras deve ser diferente do seu nome real");
            printf("\n\n1.Voltar\n\n");
            scanf("%i",&a);
            clear();
        }
        
    }while(ok==0);   
    
    a=0; 
    b=0;

    do{        
       ok = strcmp(sdw, name[a]);                   
       if(ok==0){
           b=1;
       }
       a++;        
    }while((a<24)&&(b==0));
    
    if(b==1){        
        if(clem[13]){
            printf("''%s? Sério? Curioso você escolher esse nome, também tem relação c"
                    "om aquela lenda que eu comentei''",sdw);
        }        
        else{
            printf("''%s? Bom nome, engraçado que também é o nome de"
                    " um",sdw);
            if(gen){
                printf("a heroína");
            }
            else{
                printf(" herói");
            }
            printf(" de uma certa lenda contada entre Magos''.");
        }      
    }
    
    else{
        printf("''%s? Bom nome. Posso me referir a você de forma adequada para um"
                " mago agora''",sdw);
    }
    
          
    }
    
    //Janus
    else{
        do{
        a=0; 
        b=0;

        do{        
           ok = strcmp(str, name[a]);                   
           if(ok==0){
               b=1;
           }
           a++;        
        }while((a<24)&&(b==0));

        if(b==1){
            clem[13]=1;
            printf("''Então, %s...'' Ele dá uma sorriso. ''Você tem o mesmo nome que um",str);
            if(gen){
                printf("a heroína");
            }
            else{
                printf(" herói");
            }
            printf(" do mundo mágico, sabia? Mais uma lenda pra falar a verdade, "
                    "ninguém tem certeza se aconteceu mesmo...''");              
            
            printf("\n\n1.Continuar...\n\n");
            scanf("%i",&a);
            clear();            
        }

        printf("''%s! Você precisa de um nome de mag", str);
        if(gen){
            printf("a");
        }
        else{
            printf("o");
        }
        printf(". Seu nome de verdade tem poder, principalmente poder para os outros te espionarem. Você precisa"
                " escolher um nome das sombras, um nome de mago. Tem algo em mente?''\n\n");
        
        gets(sdw);
        gets(sdw);
        clear();
        
        ok = strcmp(str,sdw);
        
        if(ok==0){            
            printf("Seu nome das sombras deve ser diferente do seu nome real");
            printf("\n\n1.Voltar\n\n");
            scanf("%i",&a);
            clear();
        }
        }while(ok==0);        
        
        a=0; 
        b=0;

        do{        
           ok = strcmp(sdw, name[a]);                   
           if(ok==0){
               b=1;
           }
           a++;        
        }while((a<24)&&(b==0));

        if(b==1){        
            if(clem[13]){
                printf("''%s? Sério? Engraçado você escolher esse nome, também tem a ver c"
                        "om aquela lenda que eu falei''",sdw);
            }        
            else{
                printf("''%s? Bom nome, engraçado que também é o nome de"
                        " um",sdw);
                if(gen){
                    printf("a heroína");
                }
                else{
                    printf(" herói");
                }
                printf(" de uma lenda entre Magos''.");
            }      
    }
    
    else{
        printf("''%s? Legal. Já posso falar com você como um",sdw);
        if(gen){
            printf("a maga");
        }
        else{
            printf(" mago");
        }
        printf(" de verdade agora''");
        
    }
    }
    
    
    //Papo de nomes end
    printf("\n\n1.Continuar...\n\n");
    scanf("%i",&a);
    clear();
    
    if(clem[8]){
        printf("Ele dá uma mordida no sanduíche.");
    }
    else{
        printf("Ele abre um dos biscoitos, comendo o recheio antes do resto.");
    }    
    
    printf(" ");
    
    if(clem[12]==0){
        printf("Você percebe que talvez esteja com mais fome do que pensou.");
    }
    
    if(clem[12]==1){
        printf("Você toma um gole de água, suas mãos ainda sujas de terra");
        if(clem[0]==2){
            printf(" e das cinzas do tronco");
        }
        printf(" mancham o rótulo da garrafa.");
    }
    
    if(clem[12]==2){
        printf("Você meche um pouco o café e prova para ter certeza de que não"
                " vai se queimar.");
        if(arc[2]){
            printf(" Você ainda pode se queimar? Provavelmente não. Você tem a impressão de que poderia"
                    " fazer essa xícara ferver ou congelar se quisesse.");
        }        
        else if(arc[4]){
            printf(" O café não é dos melhores, você pensa brincando se poderia "
                    "resolver isso com magia. Mas na verdade você sabe que sim,"
                    " que esse café poderia ser água, vinho ou mercúrio se você"
                    " desejasse.");
        }
    }
    
    if(clem[12]==3){
        printf("Você dá uma mordida na coxinha, é boa o bastante para alguém com fome, "
                "melhor do que você esperava de uma loja de conveniência.");
    }
    
    printf("\n\n''Só mais um detalhe,");
    
    if(clem[8]){
        printf(" antes de te explicar a situação da profecia. Eu gostaria de saber qual "
                "é sua torre.''");
    }
    else{
        printf(" só para matar uma curiosidade minha, eu já te explico toda a "
                "situação da minha irmã e da profecia. Mas antes eu queria saber"
                " qual a sua torre.''");
    }
    
    printf("\n\nAntes que você possa perguntar ele lembra que você é nov");
    if(gen){
        printf("a");
    }
    else{
        printf("o");
    }
    printf(" nessa coisa de magia, e explica o que quis dizer.\n\n"
            "''Ser um mago quer dizer que você despertou, sua alma foi até "
            "os planos astrais e você assinou seu nome em uma das cinco torres. "
            "E agora você pode canalizar a influência da sua torre para alterar"
            " esse mundo. Cada torre favorece influências diferentes, que nós "
            "chamamos de Arcanas, mas com trinamento qualquer mago pode dominar todos"
            " eles. ");
    
    if(clem[8]){
        printf("Eu por exemplo sou um Thyrsus, eu naturalmente já domino os Arcanas "
                "de Espírito e Vida, mas também sou versado em Espaço.");
    }
    else{
        printf("Eu por exemplo sou um Acanthus, eu naturalmente já domino, "
                "Destino e Tempo, mas também sei Primórdio e um pouco de Espírito.");
    }
    printf("''");
    printf("\n\n1.Continuar...\n\n");
    scanf("%i",&a);
    clear();
    
    printf("''Então? Como foi seu despertar?''");
    printf("\n\n");
    
    do{
    switch(path){
        
        case 0:
                printf("1.''Eu segui uma estrada de prata até uma festa...''"
                        "\n2.''Eu lembro de um baile de máscaras ou algo do tipo''"
                        "\n3.''Eu lembro de alguém roubando meu rosto''");                
                break;
        
        case 1:
            printf("1.''Havia um trem e uma estrada de ferro que me acompanhava''\n"
                    "2.''Foi tudo como um grande pesadelo, como um sonho dentro do meu despertar''\n"
                    "3.''Eu lembro de demônios, um com chifres, um meio nojento''");            
            break;
            
        case 2:
            printf("1.''Eu lembro de ter morrido''\n"
                    "2.''Eu lembro da estrada de ouro, decorada com caveiras''\n"
                    "3.''Tinha um porteiro, em frente a portões de chunbo''");
            break;
            
        case 3:
            printf("1.''Eu lembro do dragão, me fizeram encarar um dragão''\n"
                    "2.''Havia um rei feito de fogo, e uma rainha coberta de magia''\n"
                    "3.''Eu segui por uma estrada de mármore, montad");
            if(gen){
                printf("a");
            }
            else{
                printf("o");
            }
            printf(" em um cavalo branco, cercad");
            if(gen){
                printf("a");
            }
            else{
                printf("o");
            }
            printf(" de querubins''");
            break;    
            
        case 4:
            printf("1.''Eu me lembro de vários espíritos, querendo falar comigo''\n"
                    "2.''Eu me lembro do lobo, um enorme lobo em uma árvore''\n"
                    "3.''Era uma floresta, tudo estava vivo e lutando para sobreviver''");
            break;    
    }
    
    printf("\n\n");
    scanf("%i",&a);
    clear();
    
    }while(a<1||a>3);
    
    //Yoonir
    if(clem[8]){
        if(path==0){
            printf("''Provavelmente um");
            if(gen){
                printf("a");
            }            
            printf(" Acanthus, assim como o Janus e a irmã. Parece que além de contr"
                    "olar o destino vocês atraem ele''");                
        }
        if(path==1){
            printf("''Provavelmente um''");
            if(gen){
                printf("a");
            }
            printf(" Mastigos, ");
            if(gen){
                printf(" uma bruxa");
            }
            else{
                printf(" um bruxo");
            }
            printf("'' Ele fica sério por um momento ''Ei. Não leve para o lado pessoal,"
                    " mas um conselho, não é por que você pode ler a mente das pessoas"
                    " que você deva, ok? Desculpe, é que eu já tive... deixa pra lá''");
        }
        if(path==2){
            printf("''Provavelmente você é um");
            
            if(gen){
                printf("a");
            }
            
            printf(" Moros, um");
            
            if(gen){
                printf("a");
            }
            printf(" necromante. Não é nada pessoal, mas eu agradeço se você tentar"
                    " manter zumbis e fantasmas afastados de mim. Eu acho que é por"
                    " eu estar mais acostumado com magias de Vida, mas os mortos-vivos me"
                    " incomodam''");
            
        }
        if(path==3){
            printf("''Isso soa como um Obrimos, torre dos taumaturgos. Eu vou te"
                    " apresentar o Hélio, outro mago que está nos ajudando, ele"
                    " também é um Obrimos, pode te aconcelhar até você ter um controle"
                    " melhor da sua magia. Quando vocês não estão lançando fogo "
                    "e trovões estão controlando mana, todo cuidado é pouco''");
        }
        if(path==4){
            printf("''Um");            
            if(gen){
                printf("a");
            }            
            printf(" Xamã, com certeza. Tudo parecia tentar te matar, e"
                    " ao mesmo tempo você nunca se sentiu tão viv");            
            if(gen){
                printf("a? Você é uma");
            }
            else{
                printf("o? Você é um");
            }            
            printf(" Thyrsus, como eu. Talvez eu possa te ensinar alguma coisa quando "
                    "tivermos mais tempo''");
        }
    }
    
    //Janus
    else{
        if(path==0){
            printf("''Parece que temos mais um");
            if(gen){
                printf("a");
            }
            printf(" Acanthus nessa profecia, é a mesma torre que eu e minha irmã. "
                    "Bom e velho reino astral de Arcadia. Deve ser essa ligação com o  "
                    "destino sabe, atrai profecias para a gente''");
        }
        if(path==1){
            printf("''Se as leis da física não faziam sentido ou você achou que"
                    " estava no inferno provavelmente você é um");
            if(gen){
                printf("a bruxa, uma");
            }
            else{
                printf(" bruxo, um");
            }
            printf(" Mastigos. Eu vou te apresentar a Psiquê, outra maga da mesma torre que você que "
                    "está me ajudando com toda essa coisa da profecia.''");
        }
        if(path==2){
            printf("''Parece que você visitou Stygia então. Muitos mortos, muito "
                    "ouro e chumbo? Você é um");
            if(gen){
                printf("a");
            }
            printf(" Moros, ou necromante. Você vai se dar bem com a Magpie, é outra maga da mesma torre que você que "
                    "está me ajudando com toda essa coisa da profecia.''");
        }
        if(path==3){
            printf("''Eu posso estar errado, mas Obrimos eu acho. Eu não trocaria"
                    " sorte e poder voltar no tempo por nada, mas controlar raios "
                    "e trovões é tipo, o segundo melhor.''");
        }
        if(path==4){
            printf("''Provavelmente Thyrsus. Um");
            if(gen){
                printf("a");
            }
            printf(" xamã como nosso bom amigo Yoonir. Além de iluminação espiritual "
                    "e harmonia com todas as coisas vivas você nunca mais vai ter"
                    " uma ressaca, talvez o uso mais nobre dos poderes que o destin"
                    "o nos concedeu.''");
        }        
    }
    
    printf("\n\n1.Continuar...\n\n");
    scanf("%i",&a);
    clear();
    
    if(clem[8]){
        printf("Yoonir da mais uma mordida no sanduíche, e toma um gole de água.");
    }
    else{
        printf("Janus toma apenas gole do café e passa a molhar os biscoitos nele a"
                "ntes de come-los.");
    }
    
    //Papo sério Yoonir
    if(clem[8]){
        printf("\n\n''Bem... agora sobre a profecia.''\n\n"
                "Ele termina a garrafa de água em um grande gole antes de começar.\n\n"
                "''Você conheceu Janus certo? Ele tem uma irmã gêmea, Moira. Desde"
                " que eram crianças, antes mesmo de despertarem eles tem sonhos sobre esse"
                " mesmo Rei. O antigo Rei de Atlantis, líder de uma cidade antiga, repleta"
                " de magos. qQuando eram menores ambos sonhavam que estavam passeando "
                "pelas ruas da cidade, ouvindo seus discursos, ou que eram concelheiros"
                " em sua corte.''\n\n");
        
        printf("1.Continuar...\n\n");
        scanf("%i",&a);
        clear();
                
        printf("''Os sonhos continuaram até eles despertarem, ao mesmo tempo, adolecentes ainda."
                " Quando despertaram puderam ver seu destino, eles, junto de "
                "uma terceira alma, de outro sangue, iriam trazer o Rei de volta "
                " a vida. Foi revelado a eles que o corpo do rei foi espalhado "
                "pelos cinco planos astrais, e as partes retornaram ao nosso plano imbuídas"
                " de magia. Então os dois se juntaram para procurar pelas partes, usando "
                "bibliotecas arcanas e pesquisando livros antigos eles começaram "
                "a encontra-las, foi aí que nós nos conhecemos, quando eles ainda estavam juntos, éramos seis procurando os artefatos.''\n\n");
        
        printf("1.Continuar...\n\n");
        scanf("%i",&a);
        clear();
                
        printf("''Até que os sonhos voltaram, novamente, os dois voltaram a sonhar "
                "com o Rei, mas onde antes eles viam o passado, eles passaram a "
                "ver o futuro. De acordo com Janus o retorno do Rei iria despertar toda a "
                "humanidade, e todos teriam a chance de se tornar magos. Mas Moira tinha pesadelos,"
                " ela via o Rei cercado apenas dos magos mais poderosos, magias de "
                "poder inimaginável selavam os reinos astrais além do alcance de "
                "qualquer um que não jurasse sua alma a ele. Os magos do seu concílio"
                " eram os únicos que tinham permissão para praticar magia e nenhum novo despertar jamais ocorreu''\n\n");
        
        printf("1.Continuar...\n\n");
        scanf("%i",&a);
        clear();
                
        printf("''Eles discutiram, brigaram, e se separaram. Hélio, Moira e eu "
                " pretendemos juntar as partes do Rei para invocar seu espírito e destruí-lo."
                " Janus, Magpie e Psiquê querem trazê-lo de volta a vida.''\n\n");
        
        printf("1.Continuar...\n\n");
        scanf("%i",&a);
        clear();
        
        do{
        printf("''Então? Agora que ouviu tudo, entendeu o que está acontecendo? "
                "Você está queit");
        if(gen){
            printf("a");
        }
        else{
            printf("o");
        }
        printf(", o que você acha?''");
        
        printf("\n\n1.''Eu concordo com vocês, Janus é insano''\n"
                "2.''Mas o que acontece se Janus tuver razão?''\n"
                "3.''Eu prefiro não me envolver sabe...''\n\n");
        
        scanf("%i",&a);
        clear();
        }while(a<1||a>3);
        
        if(a==1){
            clem[14]=0;
            printf("''Ele com certeza não é equilibrado, mas ele era uma boa pessoa"
                    " com certeza. Mas hoje em dia... eu não sei. ");
            
            if(clem[10]){
                printf("Ele atirou em mim");
            }
            else{
                printf("Ele apontou uma arma para mim");
            }
            
            printf(", eu sei que aquela pistola dele está encantada para não matar, mas"
                    " mesmo assim. Ele pode desencantar ela quando quiser, eu acho"
                    " que não confio mais nele, sabe?''");
        }
        
        else if(a==2){
            
            clem[14]=1;
            printf("''Eu não sei, mas se ele estiver errado a humanidade toda sai "
                    "perdendo. Se você preferir ajuda-lo fique a vontade. Não vamos"
                    " te forçar a ficar do nosso lado");
            
            if(clem[11]==2){
                printf(", mas depois daquilo? Eu vi que você tentou atirar nele, "
                        "boa sorte voltando");
            }
            if(clem[9]){
                printf(". O olho do Rei fica comigo de qualquer forma, obrigado"
                        " pode me ajudar, mas eu não posso simplesmente te entrega-lo");
            }
            printf(".''");
            
        }
        
        else if(a==3){
            
            clem[14]=2;
            printf("''Não se preocupe, não vamos te obrigar a escolher um lado "
                    "nessa disputa. Eu aprecio toda a ajuda e confiança que você m"
                    "e ofereceu até agora.''");            
        }
        
        
    }
    
    
    //Papo sério Janus
    else{
        printf("\n\n''Agora, vamos a parte importante.''\n\n"
                "''Como já eu disse eu tenho uma irmã. Moira o nome dela. Desde que"
                " éramos crianças, sonhamos "
                "com esse cara, um Rei de uma cidade chamada Atlantis. Uma"
                " cidade muito antiga e feita para magos, eu lembro até hoje, era incrível, eles podiam fazer magia "
                "quando quisessem, não existiam paradoxos, e qualquer um podia se "
                "despertar se tentasse. Claro que na época eu não sabia o que era"
                " magia, magia de verdade, eu só achávamos que nós éramos irmãos "
                "tendo sonhos iguais, o que já era legal o bastante pra mim.''\n\n");
        
        printf("1.Continuar...\n\n");
        scanf("%i",&a);
        clear();
        
        printf("''Os sonhos duraram até nós despertarmos, ao mesmo tempo, como bons gêmeos. No nosso despertar nós"
                " conseguimos ver a profecia. Dizia que nós dois, junto com você, uma terceira"
                " alma de outro sangue, nas palavras da profecia, estávamos destinados a "
                "trazer o Rei de volta a vida. Nós descobrimos que o corpo do "
                "rei foi espalhado pelos cinco planos astrais, e as partes então"
                " retornaram ao nosso mundo como artefatos mágicos. Nós nos juntamos"
                " e começamos a procura-las com a ajuda de alguns outros magos"
                " que nós conhecíamos, inclusive o Yoonir, nós trabalhávamos juntos a alguns"
                " meses atrás, bons tempos.''\n\n");
        
        printf("1.Continuar...\n\n");
        scanf("%i",&a);
        clear();
        
        printf("''O problema foi que enquanto nós e a nossa gangue do Scooby Doo"
                " recolhíamos artefatos mágicos eu e minha irmã voltamos a sonhar com o Rei."
                " Mas ao invés de sonhar com o passado nós sonhávamos com ele re"
                "tornando. Eu vi ele tornando nosso mundo a nova Atlantis, todos podiam "
                "praticar magia e todos tinham uma chance de despertar, as pessoas"
                " podiam usar magia para resolver crises ambientais e questões de guerra."
                " Era utópico mesmo sabe, no nível individual ainda haviam tantos"
                " magos ruins quanto existem pessoas ruins, mas numa escala global eu tinha a"
                " impressão do mundo ser um lugar melhor. Mas minha irmã"
                " tinha pesadelos, ela viu o Rei escravizando as pessoas, selando "
                "os reinos astrais para que nenhum despertar jamais ocorresse''\n\n");
        
        printf("1.Continuar...\n\n");
        scanf("%i",&a);
        clear();
        
        printf("''Nós discutimos, nos separamos, o time se dividiu. Eu, Magpie e Psiquê queremos"
                " trazer o rei de volta a vida. Yoonir, minha irmã e Helio estão "
                "tentando destruir o rei, mas acho que eles precisam de todos os"
                " artefatos pra isso.''\n\n");
                
        printf("1.Continuar...\n\n");
        scanf("%i",&a);
        clear();
        
        do{
        printf("''Agora que você ouviu tudo? O que você acha? Eu sei que eu devo "
                "parecer meio maluco. Mas eu depois de despertar eu só comecei a"
                " aceitar os riscos sabe? Se você pode controlar as variáveis a"
                " seu favor, vale a pena. Minha arma por exemplo, eu nunca tentaria"
                " matar o Yoonir, mas minha arma é encantada para nunca matar alguém."
                " Você pode apontar ela pra sua cabeça e puxar o gatilho se quiser,"
                " ela vai travar ou alguém vai aparecer para tirar ela da sua mão, ela talvez a"
                "té exploda, mas alguma coisa sempre acontece que impeça ela de matar. "
                "O lado ruim é que a mira dela é péssima mesmo para tiros não letais''\n\n"
                "''Da forma que eu vejo, se eu ganho nós alcançamos uma utopia mágica,"
                " se minha irmã ganha nada acontece.''\n\n");
        
        printf("1.''Na verdade eu acho que você está certo''\n"
                "2.''Sinceramente? Acho que deveria ter ido com o Yoonir''\n"
                "3.''Eu prefiro não me envolver sabe...''\n\n");
        
        scanf("%i",&a);
        clear();
        }while(a<1||a>3);
        
        if(a==1){
            clem[14]=0;
            printf("''Ei, obrigado! Eu acho que esse deveria ser o objetivo sabe"
                    "? De todos nós, de todo mago. Conseguir despertar o resto "
                    "do mundo, levar para eles o que nós temos. Até onde eu sei "
                    "o Rei é a única coisa que já teve alguma chance de conseguir isso, "
                    "pode ser a única chance que a humanidade vai ter de despertar.''");
        }
        
        else if(a==2){
            clem[14]=1;
            printf("''Eu não te culpo, o lado deles é a opção segura mesmo, pode ir"
                    "para o lado deles se quiser. ");
            
            if(clem[10]){
                printf("Eu só não sei como ele vai lidar com toda a situação de "
                        "nós termos atirado nele, boa sorte com isso. ");
            }
            
            if(clem[9]){
                printf("Mas o olho fica comigo, Obrigado por me ajudar a conseguir,"
                        " mas eu não vou simplesmente entregar ele.");
            }
            printf("''");
        }
        
        else if(a==3){
            clem[14]=2;
            printf("''Hun? Sério?'' Ele dá um sorriso debochado ''É seu destino,"
                    " meio difícil de não se envolver com ele");
            
            if(path==0){
                printf(" um");
                
                if(gen){
                    printf("a");
                }
                
                printf(" Acanthus deveria saber disso. Mas você é nov");
                if(gen){
                    printf("a");
                }
                else{
                    printf("o");
                }
                printf(", eu entendo.");
            }
            
            else if(arc[1]){
                printf(" você também viu não foi? A força que te impulsiona "
                        "na direção dos artefatos?");
            }
            
            else{
                printf(".");
            }
            
            printf(" É claro que eu não vou te obrigar a nada, mas eu duvido que"
                    " você não vá encontrar mais artefatos 'surgindo' no seu carro''");            
        }                
                
    }
    
        
    //Fim dos papos sérios
    
    printf("\n\n1.Continuar...\n\n");
    scanf("%i",&a);
    clear();
    
    //Brinquedo novo
    if(clem[9]){
        
        do{
        if(clem[8]){            
            printf("Yoonir tira o cristal do bolso do casaco e começa a examina-lo"
                    " sobre a mesa.");            
        }
        
        else{            
            printf("Janus então tira o olho de cristal do bolso e começa a estuda-lo"
                    " contra a luz.");            
        }
        
        printf("\n\n1.''Mas... ele faz alguma coisa?''\n"
                "2.''Vocês quase se mataram por um pedaço redondo de vidro''\n\n");
        scanf("%i"),&a;
        clear();
        }while(a<1||a>2);
        
        if(clem[8]){
            
            if(a==1){
                printf("''Não tenho certeza. O Hélio geralmente verifica os que "
                        "nós conseguimos para saber se são encantados de alguma "
                        "forma");
            }
            
            else if(a==2){
                printf("''Além de ser uma parte do tirano que pode destruir toda"
                        " nossa civilização. Eles geralmente são artefatos poderos"
                        "os por si só. Hélio vai saber dizer que habilidades ele tem");
            }
            
            if ((arc[6]>0)&&(clem[14]!=1)){
                printf(", se você tiver habilidade com o Arcana de Primórdio talvez"
                        " consiga, quer tentar?");
            }
            printf("''");
            
            
            if ((arc[6]>0)&&(clem[14]!=1)){
                do{
                printf("\n\n1.Tentar [Primórdio]\n2.Não tentar\n\n");
                scanf("%i",&a);
                clear();
                }while(a<1||a>2);
                
                if(a==1){
                    printf("Ele te entrega o cristal, você segura ele e observa "
                            "com muita atenção a aura mágica ao seu redor. A mesma"
                            " que você conseguia ver no banco de trás do seu "
                            "carro, porém vendo de perto e com calma você consegue"
                            " ler a magia como um livro.\n\n"
                            "Parecem dois encantamentos, ambos associados a visão, o que "
                            "parece adequado, você pensa. Um é estruturado de tal "
                            "forma que sugere ampliação, como se permitisse enchergar"
                            " em várias direções ao mesmo tempo, você tem a impressão"
                            " de que é uma magia de Espaço. O outro parece tratar"
                            " de ver algo que geralmente é invisível, você tem a "
                            "impressão de que é uma magia do arcana Morte, mas é só "
                            "o que você consegue descobrir.\n\n"
                            "Você devolve o olho e conta o que conseguiu entender"
                            " para Yoonir, ele te esclarece sobre a segunda magia.\n\n"
                            "''Provavelmente um encantamento para ver fantasmas. Ah, sim"
                            ", fantasmas existem também, vá se acostumando a esse "
                            "tipo de surpresa, é saudável manter uma mente aberta a partir de"
                            " agora''");
                }
                else if(a==2){
                    printf("''Ok então. Hélio sempre gosta de explicar os artefatos"
                            " de qualquer forma.''");
                }                
                
            }
            
            
            
        }
        
        //Brinquedo novo Janus
        else{
            if(a==1){
                printf("''é o que eu estou vendo agora, todos os que nós achamos"
                        " até agora faziam...");
            }
            
            else if(a==2){
                printf("''É, mas todo artefato também vem com poderes, "
                        "esse aqui por exemplo...");
            }
            
            printf(" Parece que te dá o poder de ver fantasmas, ");
            if(path==2){
                printf(" não é muito útil para ");
                if(gen){
                    printf("uma");
                }
                else{
                    printf("um");
                }
                printf(" necromante como você. Vocês já fazem isso.");                        
            }            
            else{
                printf(" falando nisso fantasmas existem. Dizem que vampiros"
                        " e lobisomens também, mas sei lá, eu nunca vi.");
            }
            
            printf(" Hum, acho que também te dá aquele poder do arcana de Espaço,"
                    " de enchergar em 360 graus. Eu sei que nós precisamos de todos "
                    "eles, mas eu já vi melhores.''");
            
        }
    }    
    
    printf("\n\n1.Continuar...\n\n");
    scanf("%i",&a);
    clear();
    
    //Brinquedo novo end
    
    do{
    if(clem[8]){
        
        printf("Ele termina o sanduíche e joga a embalagem e a garrafa de água "
                "vazias em uma lixeira próxima.\n\n");
        
        if(clem[14]==0){
            printf("''Então? Vamos? O pessoal vai ficar feliz em ver que você está do"
                    " nosso lado. Principalmente a Moira''");
        }
        else if(clem[14]==1){
            printf("''Então? Você vem comigo ou realmente concorda com Janus? "
                    "Não se preocupe, eu não vou te largar aqui no meio da estrada se disser que não,"
                    " te deixo em algum lugar antes de voltar para o meu grupo. Quem sabe você não muda "
                    "de ideia no caminho''");
        }
        else if(clem[14]==2){
            printf("''Então? Vem comigo? Eu posso te deixar em algum lugar se realmente"
                    " não quiser nos ajudar, mas seria ótimo se você pensasse no"
                    " assunto''");
        }
        
    }
    
    else{
        
        printf("Ele termina o café, já um tanto frio em um só gole, e rudimentarmente fecha o pacote de biscoitos com um pedaço da "
                "própria embalagem e coloca-o no bolso.\n\n");
        
        if(clem[14]==0){
            printf("''Então você vem comigo né? Vai se juntar ao team Janus?''");
        }
        else if(clem[14]==1){
            printf("''Vamos? Eu te dou uma carona até algum lugar, se você ainda"
                    " quiser se juntar ao Yoonir eu até ligo para ele para vocês"
                    " se encontrarem''");
        }
        else if(clem[14]==2){
            printf("''Vamos? Eu te dou uma carona até algum lugar, se você quiser"
                    " mesmo tentar fugir do seu destino. Ou você pode se juntar a "
                    "nós de uma vez.''");
        }
    }
    
    printf("\n\nAntes que você possa responder de qualquer forma, você sente um"
            "a dor aguda perna direita. Como se todos os seus nervos disparessem ao mesmo"
            " tempo de uma vez só e então parassem. Mas você ainda sente uma estranha"
            " pressão acima do joelho.\n\n");
    
    printf("''O que houve?!''\n\n");    
    
    
    if(clem[8]){
        printf("Yoonir");
    }
    else{
        printf("Janus");
    }
    
    printf(" pergunta, preocupado. Ele olha para você e para sua perna, mas não "
            "parece haver nada de errado. Você vê ele fazendo um curto gesto pr"
            "óximo dos olhos, alguma magia de visão provavelmente.\n\n"
            "''Wow! Você consegue ver isso?''\n\n");
    
    if((path==0)||((arc[1]>0)&&(mana>0))){
        printf("1.Usar visão mágica[Destino]");
        if(path!=0){
            printf("(-1 Mana)");
        }
        clem[15]=1;
    }
    
    else if((path==1)||((arc[7]>0)&&(mana>0))){
        printf("1.Usar visão mágica[Espaço]");
        if(path!=1){
            printf("(-1 Mana)");
        }
        clem[15]=2;
    }
    
    else{
        printf("1.''Não''");
        clem[15]=0;
    }
    
    printf("\n\n");
    scanf("%i",&a);
    clear();
    }while(a!=1);
        
    if(clem[15]==1){
        printf("Você esfrega seus olhos, e se concentra em tentar enchergar os"
                " fios do destino ao seu redor");
    }
    
    else if(clem[15]==2){
        printf("Você abre os olhos, tentando enchergar as conexões ao redor de"
                " você além dos conceitos de proximidade e distância");
    }
    
    else if(clem[15]==0){
        printf("''Você não deve ter o arcana. Aqui!''\n\n");
        
        if(clem[8]){
            printf("Ele toca sua testa");
        }
        else{
            printf("Ele toca sua testa com a moeda");
        }
        
        printf(". Você sente a magia recaindo sobre a sua visão, ");
        
        if(clem[8]){                        
            printf("você encherga as conexões além das distância entre entre as coisas. Como um mago"
                    " hábil no arcana de Espaço faria");            
        }
        else{
            printf("você encherga os fios do destino ao seu redor");
        }
        
    }
    
    printf(".\n\n"
            "Ao redor da sua perna, você consegue ver um emaranhado de fios dourados"
            ", presos a matriz da sua alma mágica, mas também presos especificamente"
            " a sua perna. Os fios se estendem além do posto de gasolina, atravessando"
            " vários quilómetros em uma linha reta incorpórea que desaparece no"
            " horizonte.");
    
    printf("\n\n");
    
    if(clem[8]){
        printf("Yoonir se vira para você");
        
        if(clem[14]==0){
            printf(", sorrindo.\n\n"
                    "''Acho que eu vou ficar te devendo a carona. Eu vou ligar"
                    " para a Moira e avisar que ");
            
            if(clem[9]){
                printf("vamos ter um olho e uma perna para entregar a ela''");
            }
            else{
                printf("não conseguimos o olho, mas vamos voltar para casa com a perna''");
            }
        }
        
        else if(clem[14]==1){
            printf(", sério.\n\n"
                    "''Desculpe, mas agora eu vou ter que insistir que você trabalhe "
                    "conosco''");
        }
        
        else if(clem[14]==2){
            printf(".\n\n"
                    "''Eu sei que você já fez bastante por mim, mas acho que vou "
                    "precisar da sua ajuda mais uma vez.''");
        }
        
    }
    
    else{
        printf("Janus se vira para você");
        
        if(clem[14]==0){
            printf(", sorrindo.\n\n"
                    "''Se precisar ir ao banheiro vai agora! Por que eu pretendo"
                    " seguir essa linha até o meu próximo pedaço de Rei!''");
        }
        
        else if(clem[14]==1){
            printf(".\n\n"
                    "''Mudança de planos. Você não precisa me ajudar, mas eu com"
                    " certeza não vou te entregar para minha irmã tão fácil assim''");
        }
        
        else if(clem[14]==2){
            printf(", sorrindo.\n\n"
                    "''O que foi que eu disse? Como você pretende fugir disso?"
                    " Seu destino está literalmente amarrado a sua perna''");
        }
        
    }
    
    sleep(10);
    
    printf("\n\n***********************************   Fim   ************************************");
    
    sleep(2);
    
    printf("\n\n1.Continuar...\n\n");
    scanf("%i",&a);
    system("cls");
    
    do{
    printf("1.Fechar\n2.Créditos\n\n");
    scanf("%i",&a);   
    system("cls");    
    }while(a<1||a>2);
    
    if(a==1){
        
        printf("Obrigado por jogar!");
        
        sleep(3);
        
        
    }
    
    else if(a==2){
        printf("Roteiro\n"
                "Programação\n"
                "Desenvolvimento\n"
                "Lead Designer\n"
                "Produtor\n"
                "Voice Acting\n"
                "Continuísta ......................... Igor ''Jerry'' Carneiro");
        
        sleep(4);
        system("cls");
        
        printf("Assistência técnica\n"
                "Consultoria de Programação ............ Lucas Santos de Souza");
        
        sleep(4);
        system("cls");
        
        printf("Playtesters ........................... Cícero Demetrio\n"
                "                                       Lucas dos Santos Silva");
        
        sleep(4);
        system("cls");
        
        printf("Pessoas que me aturaram falando desse jogo o tempo todo\n");
        sleep(3);
        system("cls");
       
        printf("Pessoas que leram os textos que eu mandava quando eu já estava perdendo a motivação para terminar isso\n");
        sleep(4);
        system("cls");
        
        printf("Pessoas que perguntaram ''E aí? Como ta indo aquela parada?''\n");
        sleep(4);
        system("cls");
        
        printf("Pessoas que aguentaram eu mestrando um RPG sem nunca saber todas as regras\n");
        sleep(4);
        system("cls");
        
        printf("Pessoas que em momento nenhum disseram pra eu fazer alguma coisa melhor com meu tempo\n\n");
        sleep(4);
        system("cls");
        
        printf(".Caio Calheiros\n");
        sleep(1);
        printf(".Cícero Demetrio\n");
        sleep(1);
        printf(".Hannah Carolina\n");
        sleep(1);
        printf(".Julia Lacerda\n");
        sleep(1);
        printf(".Lucas dos Santos Silva\n");
        sleep(1);
        printf(".Matheus Abreu\n");
        sleep(1);
        printf(".Matheus Martinez\n");
        sleep(1);
        printf(".Rafael Rosário\n");
        sleep(1);
        printf(".Vinícius Farinha\n\n");
        sleep(1);
        
        printf("Se eu um dia conseguir fazer mais desses, de verdade, é graças a"
                " vocês.");
        
        sleep(5);        
       
        
    }
    
    return (EXIT_SUCCESS);

}

//main end


void tronco_mudei(){
    
    clem[0]=3;
    
    printf("Você coloca as mãos sobre a madeira, observando com calma, se"
                "ntindo a energia vital que te chamou a atenção, você percebe o"
                " quão simples ela é, básico como um único acorde ou uma frase "
                "solta. Simples o bastante para compreender completamente sem es"
                "forço, simples o bastante para alterar uma letra e formar outr"
                "a palavra.\n\nVocê imagina algo vivo, porém menor, mas a árvor"
                "e é grande, você tem matéria prima para muitos seres menores. "
                "Algo simples, algo leve, uma frase de poucas letras, uma imagem"
                " de poucas formas. O corpo, reto, magro. Dois círculos, finos c"
                "omo se de papel, leves, por que não coloridos, ? Pernas, antena"
                "s, orgãos e outros detalhes. Você cria uma imagem perfeita na "
                "sua mente, sua imaginação se acumulando como um músculo tensio"
                "nado. Com uma figura perfeitamente clara em mente você arremes"
                "sa sua vontade sobre o tronco, ");
    
    if(dox(30,0)){//Paradoxo
        printf("mas algo dá errado.\n\nA imagem que você criara se deforma na s"
                "ua frente, as asas da borboleta encolhem e endurecem, ficam es"
                "curas e grudam no corpo como uma carapaça. A transformação"
                " começa e o tronco começa a tomar forma. Em pequenas lascas, p"
                "artes do tronco criam pernas e se desgrudam, a madeira então c"
                "ria cabeça, antenas e a carapaça brilhante, e as baratas correm"
                " ou voam para longe, algumas passando sobre suas pernas ou voa"
                "ndo rente ao seu rosto. Cada vez mais delas rastejando sobre v"
                "ocê, até um grande en"
                "xame ter se formado sobre todo seu corpo, te arranhando e mord"
                "endo antes de desaparecerem na escuridão [-1 Saúde]. Todas finalmente sae"
                "m, e você pode se levantar.");
        
        dmg_dox++;
        clem[5]=1;
        
    }
            
    else{printf("e a realidade cede.\n\nEm peque"
                "nas lascas, partes do tronco criam pernas e se desgrudam. Em s"
                "eguida criam grandes asas coloridas, e voam para longe, inicia"
                "lmente uma por uma, logo mais e mais, até que estão saindo as d"
                "ezenas de cima de você. Em um pequeno turbilhão de cores e cen"
                "tenas de asas batendo as últimas borboletas levantam voo, leva"
                "ndo o que restava do tronco com elas.");    
    }
}

void tronco_queimei(){
    
    clem[0]=2;
    
    printf("Alguns metros a sua direita um carro (provavelmente seu carr"
                "o) se encontra com o parachoque ao redor de um poste de luz, o"
                " capô aparentemente voou juto com você e está em algum canto e"
                "scuro da beira da estrada, toda a parte da frente do carro est"
                "á em chamas. Não está próximo o bastante para que você sinta m"
                "iuta coisa além de uma ocasional onda de calor quando o vento "
                "bate. Curiosamente você sente as ondas de calor de forma dife"
                "rente, o calor tem textura e cor, se você se concetrar pode ve"
                "r ao redor das chamas ele se dissipando no ar frio da noite. C"
                "omo corante em um vidro de água, subindo em ondas, sendo dispe"
                "rsado pelo vento.\n\nO fogo poderia te ajudar, queimar esse t"
                "ronco para que você pudesse se mover. Você poderia traze-lo a"
                "té aqui, você estica o braço na direção das chamas, muito long"
                "e com certeza, mas um vento mais forte bate, o calor é empurra"
                "do na sua direção e você agarra um punhado, uma onda de calor,"
                " segura na sua mão como uma porção de areia. Você abre a mão e"
                " ele se dispersa no ar, não bastaria de qualquer forma, você p"
                "recisa do fogo.\n\nNa sua mente você vê, uma corda, um laço, "
                "um conduite para as chamas, para traze-las até aqui, você imag"
                "ina e refina a ideia até ser um conceito perfeito na sua mente"
                ", então arrmessando o braço na direção do fogo você impõe sua "
                "vontade sobre realidade. Como em um show pirotécnico uma labared"
                "a voa pelo ar e cai sobre o tronco. Ali você pode cuidadosamen"
                "te guiar a chama e o calor por entre os veios da madeira e con"
                "centrar a chama o bastante para que você possa quebrar o tronc"
                "o em alguns minutos. Depois de controlar o próprio fogo foi si"
                "mples o bastante não se queimar no processo, mas não foi possí"
                "vel fazer nada quanto a fumaça e cinza cobrindo seu corpo.");
    
}

void tronco_matei(int life){
    
    clem[0]=1;
    
    printf("Mesmo sendo um tronco de bom tamanho você imagina que poderia t"
           "ira-lo dali se fosse mais secos e oco, como uma árvore morta. ");
                
    if(!(life)){
        printf("Ela ainda parece estar viva na verdade");
    }
    else{
        printf("Você sabe que ela ainda está viva");
    }
       
        printf(", bastante ferida porém viva. Você passa as mãos ao longo do tro"
                "nco, imaginando como sair dali, mas acidentalmente causa um cor"
                "te, abre um pequeno buraco. Como que por um rasgo invisível vo"
                "cê sente o pouco que restava de vida naquele tronco escorrendo"
                " sobre suas mãos. Em pouco tempo você tem certeza que ele está"
                " morto, porém continua tão pesado quanto.\n\nIgnorando por um "
                "momento as consequências morais de ter matado um vegetal você "
                "foca sua atenção no cadáver sobre você. Qual era mesmo seu obj"
                "etivo? Que a madeira apodrecesse e inchasse, depois se tornass"
                "e ressacada e esbranquiçada, oca e frágil, um esqueleto da árvo"
                "re que foi. Privado da proteção da vida o vácuo da morte corro"
                "endo-o até que se tornasse nada.\n\nTudo isso está acontecendo"
                ", você sente, porém muito mais devagar do que p"
                "recisaria ser, impaciente você toma a morte nas próprias mãos,"
                " você lixa e maretela o tronco, esculpindo em madeira e decadê"
                "ncia a perfeita imagem da árvore morta que você imaginou.\n\nV"
                "ocê observa sua obra concluída, qualquer um diria que aquela á"
                "rvore caíra a anos atrás, o casco branco e trincado, o interio"
                "r oco e apodrecendo. Sem muito esforço você joga-o para o lado"
                ", vendo-se livre para levantar.");
}

void tronco_amassei(){
    
    clem[0]=4;
    
    printf("Com as mãos sobre a árvore você se põe a analisar a madeira, procur"
            "ar por um ponto falho ou espaço onde pudesse conseguir um ponto de"
            " apoio melhor. Frustrado na tentativa de procurar a solução na sup"
            "erfície, o interior do tronco parece mais promissor, não o centro "
            "de madeira sólida, mas sua composição. Você vê na sua frente, clar"
            "o como um livro tudo o que a madeira é, como ela age e reage.\n\n "
            "Você desfaz aquela informação, quebra tudo em pedaços como se reco"
            "rtasse letra por letra do livro, para então, com todo o alfabeto d"
            "isponível reescrever a história. Ponto por ponto você faz o tron"
            "co menos madeira, até que forma uma imagem mental perfeita de como"
            " você deseja que ele se torne. Com a imagem perfeitamente em ordem"
            ", como uma planta construída de recortes dos planos para outra cas"
            "a, você impõe sua vontade sobre a realidade.");
    
    if(dox(30,0)){printf("\n\nPorém algo dá erra"
            "do, você sente algo tentar interferir nos planos que você escreveu"
            ", como se uma mão fria, muito fria tocasse seu ombro antes que voc"
            "ê possa terminar de transformar o tronco. Como se ele quisesse os "
            "planos que você escreveu para ele.\n\nO porteiro! Do seu sonho, el"
            "e te seguiu até aqui, você deveria estar morto certo? E aqui você,"
            " está tentando fazer... O que exatamente é isso?\n\nVocê se move a"
            "ssustado, alguma coisa dentro de você doi. Dor de mais para alguém"
            " que deveria estar morto, mortos não sentem dor, você se lembra muito"
            " bem. Foi apenas uma dose de paranóia, respirando fundo e se conce"
            "ntrando você não tem problemas em transformar o tronco em um grand"
            "e cilindro de isopor que é empurrado para o lado com facilidade.\n"
            "\nEmbora você não tenha certeza se o hematoma no seu ombro es"
            "tava ali quando você acordou. [-1 Saúde]");
    
    dmg_dox++;
    clem[5]=2;
    }
    
    else{
        printf("Respirando fundo e se conce"
            "ntrando você não tem problemas em transformar o tronco em um grand"
            "e cilindro de isopor que é empurrado para o lado com facilidade.");
    }
    
}

void tutorial_mana(int path){
    
    int b;    
    
    printf(""
"*******************************************************************************\n"
            "Existem duas situações em que você utiliza mana, algumas magias ma"
            "is poderosas sempre vão precisar de um ou mais pontos de mana para"
            " serem utilizadas. E qualquer magia que não seja dos seus arcanas "
            "principais, que no seu caso são ");
    
    switch(path){
        
        case 0:
                printf("Tempo e Destino");                
                break;
        
        case 1:
            printf("Espaço e Mente");            
            break;
            
        case 2:
            printf("Matéria e Morte");
            break;
            
        case 3:
            printf("Forças e Primórdio");
            break;    
        
        case 4:
            printf("Vida e Espírito");
            break;    
    }
    
    printf(", custa um ponto de mana a mais para ser usada.\n"
            "*******************************************************************************\n");
    
     
    printf("\n\n1.Continuar...\n\n");
    scanf("%i", &b);    
    
    clear();

}

void tutorial_dox(){    
    int b;    
    
    
    printf(""
"*******************************************************************************\n"
            "As vezes, distorcer a realidade pode ter consequências graves. Usar"
            " magia de forma que poderia ser confundida com sorte, coincidência, "
            "ou algum fenômeno estranho porém sutil é geralmente inofensivo. Po"
            "rém feitos realmente impossíveis que desafiem as leis naturais pode"
            "m resultar em paradoxos. A realidade resiste a ser alterada, podend"
            "o fazer sua magia falhar, agir de forma inesperada ou te feri"
            "r de alguma forma. Dano causado por paradoxo não pode ser curado com magia e "
            "é indicado por um X na sua barra de saúde. Opções que tenham risco de "
            "paradoxo vão estar indicadas por um (P), seguido da chance do efeito ser bem sucedido "
            "e o paradoxo NãO acontecer. Forçar a realidade repetidamente é perigoso, ca"
            "da vez que você arrisca causar pardoxo (ele ocorrendo ou não) as chances de cont"
            "rolar os próximos diminuem."
            "\n"
            "*******************************************************************************\n");
    
     
    printf("\n\n1.Continuar...\n\n");
    scanf("%i", &b);    
    
    clear();

    
    
    
}

void tutorial_roll(){
    
    int b;    
    

    printf(""
"*******************************************************************************\n"
            "Algumas situações arriscadas, difíceis ou perigosas vão ter uma chance de falhar,"
            " essas opções vão estar indicadas por um (C), seguido da chance da ação dar certo."
            " O principal fator que influencia suas chances é sua saúde, mas suas escolhas ao "
            "longo do jogo também podem facilitar ou dificultar certas ações. Falhar em uma ação "
            "nunca significa o fim do jogo, apenas pode trazer consequências desagradáveis ao longo"
            " da história."
            "\n"
            "*******************************************************************************\n");    
    
    printf("\n\n1.Continuar...\n\n");
    scanf("%i", &b);    
    
    clear();
    
}

void heal(){
    
    clear();
    
    printf("Você se concentra no seu corpo, nos seus ferimentos, nas suas célul"
            "as, cada corte e contusão é clara como um farol para você. Com a d"
            "estreza de uma tecelã, você liga músculos e emenda pele, absorve h"
            "ematomas e solda ossos. Você restaura seu corpo a imagem de saúde "
            "perfeita que é possível a um ser humano.");
    
    if(dmg_dox){
        printf(" Execeto pelo");
        
        //Life
        if(clem[5]==1){
        printf("s arranhões e mordidas nas suas pernas. Aquelas baratas de algu"
                "ma forma feriram mais do que o seu corpo, rasgando e cortando "
                "partes do seu ser fundamental.");    
    }
        //Matter
        else if(clem[5]==2){
        printf(" hematoma no seu ombro. A mancha escura é um ferimento bem além"
                " do seu corpo, tendo ferido seu ser fundamental.");
        }
        
        printf(" você não consegue se curar pois a forma ");
    
    if(clem[5]==1){
        printf("das suas pernas saudáveis e intactas");
    }
    else if(clem[5]==2){
        printf("do seu ombro saudável e intacto");
    }
    
    printf(" deixou de existir. Temporáriamente claro... você tem quase certeza.");
}
    
    dmg=0;
    
}

void car(){
    
    extern int tut_mana;
    
    int chance=75;
    int a;
    int ok;
    int b=0; //1 Morte 2 Forças
    int m=0;
    
    
    
    do{
    
    clear();    
        
    printf("O incêndio parece estar de certa forma contido a parte da frente do "
            "carro, mas mesmo assim você se aproxima com cuidado, isso com certeza"
            " não é de forma alguma seguro.") ;
            
    if(arc[6]){
            printf("A aura com vem do banco de "
            "trás, mais que uma luz colorida você a percebe com todos os seus sentidos."
            " Ela irradia uma energia fria e rígida, que lembra metal "
            " ao tato, mas cheira a algo como incenso, com certeza tem um tipo d"
            "e presença poderosa");
    
            if(path==2){
                printf(", você não consegue deixar de pensar o quanto tudo te faz lembra"
                        "r do cemitério e das sombras do seu sonho");
    }
    }
    
    printf(".\n\nSe arriscando um pouco mais de perto, você pode ver ");
    
    if(arc[6]){
        printf("a origem do brilho. ");
    }
    
    else if(arc[1]){
        printf("o objeto que te atraiu até o carro. ");
    }
    
    printf("Largado do lado do cinto de segurança, uma pedra arroxeada, "
            "do tamanho de uma bola de gude. Você precisaria pega-la para enxer"
            "gar mais do que isso, a porta parece trancada, porém o vidro quebr"
            "ou no acidente, de forma que talvez seja possível alcançar o inter"
            "ior, mas você corre o risco de se queimar.");
    
    clem[8]=1;
    
    printf("\n\n");
    
    printf("1.Arriscar e pegar a pedra pela janela (C)%i%%", (calc_roll(chance,0)));
    
    printf("\n2.Deixar ela onde está");
    
    
    //Criar um matter para destrancar a porta
    if(((arc[2]>0)+(arc[0]>0)+(arc[4]>0))>0){
        
        printf("\n3.");
        
        if(arc[2]){
            printf("Reduzir as chamas[Forças]");            
            if(path!=3){
                printf("(-1 Mana)");
        }
    }
        
        else if(arc[0]){
            printf("Reduzir as chamas[Morte]");            
            if(path!=2){
                printf("(-1 Mana)");
        }            
    }
        
        else if(arc[4]){
            printf("Destrancar a porta[Matéria]");
            if(path!=2){
                printf("(-1 Mana)");
            }
        }
}
    
    if(((arc[2]>0)+(arc[0]>0)+(arc[4]>0))>1){
        printf("\n4.");
        
        if(arc[0]&&arc[2]){
            printf("Reduzir as chamas[Morte]");            
            if(path!=2){
                printf("(-1 Mana)");            
        }
    }
        else if(arc[4]){
            printf("Destrancar a porta[Matéria]");
            if(path!=2){
                printf("(-1 Mana)");
            }
        }
    }
    
    printf("\n\n");
    scanf("%i",&a);
    
    clear();
    
    //Scans
    
    if(a==1){//Pegar
        
                
        if((roll(chance,0))){//Sucesso
            printf("Você provavelmente vai se queimar feio se encostar no carro."
                    " O metal deve estar quente o bastante para deixar bolhas, "
                    "mas o plástico nem tanto. Apoiad");
            
            if(gen){
                printf("a");
            }
            else{
                printf("o");
            }
            
            printf(" em um detalhe opaco de plástico na lateral da porta você c"
                    "onsegue se debruçar janela a dentro e agarrar a pedra. Você"
                    " teme que ela também esteja quente, mas na verdade ela é "
                    "quase gelada ao toque.");
            
            clem[3]=1;
            
        }
        
        else{
            printf("Você tem certeza que não deve tocar no metal, mas a pedra e"
                    "stá de certa forma fora do seu alcance. Meio sem jeito e co"
                    "m medo de se queimar você tenta se debruçar janela a dentro."
                    " As pontas dos seus dedos tocam a pedra, se esticando um pouc"
                    "o mais você consegue coloca-la entre dois dedos, quando voc"
                    "ê tenta levanta-la ela escorrega e rola ao longo do banco,"
                    " ameçando cair no chão e ficar completamente fora de alcance."
                    " Você rapidamente se apoia na porta do carro e agarra o cristal"
                    ", a queimadura no abdomem dói, mas você vai viver. [-1 Saúde]");
            
            dmg++;
            clem[3]=1;
        }
        
        clem[3]=1;
        ok=1;
        
    }
    
    else if(a==2){//Deixa pra lá
        printf("Seja lá o que for não vale o risco de se machucar mais ainda, n"
                "em de passar tanto tempo ao lado de um motor em chamas.");
        ok=1;
    }
    
    else if(a==3){
        if(((arc[2]>0)+(arc[0]>0)+(arc[4]>0))>0){      
        
        if(arc[2]){//Forças            
                       
            ok=mana_check(1,3);
            if(ok){
                b=2;
            }
    }
        
        else if(arc[0]){//Morte
            ok=mana_check(1,2);
            if(ok){
                b=1;
            }
    }
        else if(arc[4]){ //Matéria
            ok=mana_check(1,2);
            if(ok){
                m=1;
            }
        }
        
}
        else{
            ok=0;
        }
        
        
    }
    
    else if(a==4){
       if(((arc[2]>0)+(arc[0]>0)+(arc[4]>0))>1){
           
           if(arc[0]&&arc[2]){                        
            ok=mana_check(1,2);
            if(ok){
                b=1;
            }
            }
           else if(arc[4]){
               ok=mana_check(1,2);
               if(ok){
                   m=1;
               }
               //printf do arc4
           }
    }       
    
    else{
        ok=0;
    }
    }
    else{
        ok=0;
    }
    }while(ok==0);
    
    if(b){
                        
        clear();
        
        clem[2]=1;//Carro apagado
        clem[3]=1;//Olho conseguido
        
        printf("Você consegue sentir o calor emanando do metal e das chamas");
        
        if(b==1){
            printf(", simples energia como qualquer outra, que você pode su"
                    "primir.");
        }
        
        else{
            printf(", uma aura avermelhada e palpável que você consegue moldar.");
        }
        
        printf(" Sem nenhuma dificuldade você comprime e diminui as chamas, até"
                " se extinguirem. Então cuidadosamente tocando no metal você ");
        
        if(b==1){
            printf("consome");
        }
        
        else{
            printf("dissipa");
        }
        
        printf(" o calor que cobria a porta do carro. Tornando perfeitamente se"
                "guro se apoiar nela para alcançar a pedra.");
    }
    
    if(m){
        printf("A tranca da porta parece ter sido danificada no acidente, na ve"
                "rdade você tem certeza que foi. Você consegue sentir as peças "
                "de metal intercaladas, ver todos os mecanismos complexos além "
                "da lataria do carro, como se o projeto do carro fosse col"
                "ocado na sua frente. Se concentrando na porta você rapidamente"
                " encontra o problema, prontamente imaginando aquelas peças rep"
                "aradas você consegue destrancar a porta, e com cuidado abri-la"
                " sem se queimar. Quem sabe com tempo o bastante você possa até"
                " recuperar esse carro.");
        clem[3]=1;
    }
    
    if((b>0||m>0)){
    
        printf("\n\n1.Continuar...\n\n");
        scanf("%i",&a);
        clear();
    }
    
    if(clem[3]){
        printf("Com a pedra em mãos você consegue observa-la mais de perto. Ela"
                " parece ser feita de três ''camadas'', a mais externa completa"
                "mente transparente como vidro, dentro dela, uma esfera menor, "
                "também transparente, mas tingida de púrpura, e no centro uma p"
                "edra ainda menor, opaca e brilhante, e completamente negra.\n\n"
                "Ela parece ter sido feita com a intenção de se assemelhar a um"
                " olho");
    }
    
}

int cat(int n){
    
    clear();
    
    int b = 0;
    int a;
    
    //Caso o jogador tenha espírito 2
    if(arc[8]>1){
        b+=10;
    }
    
    //Caso o jogador tenha espaço + espírito e tenha visto o espírito anteriormente
    if (n){
        
        b += 10;
        
        do{
        clear();
        
        printf("Você se vira e vai na direção do espírito, você questiona por um se"
                "gundo se deveria tentar falar com ele ou só chama-lo com asso"
                "bios como um gato. Antes que você pudesse decidir ele se vira "
                "e foge, disparando entre as árvores.");
        
        printf("\n\n1.Perseguir o espírito (C)%i%%",(calc_roll(60,b)));
        printf("\n2.Desistir e voltar");
        printf("\n\n");
        scanf("%i",&a);
        }while(a<1||a>2);
        
        //Se o jogador desiste, retorna x1=1 e ok=0 volta pras opções, sem essa opção
        if(a==2){               
            return(1);
        } 
        
        //Jogador não desiste, segue para um ponto comum APRENDE A FAZER PONTOS COMUNS!!!!
        else{
            clear();            
        }    
    }    

    //Sucesso
    if(roll(60,b)){
        
        clem[1]=2;//Viu tudo sobre o gato
        
        printf("O gato corre e salta por entre as árvores, mas você consegue acompan"
                "ha-lo de perto. Porém ele é rápido de mais para realmente alcançar. ");
        
        if(arc[8]>1){
            
            printf("\n\n[Espírito+]\nUm galho baixo te impede a passagem e te atrasa, você começa a perde-lo na escuridão, instintivamente você"
                    " grita ''Pare!''. E ele para, obedecendo seu comando, o espí"
                    "rito subtamente para de fugir e senta no chão, te olhando "
                    "como se esperasse outro comando.");
        }
        
        else{
            printf("Sempre próximo porém nunca realmente parando-o, você chega"
                    " até uma parede de pedra, encurralando o espírito. V"
                    "ocê poderia pega-lo agora. Ele vira para te encarar e senta, "
                    "como se te desafiasse a se aproximar.");
        }
        
        printf("\n\nMas antes que você possa responder de qualquer forma você s"
                "ente um calafrio na base da espinha. Uma pedra ao lado do gato"
                " começa a brilhar com uma suave luz dourada");
        
        if(arc[7]){
            printf(" você pode sentir o espaço se distorcendo ao redor daquele p"
                    "onto");
        }
        
        printf(". O feixo de luz se abre, e forma o limiar de um portal, conecta"
                "ndo a floresta a uma sala de estar bem mobiliada, como se simplesmente houves"
                "se um apartamento dentro da rocha. Do out"
                "ro lado, uma jovem, em torno dos seus vinte anos, de cabelos l"
                "oiros presos em um rabo de cavalo e olhos verdes. ''Fortuna!''"
                " ela chama");
        
        if(arc[8]>1){
            printf(", tirando a gata do transe");
        }
        
        printf(". O espírito então se vira e salta portal a dentro, caindo nos "
                "braços da sua... dona?\n\nA passagem imediatamente se fecha e "
                "a luz desaparece");
        
        if(arc[7]){
            printf(", você pode ver que ainda existe uma tênue conexão entre os"
                    " dois pontos que o portal ligava, mas você é incapaz de de"
                    "terminar de onde a gata veio");
        }
    }
    
    //Fail
    else{
        printf("O gato corre e salta por entre as árvores, mas você consegue acompan"
                "ha-lo de perto. Porém ele é rápido de mais para realmente alcançar. ");
        
        printf("Um galho baixo te impede a passagem e te atrasa, você começa a perde-lo na escuridão,"
                " quando se recupera ainda pode ouvir ele correndo mais adentro na mata fechada"
                " e corre para alcança-lo.\n\nO som subtamente para, e você acelera. A única trilha"
                " acaba em um parede de pedra, mas o espírito parece ter conseguido te despistar");
    }  
    
    printf(".\n\nVocê decide voltar até o seu carro.");
    clem[4]=1;
    return 0;
    
    }

void help(){
    clear();
    
    printf("A estrada "
            "se encontra completamente vazia, no escuro você não consegue ver n"
            "enhum ponto de referência no horizonte. Você instintivamente apalp"
            "a seus bolsos, você tinha um celular com certeza, provavelmente ele f"
            "oi lançado com o impacto, talvez ele tenha tido a mesma sorte que "
            "você. Procurando ao redor do local em que você acordou e eventualme"
            "nte um pouco além das árvores, você encontra várias migalhas de pl"
            "ástico e metal ao pé de uma árvore. Antes ele que a sua cabeça, voc"
            "ê pensa.");
    
    clem[4]=1;
}

void eye_grab(){
    
    int a;
    
    printf(" Embora pareça"
            " um tanto difícil de alcançar, considerando que a porta não"
            " parece estar abrindo e o metal está quente de mais para se apoiar "
            "sobre.");
    
    printf("\n\n''Eu acho que tive uma ideia. Considere seu primeiro exemplo pr"
            "ático de magia.''");
    
    printf("\n\n1.Continuar...\n\n");
    scanf("%i",&a);
    clear();
    
    do{
    printf("Ele esfrega as mãos e agita os braços como um ginasta prestes a se "
            "apresentar, depois de uma combinação de gestos exagerados que você"
            " imagina serem mais uma tentativa de te impressionar do que realmen"
            "te relacionados a magia, você consegue realmente sentir algo aconte"
            "cendo.\n\nMetade do corpo do mago começa a irradiar um suave brilho"
            " prateado, e a outra metade parece sutilmente descolorida, como uma"
            " foto saturada dada vida. Ondas brancas de energia luminosa fluem ao longo dos "
            " braços de Janus até se acumularem em uma nuvem reluzente entre suas mãos."
            " Dos braços estendidos duas sombras emergem, uma prateada, outra o"
            "paca, as duas rapidamente dão forma a nuvem de mana e tudo imediatam"
            "ente desaparece, deixando Janus segurando um par de longas pinças "
            "metálicas.\n\nEle olha na sua direção com um olhar ansioso, esperand"
            "o sua reação.");
    
    printf("\n\n1.''Isso foi incrível! Eu também posso fazer isso?''"
            "\n2.''Uau... Pinças, os pobres mortais devem tremer sob seus pés''"
            "\n3.''Eu acho que aprendi nada. O que foi tudo isso? Exatamente?''");
    
    printf("\n\n");
    scanf("%i",&a);
    clear();
    }while(a<1||a>3);
    
    if(a==1){
        printf("''Talvez, isso na verdade é o que nós chamamos de taça, mana da"
                "da forma sólida, as vezes elas se formam naturalmente como frutas"
                " ou pedras em lugares especiais. Mas criar um dessa forma é uma"
                " magia de Primórdio um pouco avançada.''");
    }
    
    else if(a==2){
        printf("''Ei! Não desmereça minha magia, é bem difícil modelar mana em "
                "coisas desse tipo. Pedras, caixas, vasos, fácil. Mas coisas com"
                " partes móveis?'' Ele abre e fecha os pegadores para ilustrar o"
                " comentário ''Outro nível, requer muito mais habilidade''");
    }
    
    else if(a==3){
        printf("''Bem, eu canalizei mana para fora do meu corpo e dei a ela for"
                "ma física. É o que nós chamamos de taça, elas se formam natura"
                "lmente em alguns lugares especiais. Mas o que eu acabei de faz"
                "er é uma magia de Primódio.''");
    }
    
    printf("\n\n''De qualquer forma as pinças são mais uma ilusão do que reais, elas se desfa"
            "zem em alguns minutos, e não são tão resistentes quanto metal de v"
            "erdade. Então se me dá licença''\n\nSe colocando ao lado da porta do "
            "carro ele consegue facilmente pescar o cristal.");
    
    clem[3]=2; //Janus pega o olho
    
    printf("\n\n1.Continuar...\n\n");
    scanf("%i",&a);
    clear();
    
    printf("''Geralmente o melhor a fazer é absorver essa mana de novo antes"
                " que ela se dissipe no ar.");
    
    //Bonus de mana
    if(mana<5&&arc[6]){
        
        do{
        printf(" Mas aqui, por que não fica pra você?''");
        
        printf("\n\n1.Aceitar[Primórdio](+1 Mana)"
                "\n2.Recusar\n\n");
        
        scanf("%i",&a);
        clear();        
        }while(a<1||a>2);
        
        if(a==1){
            printf("Segurando a pinça você consegue facilmente sentir como é fa"
                    "lsa, feita de mana, não metal. Como alguém que desfia um su"
                    "éter puxando um fio solto você rapidamente retona ela a sua"
                    " matéria prima, armazenando a mana dentro de você.");            
            mana++;
        }
                
        else if(a==2){
            printf("''Quanta educação!'' Ele franze o queixo em uma expressão "
                    "debochada ''Mas mana pode ser mais difícil de conseguir por"
                    " aí do que parece'' Ele dobra os pegadores como se fosse q"
                    "uebra-los ao meio, o falso metal se desfaz na mesma energia"
                    " branca que você viu antes, que é canalizada para o peito de Janus.");                      
            
        }        
        
    }
    
    else{
        printf(" Ele dobra os pegadores como se fosse q"
                "uebra-los ao meio, o falso metal se desfaz na mesma energia"
                " branca que você viu antes, que é canalizada para o peito de Janus.");
    }
    
    printf("\n\n1.Continuar...\n\n");
    scanf("%i",&a);     
    clear();
    
    
    if(!(clem[8])){ //Janus mostra a pedra
        printf("Você pede para ver a pedra, já que ainda não teve a chance de vê"
                "-la de perto, Janus abre a palma da mão para você examina-la, m"
                "as não te entrega.\n\nEla"
                " parece ser feita de três ''camadas'', a mais externa completa"
                "mente transparente como vidro, dentro dela, uma esfera menor, "
                "também transparente, mas tingida de púrpura, e no centro uma p"
                "edra ainda menor, opaca e brilhante, e completamente negra.\n\n"
                "Ela parece ter sido feita com a intenção de se assemelhar a um"
                " olho");
        
        printf("\n\n1.Continuar...\n\n");
        scanf("%i",&a);     
        clear();
        
        //E caímos para o you are the chosen 1!
        
    }
}

void go_janus(){
    
    int ok=0;
    int a;
    
do{
    printf("Você continua ao lado de Janus. Yoonir sacode a cabeça desapontado.\n\n"
            "''Quando você perceber o erro que cometeu sempre terá a chance de nos procurar'' Ele se vira, e começa a correr na direção "
            "da floresta.\n\n"
            "''Obrigado, mas não deixe ele fugir com o olho! Se você não conseguir desfazer o "
            "que ele fez com meus braços vai ter que atirar por mim. Não se preocupe, você não vai matar ele, eu juro.''");
    
    if(arc[6]){
        printf("\n\n[Primórdio]\nVocê consegue ver uma leve aura na arma de Janus, ela parece encantada de alguma maneira. ");
    }
    if(arc[3]||arc[5]){
        printf("\n\n");
        if(arc[3]){
            printf("[Vida]");
        }
        if(arc[5]){
            printf("[Mente]");
        }
        
        printf("\n");
        
        printf("Você sente que a águia que Yoonir estava controlando ainda está "
                "por perto em algum lugar.");
    }
    
    //Opção 1
    printf("\n\n1.Pegar a arma e atirar (C)%i%%",(calc_roll(65,0)));
    
    //Opção 2    
    if((1+(arc[9]>1)+(arc[7]>0)+(arc[2]>1)+(arc[5]>0)+(arc[3]>0)+(arc[3]>0)+(arc[6]>0)+1)>=2){
        
        printf("\n2.");
        
        if(arc[9]>1){
            printf("Voltar no tempo[Tempo+](-1 Mana)(P)%i%%",(100-(calc_dox(30,0))));            
        }
        
        else if(arc[7]){
            printf("Teleportar o olho para sua mão[Espaço]");
            if(path!=1){
                printf("(-1 Mana)");
            }
            printf("(P)%i%%",(100-(calc_dox(30,0))));
        }
        
        else if(arc[2]>1){
            printf("Usar telecinesia[Forças+](P)%i%%",(100-(calc_dox(30,0))));
        }
        
        else if(arc[5]){
            printf("Usar a águia[Mente]");
            if(path!=1){
                printf("(-1 Mana)");
            }           
        }
        
        else if(arc[3]){
            printf("Usar a águia[Vida]");
            if(path!=4){
                printf("(-1 Mana)");
            }
        }
        
        else if(arc[3]){
            printf("Curar os braços de Janus[Vida]");
            if(path!=4){
                printf("(-1 Mana)");
            }
        }
        
        else if(arc[6]){
            printf("Desfazer a magia sobre os braços de Janus[Primórdio]");
            if(path!=3){
                printf("(-1 Mana)");
            }
        }
        
        else{
            printf("Deixar Yoonir escapar com o artefato");
        }        
    }
    
    //Opção 3
    if((1+(arc[9]>1)+(arc[7]>0)+(arc[2]>1)+(arc[5]>0)+(arc[3]>0)+(arc[3]>0)+(arc[6]>0)+1)>=3){
        
        printf("\n3.");
        
        if((arc[7]>0)&&((1+(arc[9]>1))==2)){
            printf("Teleportar o olho para sua mão[Espaço]");
            if(path!=1){
                printf("(-1 Mana)");
            }
            printf("(P)%i%%",(100-(calc_dox(30,0))));
        }
        
        else if((arc[2]>1)&&((1+(arc[9]>1)+(arc[7]>0))==2)){
            printf("Usar telecinesia[Forças+](P)%i%%",(100-(calc_dox(30,0))));
        }
        
        else if((arc[5]>0)&&((1+(arc[9]>1)+(arc[7]>0)+(arc[2]>1))==2)){
            printf("Usar a águia[Mente]");
            if(path!=1){
                printf("(-1 Mana)");
            }   
        }
        
        else if((arc[3]>0)&&((1+(arc[9]>1)+(arc[7]>0)+(arc[2]>1)+(arc[5]>0))==2)){
            printf("Usar a águia[Vida]");
            if(path!=4){
                printf("(-1 Mana)");
            }
        }
        
        else if((arc[3])&&((1+(arc[9]>1)+(arc[7]>0)+(arc[2]>1)+(arc[5]>0)+(arc[3]>0))==2)){
            printf("Curar os braços de Janus[Vida]");
            if(path!=4){
                printf("(-1 Mana)");
            }
        }
        
        else if((arc[6]>0)&&((1+(arc[9]>1)+(arc[7]>0)+(arc[2]>1)+(arc[5]>0)+(arc[3]>0)+(arc[3]>0))==2)){
            printf("Desfazer a magia sobre os braços de Janus[Primórdio]");
            if(path!=3){
                printf("(-1 Mana)");
            }
        }
        
        else{
            printf("Deixar Yoonir escapar com o artefato");
        }        
    }
    
    //Opção 4
    
    if((1+(arc[9]>1)+(arc[7]>0)+(arc[2]>1)+(arc[5]>0)+(arc[3]>0)+(arc[3]>0)+(arc[6]>0)+1)>=4){
        
        printf("\n4.");
        
        if((arc[2]>1)&&((1+(arc[9]>1)+(arc[7]>0))==3)){
            printf("Usar telecinesia[Forças+](P)%i%%",(100-(calc_dox(30,0))));
        }
        
        else if((arc[5]>0)&&((1+(arc[9]>1)+(arc[7]>0)+(arc[2]>1))==3)){
            printf("Usar a águia[Mente]");
            if(path!=1){
                printf("(-1 Mana)");
            }   
        }
        
        else if((arc[3]>0)&&((1+(arc[9]>1)+(arc[7]>0)+(arc[2]>1)+(arc[5]>0))==3)){
            printf("Usar a águia[Vida]");
            if(path!=4){
                printf("(-1 Mana)");
            }
        }
        
        else if((arc[3])&&((1+(arc[9]>1)+(arc[7]>0)+(arc[2]>1)+(arc[5]>0)+(arc[3]>0))==3)){
            printf("Curar os braços de Janus[Vida]");
            if(path!=4){
                printf("(-1 Mana)");
            }
        }
        
        else if((arc[6]>0)&&((1+(arc[9]>1)+(arc[7]>0)+(arc[2]>1)+(arc[5]>0)+(arc[3]>0)+(arc[3]>0))==3)){
            printf("Desfazer a magia sobre os braços de Janus[Primórdio]");
            if(path!=3){
                printf("(-1 Mana)");
            }
        }
        
        else{
            printf("Deixar Yoonir escapar com o artefato");
        }
        }
        
        //Opção 5
        
        if((1+(arc[9]>1)+(arc[7]>0)+(arc[2]>1)+(arc[5]>0)+(arc[3]>0)+(arc[3]>0)+(arc[6]>0)+1)>=5){
            
            printf("\n5.");
            
            if((arc[5]>0)&&((1+(arc[9]>1)+(arc[7]>0)+(arc[2]>1))==4)){
            printf("Usar a águia[Mente]");
            if(path!=1){
                printf("(-1 Mana)");
            }   
        }
        
        else if((arc[3]>0)&&((1+(arc[9]>1)+(arc[7]>0)+(arc[2]>1)+(arc[5]>0))==4)){
            printf("Usar a águia[Vida]");
            if(path!=4){
                printf("(-1 Mana)");
            }
        }
        
        else if((arc[3])&&((1+(arc[9]>1)+(arc[7]>0)+(arc[2]>1)+(arc[5]>0)+(arc[3]>0))==4)){
            printf("Curar os braços de Janus[Vida]");
            if(path!=4){
                printf("(-1 Mana)");
            }
        }
        
        else if((arc[6]>0)&&((1+(arc[9]>1)+(arc[7]>0)+(arc[2]>1)+(arc[5]>0)+(arc[3]>0)+(arc[3]>0))==4)){
            printf("Desfazer a magia sobre os braços de Janus[Primórdio]");
            if(path!=3){
                printf("(-1 Mana)");
            }
        }
        
        else{
            printf("Deixar Yoonir escapar com o artefato");
        }
        }
    
    //Opção 6
        
    if((1+(arc[9]>1)+(arc[7]>0)+(arc[2]>1)+(arc[5]>0)+(arc[3]>0)+(arc[3]>0)+(arc[6]>0)+1)>=6){
        printf("\n6.Deixar Yoonir escapar com o artefato");
    }
    
    printf("\n\n");
    scanf("%i",&a);
    clear();
    
    ///////////////////////////////////Scans///////////////////////////////////
    
    //PARA a==1
    if(a==1){
        ok=1;
        j_shot();
    }
    
    //PARA a==2
    else if(a==2){
        if((1+(arc[9]>1)+(arc[7]>0)+(arc[2]>1)+(arc[5]>0)+(arc[3]>0)+(arc[3]>0)+(arc[6]>0)+1)>=2){
            
            //Tempo
            if(arc[9]>1){                
                ok=mana_check(1,99);                
                if(ok){
                    j_tempo();
                }                             
            }

            //Teleport
            else if(arc[7]){                
                ok=mana_check(1,1);
                if(ok){
                    j_teleport();
                }
            }

            //Telecinesia
            else if(arc[2]>1){
                ok=1;
                j_telecinesia();
            }

            //Aguia mente
            else if(arc[5]){                
                ok=mana_check(1,1);                
                if(ok){
                    j_aguiam();
                }          
            }

            //Aguia vida
            else if(arc[3]){
                ok=mana_check(1,4);
                if(ok){
                    j_aguiav();
                }
            }

            //Cura
            else if(arc[3]){
                ok=mana_check(1,4);
                if(ok){
                    j_cura();
                }
            }

            //Counter
            else if(arc[6]){
                ok=mana_check(1,3);
                if(ok){
                    j_counter();
                }
            }

            else{
                ok=1;
                j_escape();
            }
            
        }        
        else{
            ok=0;
        }
    }
    
    //PARA a==3
    else if(a==3){
        if((1+(arc[9]>1)+(arc[7]>0)+(arc[2]>1)+(arc[5]>0)+(arc[3]>0)+(arc[3]>0)+(arc[6]>0)+1)>=3){     
            
            //Teleport
            if((arc[7]>0)&&((1+(arc[9]>1))==2)){                
                ok=mana_check(1,1);
                if(ok){
                    j_teleport();
                }
            }

            //Telecinesia
            else if((arc[2]>1)&&((1+(arc[9]>1)+(arc[7]>0))==2)){
                ok=1;
                j_telecinesia();
            }

            //Aguia mente
            else if((arc[5]>0)&&((1+(arc[9]>1)+(arc[7]>0)+(arc[2]>1))==2)){                
                ok=mana_check(1,1);                
                if(ok){
                    j_aguiam();
                }          
            }

            //Aguia vida
            else if((arc[3]>0)&&((1+(arc[9]>1)+(arc[7]>0)+(arc[2]>1)+(arc[5]>0))==2)){
                ok=mana_check(1,4);
                if(ok){
                    j_aguiav();
                }
            }

            //Cura
            else if((arc[3]>0)&&((1+(arc[9]>1)+(arc[7]>0)+(arc[2]>1)+(arc[5]>0)+(arc[3]>0))==2)){
                ok=mana_check(1,4);
                if(ok){
                    j_cura();
                }
            }

            //Counter
            else if((arc[6]>0)&&((1+(arc[9]>1)+(arc[7]>0)+(arc[2]>1)+(arc[5]>0)+(arc[3]>0)+(arc[3]>0))==2)){
                ok=mana_check(1,3);
                if(ok){
                    j_counter();
                }
            }

            else{
                ok=1;
                j_escape();
            }
            
        }
        
        else{
            ok=0;
        }
    }
    
    //PARA a==4
    else if(a==4){
        if((1+(arc[9]>1)+(arc[7]>0)+(arc[2]>1)+(arc[5]>0)+(arc[3]>0)+(arc[3]>0)+(arc[6]>0)+1)>=4){
            
            //Telecinesia
            if((arc[2]>1)&&((1+(arc[9]>1)+(arc[7]>0))==3)){
                ok=1;
                j_telecinesia();
            }

            //Aguia mente
            else if((arc[5]>0)&&((1+(arc[9]>1)+(arc[7]>0)+(arc[2]>1))==3)){                
                ok=mana_check(1,1);                
                if(ok){
                    j_aguiam();
                }          
            }

            //Aguia vida
            else if((arc[3]>0)&&((1+(arc[9]>1)+(arc[7]>0)+(arc[2]>1)+(arc[5]>0))==3)){
                ok=mana_check(1,4);
                if(ok){
                    j_aguiav();
                }
            }

            //Cura
            else if((arc[3]>0)&&((1+(arc[9]>1)+(arc[7]>0)+(arc[2]>1)+(arc[5]>0)+(arc[3]>0))==3)){
                ok=mana_check(1,4);
                if(ok){
                    j_cura();
                }
            }

            //Counter
            else if((arc[6]>0)&&((1+(arc[9]>1)+(arc[7]>0)+(arc[2]>1)+(arc[5]>0)+(arc[3]>0)+(arc[3]>0))==3)){
                ok=mana_check(1,3);
                if(ok){
                    j_counter();
                }
            }

            else{
                ok=1;
                j_escape();
            }
            
        }
        
        else{
            ok=0;
        }
    }
    
    //PARA a==5
    else if(a==5){
        if((1+(arc[9]>1)+(arc[7]>0)+(arc[2]>1)+(arc[5]>0)+(arc[3]>0)+(arc[3]>0)+(arc[6]>0)+1)>=5){
            
            //Aguia mente
            if((arc[5]>0)&&((1+(arc[9]>1)+(arc[7]>0)+(arc[2]>1))==4)){                
                ok=mana_check(1,1);                
                if(ok){
                    j_aguiam();
                }          
            }

            //Aguia vida
            else if((arc[3]>0)&&((1+(arc[9]>1)+(arc[7]>0)+(arc[2]>1)+(arc[5]>0))==4)){
                ok=mana_check(1,4);
                if(ok){
                    j_aguiav();
                }
            }

            //Cura
            else if((arc[3]>0)&&((1+(arc[9]>1)+(arc[7]>0)+(arc[2]>1)+(arc[5]>0)+(arc[3]>0))==4)){
                ok=mana_check(1,4);
                if(ok){
                    j_cura();
                }
            }

            //Counter
            else if((arc[6]>0)&&((1+(arc[9]>1)+(arc[7]>0)+(arc[2]>1)+(arc[5]>0)+(arc[3]>0)+(arc[3]>0))==4)){
                ok=mana_check(1,3);
                if(ok){
                    j_counter();
                }
            }

            else{
                ok=1;
                j_escape();
            }
            
        }
        
        else{
            ok=0;
        }
    }
    
    //PARA a==6
    else if(a==6){
        if((1+(arc[9]>1)+(arc[7]>0)+(arc[2]>1)+(arc[5]>0)+(arc[3]>0)+(arc[3]>0)+(arc[6]>0)+1)>=6){
            ok=1;
            j_escape();
        }        
        else{
            ok=0;
        }
    }
    
    //Valor naum existe
    else{
        ok=0;
    }
    
}while(!ok);
}

void go_yoonir(){
    
    int ok=0;
    int a=0;
    
    do{
    
    printf("''Ok, eu vou com você'' Você responde Yoonir.\n\n"
            "''Depois de tudo que passamos juntos, você me troca pelo primeiro que"
            " aparece?'' Ele brinca, surpreendentemente bem humorado. ''Se você "
            "mudar de ideia sempre pode nos procurar, mas antes''\n\nEle pega a "
            "moeda de prata e consegue arremessa-la para cima"
            ", você sente que ele fez algum tipo de magia. As runas "
            "de Yoonir se apagam, e Janus recupera sua coordenação, pronto para"
            " atirar.");
    
    if(arc[3]||arc[5]){
        printf("\n\n");
        if(arc[3]){
            printf("[Vida]");
        }
        if(arc[5]){
            printf("[Mente]");
        }
        
        printf("\n");
        
        printf("Você sente que a águia que Yoonir estava controlando ainda está "
                "por perto em algum lugar.");
    }
    
    //Opção 1
    printf("\n\n1.Segurar a arma (C)%i%%",(calc_roll(70,0)));
    
    //Opção 2      
    if((1+(arc[0]>0)+(arc[1]>0)+(arc[2]>1)+(arc[3]>0)+(arc[5]>0)+(arc[7]>0)+(arc[9]>1)+1)>=2){
        printf("\n2.");
        
        if(arc[0]>0){
            printf("Destruir a arma[Morte]");
            if(path!=2){
                printf("(-1 Mana)");
            }
        }
        
        else if(arc[1]>0){
            printf("Usar a sorte para protege-lo[Destino]");
            if(path!=0){
                printf("(-1 Mana)");
            }
        }
        
        else if(arc[2]>1){
            printf("Desviar a bala[Forças]");
            if(path!=3){
                printf("(-1 Mana)");
            }
            printf("(P)%i%%",(100-(calc_dox(30,0))));
        }
        
        else if(arc[3]>0){
            printf("Usar a águia[Vida]");
            if(path!=4){
                printf("(-1 Mana)");
            }
        }
        
        else if(arc[5]>0){
            printf("Usar a águia[Mente]");
            if(path!=1){
                printf("(-1 Mana)");
            }
        }
        
        else if(arc[7]>0){
            printf("Teleportar a arma até você[Espaço]");
            if(path!=1){
                printf("(-1 Mana)");
            }
            printf("(P)%i%%",(100-(calc_dox(30,0))));
        }
        
        else if(arc[9]>1){
            printf("Voltar no tempo[Tempo+](-1 Mana)(P)%i%%",(100-(calc_dox(30,0))));
        }
        
        else{
            printf("Não se arriscar, deixar Janus dar o tiro");
        }
    }
    
    //Opção 3
    if((1+(arc[0]>0)+(arc[1]>0)+(arc[2]>1)+(arc[3]>0)+(arc[5]>0)+(arc[7]>0)+(arc[9]>1)+1)>=3){
        printf("\n3.");
        
        if((arc[1]>0)&&((1+(arc[0]>0))==2)){
            printf("Usar a sorte para protege-lo[Destino]");
            if(path!=0){
                printf("(-1 Mana)");
            }
        }
        
        else if((arc[2]>1)&&((1+(arc[0]>0)+(arc[1]>0))==2)){
            printf("Desviar a bala[Forças]");
            if(path!=3){
                printf("(-1 Mana)");
            }
            printf("(P)%i%%",(100-(calc_dox(30,0))));
        }
        
        else if((arc[3]>0)&&((1+(arc[0]>0)+(arc[1]>0)+(arc[2]>1))==2)){
            printf("Usar a águia[Vida]");
            if(path!=4){
                printf("(-1 Mana)");
            }
        }
        
        else if((arc[5]>0)&&((1+(arc[0]>0)+(arc[1]>0)+(arc[2]>1)+(arc[3]>0))==2)){
            printf("Usar a águia[Mente]");
            if(path!=1){
                printf("(-1 Mana)");
            }
        }
        
        else if((arc[7]>0)&&((1+(arc[0]>0)+(arc[1]>0)+(arc[2]>1)+(arc[3]>0)+(arc[5]>0))==2)){
            printf("Teleportar a arma até você[Espaço]");
            if(path!=1){
                printf("(-1 Mana)");
            }
            printf("(P)%i%%",(100-(calc_dox(30,0))));
        }
        
        else if((arc[9]>1)&&((1+(arc[0]>0)+(arc[1]>0)+(arc[2]>1)+(arc[3]>0)+(arc[5]>0)+(arc[7]>0))==2)){
            printf("Voltar no tempo[Tempo+](-1 Mana)(P)%i%%",(100-(calc_dox(30,0))));
        }
        
        else{
            printf("Não se arriscar, deixar Janus dar o tiro");
        }
        
    }
    
    //Opção 4
    if((1+(arc[0]>0)+(arc[1]>0)+(arc[2]>1)+(arc[3]>0)+(arc[5]>0)+(arc[7]>0)+(arc[9]>1)+1)>=4){
        printf("\n4.");
        
        if((arc[2]>1)&&((1+(arc[0]>0)+(arc[1]>0))==3)){
            printf("Desviar a bala[Forças]");
            if(path!=3){
                printf("(-1 Mana)");
            }
            printf("(P)%i%%",(100-(calc_dox(30,0))));
        }
        
        else if((arc[3]>0)&&((1+(arc[0]>0)+(arc[1]>0)+(arc[2]>1))==3)){
            printf("Usar a águia[Vida]");
            if(path!=4){
                printf("(-1 Mana)");
            }
        }
        
        else if((arc[5]>0)&&((1+(arc[0]>0)+(arc[1]>0)+(arc[2]>1)+(arc[3]>0))==3)){
            printf("Usar a águia[Mente]");
            if(path!=1){
                printf("(-1 Mana)");
            }
        }
        
        else if((arc[7]>0)&&((1+(arc[0]>0)+(arc[1]>0)+(arc[2]>1)+(arc[3]>0)+(arc[5]>0))==3)){
            printf("Teleportar a arma até você[Espaço]");
            if(path!=1){
                printf("(-1 Mana)");
            }
            printf("(P)%i%%",(100-(calc_dox(30,0))));
        }
        
        else if((arc[9]>1)&&((1+(arc[0]>0)+(arc[1]>0)+(arc[2]>1)+(arc[3]>0)+(arc[5]>0)+(arc[7]>0))==3)){
            printf("Voltar no tempo[Tempo+](-1 Mana)(P)%i%%",(100-(calc_dox(30,0))));
        }
        
        else{
            printf("Não se arriscar, deixar Janus dar o tiro");
        }
        
    }
    
    //Opção 5
    if((1+(arc[0]>0)+(arc[1]>0)+(arc[2]>1)+(arc[3]>0)+(arc[5]>0)+(arc[7]>0)+(arc[9]>1)+1)>=5){
        printf("\n5.Não se arriscar, deixar Janus dar o tiro");
        
    }
    
    printf("\n\n");
    scanf("%i",&a);
    clear();
    
    ////////////////////////////////Scans////////////////////////////////
    
    //PARA a==1
    if (a==1){
        ok=1;
        y_arma();
    }
    
    //PARA a==2
    else if (a==2){        
        if((1+(arc[0]>0)+(arc[1]>0)+(arc[2]>1)+(arc[3]>0)+(arc[5]>0)+(arc[7]>0)+(arc[9]>1)+1)>=2){
            
            //Destroy
            if(arc[0]>0){
                ok=mana_check(1,2);
                if(ok){
                    y_destroy();
                }
            }
        
            //Sorte
            else if(arc[1]>0){
                ok=mana_check(1,0);
                if(ok){
                    y_sorte();
                }
            }

            //Desvia
            else if(arc[2]>1){
                ok=mana_check(1,3);
                if(ok){
                    y_bala();                 
                }                
            }

            //àguia Vida
            else if(arc[3]>0){
                ok=mana_check(1,4);
                if(ok){
                    y_aguiav();
                }
            }

            //águia mente
            else if(arc[5]>0){
                ok=mana_check(1,1);
                if(ok){
                    y_aguiam();
                }
            }

            //TP
            else if(arc[7]>0){
                ok=mana_check(1,1);
                if(ok){
                    y_teleport();
                }
            }

            //Tempo
            else if(arc[9]>1){
                ok=mana_check(1,99);
                if(ok){
                    y_tempo();
                }
            }

            else{
                ok=1;
                y_nope();
            }        
        }        
        else{
            ok=0;
        }        
    }
    
    //PARA a==3 
    else if (a==3){        
        if((1+(arc[0]>0)+(arc[1]>0)+(arc[2]>1)+(arc[3]>0)+(arc[5]>0)+(arc[7]>0)+(arc[9]>1)+1)>=3){
        
            //Sorte
            if((arc[1]>0)&&((1+(arc[0]>0))==2)){
                ok=mana_check(1,0);
                if(ok){
                    y_sorte();
                }
            }

            //Desvia
            else if((arc[2]>1)&&((1+(arc[0]>0)+(arc[1]>0))==2)){
                ok=mana_check(1,3);
                if(ok){
                    y_bala();                 
                }                
            }

            //àguia Vida
            else if((arc[3]>0)&&((1+(arc[0]>0)+(arc[1]>0)+(arc[2]>1))==2)){
                ok=mana_check(1,4);
                if(ok){
                    y_aguiav();
                }
            }

            //águia mente
            else if((arc[5]>0)&&((1+(arc[0]>0)+(arc[1]>0)+(arc[2]>1)+(arc[3]>0))==2)){
                ok=mana_check(1,1);
                if(ok){
                    y_aguiam();
                }
            }

            //TP
            else if((arc[7]>0)&&((1+(arc[0]>0)+(arc[1]>0)+(arc[2]>1)+(arc[3]>0)+(arc[5]>0))==2)){
                ok=mana_check(1,1);
                if(ok){
                    y_teleport();
                }
            }

            //Tempo
            else if((arc[9]>1)&&((1+(arc[0]>0)+(arc[1]>0)+(arc[2]>1)+(arc[3]>0)+(arc[5]>0)+(arc[7]>0))==2)){
                ok=mana_check(1,99);
                if(ok){
                    y_tempo();
                }
            }

            else{
                ok=1;
                y_nope();
            }
            
        }        
        else{
            ok=0;
        }        
    }
    
    //PARA a==4
    else if (a==4){        
        if((1+(arc[0]>0)+(arc[1]>0)+(arc[2]>1)+(arc[3]>0)+(arc[5]>0)+(arc[7]>0)+(arc[9]>1)+1)>=4){
            
            //Desvia
            if((arc[2]>1)&&((1+(arc[0]>0)+(arc[1]>0))==3)){
                ok=mana_check(1,3);
                if(ok){
                    y_bala();                 
                }                
            }

            //àguia Vida
            else if((arc[3]>0)&&((1+(arc[0]>0)+(arc[1]>0)+(arc[2]>1))==3)){
                ok=mana_check(1,4);
                if(ok){
                    y_aguiav();
                }
            }

            //águia mente
            else if((arc[5]>0)&&((1+(arc[0]>0)+(arc[1]>0)+(arc[2]>1)+(arc[3]>0))==3)){
                ok=mana_check(1,1);
                if(ok){
                    y_aguiam();
                }
            }

            //TP
            else if((arc[7]>0)&&((1+(arc[0]>0)+(arc[1]>0)+(arc[2]>1)+(arc[3]>0)+(arc[5]>0))==3)){
                ok=mana_check(1,1);
                if(ok){
                    y_teleport();
                }
            }

            //Tempo
            else if((arc[9]>1)&&((1+(arc[0]>0)+(arc[1]>0)+(arc[2]>1)+(arc[3]>0)+(arc[5]>0)+(arc[7]>0))==3)){
                ok=mana_check(1,99);
                if(ok){
                    y_tempo();
                }
            }

            else{
                ok=1;
                y_nope();
            }
        
        }        
        else{
            ok=0;
        }        
    }
    
    //PARA a==5
    else if (a==5){        
        if((1+(arc[0]>0)+(arc[1]>0)+(arc[2]>1)+(arc[3]>0)+(arc[5]>0)+(arc[7]>0)+(arc[9]>1)+1)>=5){
            ok=1;
            y_nope();        
        }        
        else{
            ok=0;
        }        
    }
    
    else{
        ok=0;
    }
    
    }while(!ok);
    
}

// Finale //

void j_aguiam() {
    
    extern int gen;
    extern int clem[40];
    extern int dmg;
    
    printf("A águia que Yoonir usou para te atacar, ainda está por aqui, perto. "
            "Você consegue sentir sua consciência, como um zumbido baixo que você"
            " ouve vindo de algum lugar próximo. Ali, em um galho alto, mas ainda"
            " perto o bastante.");
    
    printf("\n\nVocê estende sua mente naquela direção, e rapidamente engloba a "
            "da águia, encontrando pouca resistência no cérebro simples do pássaro. "
            "Você então ordena, ''Ataque Yoonir, pegue o cristal, traga-o para mim''"
            " A ave não reage, Yoonir já está escapando em meio as árvores. O nome do "
            "mago e a palara cristal não significam nada na mente da águia, você"
            " rapidamente molda uma imagem do artefato e do mago que escapou, "
            "associando com instintos básicos de atacar e recolher que você consegue"
            " expressar mentalmente.\n\n"
            "O pássaro levanta voo e desaparece entre as árvores. Você não consegue "
            "mais ver a águia nem o mago, por alguns segundos você não ouve nada. "
            "Então ela surge, do topo da copa das árvores, voando alto ela deixa o "
            "cristal cair e você agarra-o no ar.");
    
    clem[9]=1;
    clem[10]=0;


}

void j_aguiav() {
    
    extern int clem[40];
        
    printf("A águia que Yoonir usou para te atacar, ainda está por aqui, perto. "
            "Você consegue sentir sua energia vital, como um pulsar baixo que você"
            " sente vindo de algum lugar próximo. Ali, em um galho alto, mas ainda"
            " perto o bastante.");
    
    printf("\n\nVocê tenta dominar a criatura, acessando seus instintos e suas "
            "funções corporais você consegue criar um tipo rudmentar de controle sobre ela. "
            "Você então ordena, ''Ataque Yoonir, pegue o cristal, traga-o para mim''"
            " A ave não reage, Yoonir já está escapando em meio as árvores. O nome do "
            "mago e a palara cristal não significam nada para águia, você"
            " rapidamente dispara alguns instintos de caça e proteção na águia,"
            " fazendo ela ter a impressão que teve seu território invadido, tratando o cristal"
            " como um filhote ou ovo, e o local em que você está como um ninho.\n\n"
            "O pássaro levanta voo e desaparece entre as árvores. Você não consegue "
            "mais ver a águia nem o mago, por alguns segundos você não ouve nada. "
            "Então ela surge, do topo da copa das árvores, com o cristal seguro "
            "em uma garra ela pousa e cuidadosamente baixa o artefato entre um "
            "punhado de folhagem ao seu lado.\n\nCom as condições cumpridas, a magia "
            "de dissipa e o águia volta a si. Confusa, ela bica o cristal uma vez, "
            "e logo em seguida levanta voo.");
    
    clem[9]=1;
    clem[10]=0;
   
}

void j_counter() {
        
    extern int clem[40];
    
    printf("Você foca seu esforço em tentar desfazer o que Yoonir fez. Concentrando"
            " sua visão na aura mágica de Janus e do encantamento sobre ele, "
            "você consegue sentir o encantamento entranhado no corpo de Janus, "
            "uma magia de Vida provavelmente. Cuidadosamente, porém com agilidade,"
            " você impõe sua magia sobre a de Yoonir. Como agulhas de uma tecelã, "
            "sua aura desfia o encantamento parte por parte, separando a magia "
            "da matriz que define o corpo de Janus. Você rompe um último fio, de"
            "ixando a magia se desfazer no ar, foi um processo cuidadoso, você "
            "teme que tenha demorado de mais, mas na verdade apenas segundos se"
            " passaram.\n\n"
            "As runas desaparecem dos braços de "
            "Janus e ele logo toma mira novamente. "
            "Ele atira, Yoonir é atingido no braço, deixa o olho cair, mas continua"
            " seguindo em direção a floresta.");

    clem[9]=1;
    clem[10]=1;
   
}

void j_cura() {
    
    extern int gen;
    extern int clem[40];
       
    printf("Você se concentra em tentar desfazer o que Yoonir fez. Você rapidam"
            "ente analisa o padrão de Janus, a matriz mágica que define seu corpo,"
            " você encontra uma mancha no padrão. As partes responsáveis pela sua"
            " coordenação, seus nervos, diretamente danificados. Cuidadosamente "
            "impondo sua magia sobre a de Yoonir, você empunha sua aura como um"
            " bisturi, cortando as conexões entre a matriz de Janus e a magia nociva."
            " Precis");
    
    if(gen){
        printf("a");
    }
    else{
        printf("o");
    }
    
    printf(" e ágil você termina em segundos, as runas desaparecem dos braços de "
            "Janus e ele logo toma mira novamente.\n\n"
            "Ele atira, Yoonir é atingido no braço, deixa o olho cair, mas continua"
            " seguindo em direção a floresta.");
    
    clem[9]=1;
    clem[10]=1;
}

void j_escape() {

    extern int clem[40];
    
    printf("Você continua ao lado de Janus, mas não faz nada enquanto o outro mago"
            " escapa com o artefato. O encantamento sobre os braços de Janus logo se"
            " desfaz, mas Yoonir já desapareceu entre as árvores.\n\n"
            "''Droga! Ok, eu entendo você não querendo atirar nele nem nada assim,"
            " mas eu falei sério quando disse que não ia matar ele.''");
    
    clem[9]=0;
    clem[10]=0;

}

void j_shot() {
    
    extern int clem[40];
    
    printf("Você pega a arma das mãos dele, hesitante, sua memória ainda está"
            " confusa, mas mesmo assim você tem quase certeza de que nunca segu"
            "rou uma arma de verdade antes, ela é pesada de mais, não se acomoda"
            " direito nas suas mãos, não é algo que você parece fazer naturalmente."
            " Você tenta grosseiramente mirar, sem habilidade, mas não tem tempo, "
            "você puxa o gatilho e espera pelo melhor.\n\n"
            "Você fecha os olhos, o recuo da arma e a explosão do tiro são bem "
            "maiores do que você esperava.\n\n");
    
    if(roll(65,0)){
        printf("Mas você acerta, a bala atinge Yoonir no ombro, ele deixa o olho cair, mas continua"
            " seguindo em direção a floresta. A magia começa a se dissipar dos braços de Janus e ele"
                " pega a pistola de volta, guardando-a.\n\n"
                "''Ótimo tiro, eu não achei que você ia conseguir''");
        
        clem[9]=1;
        clem[10]=1;
    }
    else{
        printf("Yoonir continua a correr, ileso, um pequeno fio de fumaça sai do "
                "buraco de bala de uma árvore ao lado. A magia começa a se dissipar dos braços de Janus e ele"
                " pega a pistola de volta, guardando-a.\n\n"
                "''Não se preocupe, essa arma é péssima mesmo''");
        
        clem[10]=0;
        clem[9]=0;
    }
    
}

void j_telecinesia() {
    
    extern int clem[40];
    extern int dmg_dox;
    
    printf("Yoonir foge com o artefato nas mãos, carregando o cristal no punho "
            "direito, você ainda consegue ve-lo daqui. Você precisa pega-lo de alguma"
            " forma antes que ele se afaste de mais. Basta pega-lo certo? Puxar "
            "o cristal até você. É muito simples, sua mente recém-desperta visualiza "
            "perfeitamente as forças envolvendo o cristal e pruxando-o na sua dire"
            "ção, mas sua alma mágica ainda precisa de um certo apoio físico para "
            "superar a realidade.\n\n"
            "Você levanta um dos braços a frente do corpo, e estende a palma da "
            "mão aberta, dobrando seu dedão, indicador e dedo médio você cria um"
            " conjunto de forças ao redor do artefato, um leve brilho dourado"
            " escapa do punho fechado de Yoonir.\n\n");
    
    if(dox(30,0)){
        printf("Você hesita por um segundo, o próximo movimento da magia não é tão"
                " claro, se sua alma estava seguindo instruções, uma sombra "
                "parece obscurecer o manual. As forças continuam a se concentrar, "
                "você não sabe como prosseguir, e o mago continua a se afastar, "
                "mas é tarde de mais para voltar atrás. Você perde o controle, a"
                " energia que você acumulava dispara a esmo, como um elástico "
                "estendido ela volta em sua direção. Algo te atinge como um "
                "soco, como se o próprio ar lhe golpeasse no meio do peito [-1 Saúde].\n\n"
                "O brilho da sua magia se dissipa completamente do cristal que você tentava pegar"
                " e Yoonir escapa com ele.");
        
        clem[9]=0;
        clem[10]=0;
        dmg_dox++;
        
    }
    else{
        printf("Você fecha sua mão em um punho, as forças que você criou se tencionam."
                " O cristal é puxado na sua direção, o mago é quase carregado junto, "
                "mas larga o artefato antes de ser arrastado pela areia. Envolto"
                " em uma esfera etéria o olho segue como uma bala em uma perfeita"
                " linha reta até suas mãos."
                "\n\nYoonir retoma o equilíbrio, mas não "
                "contesta sua posse do cristal, voltando a seguir na mesma direção de antes.");
        
        clem[9]=1;
        clem[10]=0;
    }

}

void j_teleport() {

    extern int clem[40];
    extern int path;
    extern int dmg_dox;
    extern int gen;
    
    printf("Você esquece do mago se afastando de você e se concentra no artefato,"
            " o olho de cristal nas mãos dele. Você estende a palma da mão aberta em frente"
            " ao corpo, com os olhos fixos no cristal você se lembra como descobriu"
            " que a distância é uma ilusão, que sua alma mágica pode dobrar o es"
            "paço entre dois pontos como uma folha de papel.\n\n"
            "Você visualiza o artefato em sua mão e começa a lentamente erodir a"
            " imagem de que ele está distante de você. Uma ");
    
    if(path==0){
        printf("nuvem de prata");
    }
    
    else if(path==1){
        printf("aura distorcida");        
    }
    else if(path==2){
        printf("sombra anormal");        
    }
    else if(path==3){
        printf("aura radiante");        
    }
    else if(path==4){
        printf("névoa densa");        
    }
    
    printf("se forma ao redor da sua mão, e uma idêntica ao redor da mão de Yoonir."
            " Você estende a mão através do espaço");
    
    if(dox(30,0)){
        printf(", pront");
        
        if(gen){
            printf("a");
        }
        else{
            printf("o");
        }
        printf(" para agarrar o cristal. Mas algo dá errado, você perde o controle"
                " por um segundo e vai longe de mais. Você sente uma pressão "
                "sobre sua mão, como um vácuo tentando suga-la, você consegue sentir"
                " ela ameaçando se desligar do seu pulso, e tem tempo apenas de"
                " interromper a magia antes de perder um membro. Mas mesmo assim,"
                " seus ossos doem dos dedos até o cotovelo, como se tivessem tentado puxa-los"
                " para fora do seu corpo.[-1 Saúde]\n\n"
                "Yoonir desaparece entre as árvores com o cristal.");
        
        dmg_dox++;
        clem[9]=0;                
        
    }
    else{
                
    if(path==0){
        printf(",a nuvem de prata se transforma em um pequeno redemoinho brilhante, "
                "ele passeia por um momento sobre a sua palma, então começa a perder"
                " velocidade até se dissipar, o olho surge dentro dele, e cai na sua mão.");
    }
    
    else if(path==1){
        printf(", a aura ao redor da mão de Yoonir continua a se distorcer e criar"
                " uma miragem deformada, então, como um arquivo digital corrompido "
                "o cristal ''trava'' ficando por um segundo suspenso em"
                " pleno ar uma, como uma imagem falha e incompleta. Por um momento"
                " um segundo cristal incompleto surge sobre sua mão, para em seguida se"
                "concretizar na forma perfeita do artefato completo.");      
    }
    else if(path==2){
        printf(", a sombra vai se tornando cada vez mais escura,"
                " formando uma escuridão densa sobre a sua mão, o cristal vai"
                " sendo igualmente consumido pela escuridão. Até que é impossível "
                "vê-lo, no mesmo momento a escuridão concentrada se dissipa da sua"
                " palma, e o artefato esta lá.");        
    }

        else if(path==3){
        printf(", a luz que irradia dos dois lados se torna mais"
                " intensa, os dois pontos começam a brilhar em cores diferentes, "
                "rapidamente alternando entre diversos tons, como se tentassem "
                "se aproximar de uma mesma cor. Sua mão e a de Yoonir brilham "
                "ao mesmo tempo em um profundo tom de azul, você sente um peso "
                "repentino, as luz desaparecem, e você tem o cristal.");        
    }
    else if(path==4){
        printf(", a névoa branca continua a se tornar mais e mais densa, acompa"
                "nhando Yoonir como uma nuvem ao redor de seu punho. Você já n"
                "ão consegue ver mais sua mão, até sentir um estranho peso surgir"
                " derrepente sobre ela, a névoa se dispersa em uma rajada de vento que você "
                "não sente, e deixa o olho em sua mão.");        
    }
    
    printf("\n\nYoonir parece ter percebido que perdeu o artefato, mas mesmo assim"
            " continua a fugir.");
    
    clem[9]=1;
    clem[10]=0;    
    
    }    
        
}

void j_tempo() {
    
    extern int gen;
    extern int clem[40];
    extern int dmg_dox;
    
    int a;
    
    printf("Você ignora por um segundo Janus gritando ao seu lado e o Yoonir es"
            "capando com o artefato, concentrando sua atenção somente no fluir "
            "do tempo ao seu redor. Sentindo o tempo passar delicadamente por entre seus de"
            "dos, você põe as duas mãos ao lado do corpo, os punhos apenas um pouco abertos"
            ". Respirando fundo você conjura sua magia e fecha as mãos, tudo para ao "
            "seu redor, congelado no tempo. Você se agarra as linhas do tempo qu"
            "e conseguiu segurar, e puxa, arrastando o tempo de volta.");
    
    if(dox(30,0)){
        dmg_dox++;        
        printf("\n\nAs linhas escorregam, a palma das suas mãos queimam como se"
                " tentassem segurar uma corrente de ferro quente. Você é obrigad");
        if(gen){
            printf("a");
        }
        else{
            printf("o");
        }
        printf(" a solta-las. O tempo tenta se corrigir fluindo na direção oposta"
                " a que você puxou, as linhas voltam como um elástico tencionado,"
                " chicoteando suas costas antes de retornarem ao estado natural [-1 Saúde]. O "
                "tempo se normaliza com Yoonir desaparecendo entre as árvores."
                "\n\nJanus vira para você, o encantamento em seus braços já se desfa"
                "zendo.\n\n"
                "''Não se preocupe, eu vi que você tentou. Acontece...''");
        
        clem[9]=0;        
        clem[10]=0;
    }
    
    else{
        printf("\n\nTudo se move como um borrão a sua volta, como se estivesse de"
                " pé no olho de um furacão, tudo se move em reverso ao seu redor e você não é"
                " afetado. O furacão vai perdendo força e tudo começa a se mover mais "
                "devagar até congelar mais uma vez, momentos antes de Janus sacar sua"
                " arma, você gentilmente solta as linhas e deixa elas voltarem a fluir.\n\n"
                "Janus para por um segundo, com a mão já sobre a pistola, ele pisca para você, como se"
                " soubesse o que aconteceu, o outro mago aparentemente não. Com a mão direita Janus pega"
                " sua moeda, e saca a arma com a esquerda. Quando Yoonir tenta conjurar a mesma "
                "magia que antes, Janus arremessa a moeda para cima e fala alguma coisa"
                " em um idioma que você não entende, mas parece familiar. A moeda "
                "brilha por um segundo, dissipando o encantamento antes de chegar até"
                " seu alvo, Janus atira, Yoonir leva a mão ao ombro atingido, o olho "
                "cai no chão e rola pela terra até seus pés, a moeda cai sobre a "
                "palma estendida de Janus, cara.");
        
        clem[9]=1;
        clem[10]=1;
    }

    
    
}

void y_aguiam(){
    
    extern int clem[40];
    
    printf("A águia que Yoonir controlou, ainda está por aqui, perto. "
            "Você consegue sentir sua consciência, como um zumbido baixo que você"
            " ouve vindo de algum lugar próximo. Ali, em um galho alto, mas ainda"
            " perto o bastante.");
    
    printf("\n\nVocê estende sua mente naquela direção, e rapidamente engloba a "
            "da águia, encontrando pouca resistência no cérebro simples do pássaro. "
            "Você então ordena, ''Ataque Janus, distraia ele''"
            " A ave não reage, Janus está prestes a puxar o gatilho. O nome do "
            "mago não significa nada para águia, você"
            " rapidamente molda uma imagem da arma e do mago que a segura, "
            "associando com instintos básicos de atacar e afastar que você consegue"
            " expressar mentalmente.\n\n"
            "O pássaro levanta voo e investe sobre ele. Ele atira, mas erra, Y"
            "oonir foge por entre as árvores e chama você para segui-lo. Você"
            " vai atrás., enquanto Janus continua desesperadamente tentando se"
            " desvencilhar do pássaro.");
    
    clem[9]=1;    
    clem[10]=0;
    
}

void y_aguiav(){
    
    extern int clem[40];
       
    printf("A águia que Yoonir controlou, ainda está por aqui, perto. "
            "Você consegue sentir sua energia vital, como um pulsar baixo que você"
            " sente vindo de algum lugar próximo. Ali, em um galho alto, mas ainda"
            " perto o bastante.");
    
    printf("\n\nVocê tenta dominar a criatura, acessando seus instintos e suas "
            "funções corporais você consegue criar um tipo rudmentar de controle sobre ela. "
            "Você então ordena, ''Ataque Janus, distraia ele''"
            " A ave não reage, Janus está prestes a puxar o gatilho. O nome do "
            "mago não significa nada para águia, você"
            " rapidamente dispara alguns instintos de caça na águia,"
            " fazendo ela ter a impressão que teve seu território invadido, "
            "que Janus é um predador perigoso porém fraco.\n\n"
            "O pássaro levanta voo e investe sobre ele. Ele atira, mas erra, Y"
            "oonir foge por entre as árvores e chama você para segui-lo. Você"
            " vai atrás., enquanto Janus continua desesperadamente tentando se"
            " desvencilhar do pássaro.");
    
    clem[9]=1;
    clem[10]=0;
    
}

void y_arma(){
    
    extern int clem[40];
    extern int dmg;
    
    printf("Você parte para cima de Janus, rapidamente agarrando a pistola e apon"
            "tando-a para cima, o dedo dele ainda sobre o gatilho, mas Yoonir está fora"
            " de perigo. Você entretanto, luta para tentar tirar a arma das mãos dele");
    
    if(roll(70,0)){
        printf(", ele tenta alcançar algo no bolso da calça, provavelmente sua moeda"
                ", você aproveita a distração para empurra-lo, ele se desequilibra, você"
                " dá um puxão decidido na arma, e consegue arranca-la das mãos do mago.");
        
        clem[11]=1;
    }
    
    else{
        printf(", ele"
                " se recusa a soltar, em uma tentativa de golpea-lo você solta"
                " uma das mãos da arma, Janus tenta puxar a pistola na direção dele e"
                " puxa o gatilho.\n\n"
                "A arma dispara, você sente uma dor quente e ardente na lateral do "
                "abdomem [-1 Saúde]. Ambos largam a arma, que cai no chão sem mais balas.\n\n"
                "''Merda! Viu o que você fez?''\n\nVocê põe a mão sobre o ferimento, "
                "existe algum sangue, mas parece ter sido bastante superficial, o "
                "choque foi maior que a lesão em si."
                "\n\n''Só vai atrás dele logo então, não se preocupe, ele pode te "
                "curar. E manda um abraço para minha irmã''\n\n"
                "Janus recolhe sua arma e segue calmo, porém frustrado, para sua motocicleta. Você"
                " segue para encontrar com Yoonir.");
        
        dmg++;
        
    }
    
    clem[9]=1;
    clem[10]=0;
    
}

void y_bala(){
    
    extern int clem[40];
    extern int gen;
    
    printf("Você vê Janus se preparando para disparar, mas não se move, é arriscado"
            " de mais tentar tirar a arma das mãos dele, existe algo mais inteligente"
            " que você pode tentar. Cobrindo seus sentido com magia você se prepara "
            "para responder a primeira descarga de energia que perceber, calor, "
            "velocidade, energias, você deve ser capaz de responder imediatamente."
            "\n\nEle dispara, você consegue ver a onda de som surgindo ao redor"
            " da arma antes mesmo de ouvir o desparo, sua atenção acompanha a concentração "
            "de calor e energia estrondosa que surge da arma, a bala que seria "
            "diminuta e discreta para olhos normais é gigantesca quando observada"
            " pelas lentes de uma magia de Forças."
            "\n\n");
    
    if(dox(30,0)){
        printf("Você consegue perceber o calor, a energia cinética e o som da bala, mas"
                " também o calor do fogo ao seu redor, ouvir a eletricidade alimentando"
                " os postes ao longo da estrada, sentir a luz da lua e das estrelas "
                "na sua pele. Você se perde em meio a todas as ondas, raios e correntes "
                "ao seu redor, todos os seus sentidos se sentem ofuscados, e você é"
                " obrigad");
        if(gen){
            printf("a");
        }
        else{
            printf("o");
        }
        printf(" a reverter sua magia antes de conseguir parar o tiro. Yoonir é atingido no braço, deixa o olho cair, mas continua"
            " seguindo em direção a flroesta. Você vai atrás, mas Janus não te impede.");
        
        clem[9]=0;
        clem[10]=1;
        
    }
    
    else{
        printf("Você agarra a energia cinética que impulsiona a bala e com um girar do seu pulso, você muda seu trajeto. "
                "Ela resiste a mudança de direção, mas você consegue que no último"
                " segundo ela vire e atinja uma árvore próxima ao invés do braço de "
                "Yoonir, ele some na parte mais fechada da mata e você segue atrás. "
                "Janus não faz nada para te impedir.");
        
        clem[9]=1;
        clem[10]=0;
    }
    
}

void y_destroy(){
    
    extern int clem[40];
    extern int gen;
    
    printf("Você não tenta tirar a arma das mãos de Janus, mas ainda sim tenta se"
            "gura-la. Logo antes dele dar o tiro, você toca nela, com um rápido "
            "toque de um dedo próximo ao cano da arma você consegue acessar o"
            " padrão da arma, a matriz mágica que a define no mundo real. "
            "Com só um toque você desfaz a arma em sua essência, minando "
            "a estrutura do metal.\n\n"
            "Janus puxa o gatilho, nenhum tiro, ele tenta novamente. O gatilho cai, "
            "o pente da arma solta e uma única bala rola pelo chão, a arma desmonta"
            " peça por peça. Você pode tranquilamente seguir atrás de Yoonir "
            "enquanto Janus recolhe as peças de sua pistola.");
    
    clem[10]=0;
    clem[9]=1;
    
}

void y_nope(){
    
    extern int clem[40];
    
    printf("Yoonir vira as costas e se põe a correr em direção as árvores. Janus "
            "se prepara para atirar, mas você prefere não se arriscar com o lunático"
            " mágico armado. E pelo que ele disse Yoonir poderia simplesmente se "
            "curar depois, certo?\n\n"
            "Ele atira, Yoonir é atingido no braço, deixa o olho cair, mas continua"
            " seguindo em direção a flroesta. Você vai atrás, mas Janus não te impede."
            "\n\n''Não se preocupe, a sua segurança é mais importante que o artefato.''"
            " Ele comenta, sincero, com a mão sobre o ombro ferido.");
    
    clem[10]=0;
    clem[9]=0;
    
}

void y_sorte() {
    
    extern int clem[40];
    
    printf("Você cria um pedido, um desejo, que Yoonir não seja atingido pela bala. "
            "Sua alma mágica consegue dar peso a sua vontade, mas você depois de"
            " lança-la entre os fios do destino você só pode torcer pelo melhor."
            "\n\nUma gota de água escorre de uma folha de uma árvore próxima, ela despenca "
            "vários metros de altura, e sua trajetória é desviada alguns poucos centímetros"
            " por uma brisa repentina que passa. Janus acompanha o alvo em movimento "
            "com a mira, e lentamente espreme o gatilho, a gota o atinge no olho, no "
            "mesmo momento em que Yoonir por acaso abaixa para desviar de um morcego"
            " que passa voando baixo. A arma dispara, e o tiro erra.\n\n"
            "Você rapidamente segue atrás do mago, Janus não faz nada para lhe impedir.");
    
    clem[9]=1;
    clem[10]=0;


}

void y_teleport(){
    
    extern int clem[40];
    extern int path;
    extern int dmg_dox;
    extern int gen;
    
    printf("Você se concentra em tirar a arma das mãos de Janus. Você estende a palma da mão aberta em frente"
            " ao corpo, com os olhos fixos na pistola você se lembra como descobriu"
            " que a distância é uma ilusão, que sua alma mágica pode dobrar o es"
            "paço entre dois pontos como uma folha de papel.\n\n"
            "Você visualiza o artefato em sua mão e começa a lentamente erodir a"
            " imagem  de que ele está distante de você. Uma ");
    
    if(path==0){
        printf("nuvem de prata");
    }
    
    else if(path==1){
        printf("aura distorcida");        
    }
    else if(path==2){
        printf("sombra anormal");        
    }
    else if(path==3){
        printf("aura radiante");        
    }
    else if(path==4){
        printf("névoa densa");        
    }
    
    printf("se forma ao redor da sua mão, e uma idêntica ao redor da mão de Janus."
            " O mago parece ignorar sua magia, se concentrando em tentar mirar no alvo móvel."
            " Você estende a mão através do espaço");
    
    if(dox(30,0)){
        printf(", pront");
        
        if(gen){
            printf("a");
        }
        else{
            printf("o");
        }
        printf(" para agarrar a arma. Mas algo dá errado, você perde o controle"
                " por um segundo e vai longe de mais. Você sente uma pressão "
                "sobre sua mão, como um vácuo tentando suga-la, você consegue sentir"
                " ela ameaçando se desligar do seu pulso, e tem tempo apenas de"
                " interromper a magia antes de perder um membro. Mas mesmo assim,"
                " seus ossos doem dos dedos até o cotovelo, como se tivessem tentado puxa-los"
                " para fora do seu corpo.[-1 Saúde]\n\n"
                "Ele atira, Yoonir é atingido no braço, deixa o olho cair, mas continua"
            " seguindo em direção a flroesta. Você vai atrás, mas Janus não te impede.");
        
        dmg_dox++;
        clem[9]=0;
        clem[10]=1;
        
    }
    else{
                
    if(path==0){
        printf(",a nuvem de prata se transforma em um pequeno redemoinho brilhante, "
                "ele passeia por um momento sobre a sua palma, então começa a perder"
                " velocidade até se dissipar, pistola surge dentro dele, e cai na sua mão.");
    }
    
    else if(path==1){
        printf(", a aura ao redor da mão de Janus continua a se distorcer e criar"
                " uma miragem deformada, então, como um arquivo digital corrompido "
                "a arma ''trava'' ficando por um segundo suspenso em"
                " pleno ar uma, como uma imagem falha e incompleta. Por um momento"
                " uma segunda pistola incompleta surge sobre sua mão, para em seguida se"
                "concretizar na forma perfeita da arma por inteiro.");      
    }
    else if(path==2){
        printf(", a sombra vai se tornando cada vez mais escura,"
                " formando uma escuridão densa sobre a sua mão, a arma vai"
                " sendo igualmente consumida pela escuridão. Até que é impossível "
                "vê-la, no mesmo momento a escuridão concentrada se dissipa da sua"
                " palma, e você está segurando a pistola.");        
    }
    else if(path==3){
        printf(", a luz que irradia dos dois lados se torna mais"
                " intensa, os dois pontos começam a brilhar em cores diferentes, "
                "rapidamente alternando entre diversos tons, como se tentassem "
                "se aproximar de uma mesma cor. Sua mão e a de Janus brilham "
                "ao mesmo tempo em um profundo tom de azul, você sente um peso "
                "repentino, as luz desaparecem, e você está segurando a arma.");        
    }
    else if(path==4){
        printf(", a névoa branca continua a se tornar mais e mais densa. Você já n"
                "ão consegue ver mais sua mão, até sentir um estranho peso surgir"
                " derrepente sobre ela, a névoa se dispersa em uma rajada de vento que você "
                "não sente, e quando você vê, está segurando a arma.");        
    }
    
    printf("\n\nSua magia se conclui no momento em que Janus puxava o gatilho, "
            "com as mãos vazias em posição de mira, seu indicador pressiona o ar.");

    
    clem[9]=1;
    clem[11]=1;    
    }            
}

void y_tempo() {
    
    extern int gen;
    extern int clem[40];
    extern int dmg_dox;
    
    int a;
    
    printf("Você ignora por um segundo Yoonir fugindo e Janus ameaçando "
            "disparar contra ele, concentrando sua atenção somente no fluir "
            "do tempo ao seu redor. Sentindo o tempo passar delicadamente por entre seus de"
            "dos, você põe as duas mãos ao lado do corpo, os punhos apenas um pouco abertos"
            ". Respirando fundo você conjura sua magia e fecha as mãos, tudo para ao "
            "seu redor, congelado no tempo. Você se agarra as linhas do tempo qu"
            "e conseguiu segurar, e puxa, arrastando o tempo de volta.");
    
    if(dox(30,0)){
        dmg_dox++;        
        printf("\n\nAs linhas escorregam, a palma das suas mãos queimam como se"
                " tentassem segurar uma corrente de ferro quente. Você é obrigad");
        if(gen){
            printf("a");
        }
        else{
            printf("o");
        }
        printf(" a solta-las. O tempo tenta se corrigir fluindo na direção oposta"
                " a que você puxou, as linhas voltam como um elástico tencionado,"
                " chicoteando suas costas antes de retornarem ao estado natural [-1 Saúde]. O "
                "tempo se normaliza no momento em que Janus está puxando o gatilho. "
                "Ele atinge Yoonir no braço, o cristal cai da sua mão, mas ele"
                " não retorna para pega-lo, apenas grita para que você vá com ele logo.");
        
        clem[9]=0;        
        clem[10]=1;
    }
    
    else{
        printf("\n\nTudo se move como um borrão a sua volta, como se estivesse de"
                " pé no olho de um furacão, tudo se move em reverso ao seu redor e você não é"
                " afetado. O furacão vai perdendo força e tudo começa a se mover mais "
                "devagar até congelar mais uma vez, momentos antes de Janus sacar sua"
                " arma, você gentilmente solta as linhas e deixa elas voltarem a fluir.\n\n"
                "Janus para por um segundo, com a mão já sobre a pistola, ele olha ao redor "
                "confuso, leva um segundo para ele perceber o que aconteceu, Yoonir parece com"
                "pletamente ignorante ao fato.\n\n"
                "Grita para que ele fuja, e salta sobre Janus, agarrando a arma de sua cintura antes"
                " mesmo que ele consiga saca-la.");
        
        clem[9]=1;
        clem[10]=0;
        clem[11]=1;
    }
}
