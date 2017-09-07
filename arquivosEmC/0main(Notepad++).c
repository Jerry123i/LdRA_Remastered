/** File:main.c * Author: Usuario * * Created on 8 de Agosto de 2015, 17:07 */#include <stdio.h>#include <stdlib.h>#include <unistd.h>#include <string.h>//Funções de despertarint * obrimos (int * moros (int * mastigos (int * acanthus (int * thyrsus (//Funções do Finalevoid j_aguiam(void j_aguiav(void j_counter(void j_cura(void j_escape(void j_shot(void j_telecinesia(void j_teleport(void j_tempo(void y_sorte(void y_arma(void y_destroy(void y_bala(void y_aguiam(void y_aguiav(void y_teleport(void y_tempo(void y_nope(//Funções do troncovoid tronco_mudei(void tronco_queimei(void tronco_amassei(void tronco_matei(int//Funções do tutorialvoid tutorial_mana(intvoid tutorial_dox(void tutorial_roll(//Funções de randomint roll (int, int //(chance base, outros)int dox(int, int //(chance base, outros)int calc_roll (int, int //(chance base, outros)int calc_dox(int, int //(chance base, outros)//Função clearvoid clear( //(mana, life)intmana_check(int, int //(custo, path)//Outras funçõesintcat(intvoid car(void heal(void help(void eye_grab(void go_janus(void go_yoonir(//Globaischar str[50];char sdw[50];int mana;int dmg;int dmg_dox;int tool;int sleepers;int cum_dox;int gen;int tut_dox;int tut_mana;int path;int arc[10];int clem[40];int main(int argc, char** argv) {//Nomes char name[24][10];strcpy(name[0], Vinícius strcpy(name[1], Vinicius strcpy(name[2], Farinha strcpy(name[3], Tupucã strcpy(name[4], Tupuca strcpy(name[5], Pierre strcpy(name[6], Ares strcpy(name[7], Jacob strcpy(name[8], Corvo strcpy(name[9], Pandora strcpy(name[10], Elizabeth strcpy(name[11], Mano strcpy(name[12], vinícius strcpy(name[13], vinicius strcpy(name[14], farinha strcpy(name[15], tupucã strcpy(name[16], tupuca strcpy(name[17], pierre strcpy(name[18], ares strcpy(name[19], jacob strcpy(name[20], corvo strcpy(name[21], pandora strcpy(name[22], elizabeth strcpy(name[23], mano //Variáves int a; int b; int ok; int x1=0; int* p; int bonus=0;//tutorialsint tut_mana=0; int tut_dox=0;mana = 3; dmg = 0; dmg_dox = 0; tool=0; sleepers=0; cum_dox=0;gen=0; for(a=0;a<10;a++){ arc[a]=0; }for(a=0;a<40;a++){ clem[a]=0; }//0. Death //1. Fate //2. Forces //3. Life //4. Matter //5. Mind //6. Prime //7. Space //8. Spirit //9. Timeint tird_a;//Paths //0. Acanthus //1. Mastigos, //2. Moros, //3. Obrimos, //4. Thyrsus,extern char str[50]; /********************************GAME**************************************/
__ _
 | || || |
 | |_____ ___ ___| | _____| | ___ 
 | | / _ \\/ _` |/ _` |/ _` |/ _ \\/ _` |/ _ \\
 | |___|__/ (_| | (_| | (_| | (_) | | (_| | (_) |
 |______\\___|\\__, |\\__,_|\\__,_|\\___/\\__,_|\\___/ 
__/ | 
 |___/____ _
|__ \\ (_)| | 
| |__) |___ _ __| | ___
|_// _ \\ |/ _` |/ _ \\
| | \\ \\__/ | | (_| |__/
|_|\\_\\___|_|\\__,_|\\___| __
/\\| | | || | (_) 
 /\\ | |_| | __ _ _ __ | |_ _ ___ 
/ /\\ \\| __| |/ _` | '_ \\| __| / __|
/ ____ \\ |_| | (_| | | | | |_| \\__ \\
 /_/ \\_\\__|_|\\__,_|_| |_|\\__|_|___/



******************************EPISóDIO - 0*******************************

Por Igor \Jerry\ Carneiro - 2015
Baseado em Mago: O Despertar (Copyright - White Wolf Publishing Inc.)sleep(5system(cls
Por favor amplie a janela até enchergar o texto abaixo




























Por favor amplie a janela até enchergar o texto acima
Então pressione 1 e então Enter

1.Continuar

 scanf(%i,&a system(clsdo{
Digite o número relativo a opção que deseja escolher, e pressione Enter

Qual gênero você prefere que seja usado para se referir ao seu personagem?

 
1.Masculino
2.Feminino

scanf(%i,&a system(clsif(a==1){gen=0; }else if(a==2){gen=1; }}while(a!=1&&a!=2
Você está prestes a se tornar um Mago. As decisões que sua alma tomar agora irão definir quais aspectos da realidade você será capaz de controlar.


1.Continuar...

 scanf(%i,&a system(cls
*Morte representa o poder de influenciar fantasmas e mortos-vivos, também de degradar e decompor aquilo a sua volta.

*Destino te dá o poder de ter sorte extraordinária e amaldiçoar outros com azar, de ler e até criar profecias e pragas.

*Matéria representa a habilidade de alterar e compreender substâncias, líquidos, sólidos e gases, molda-los e transforma-los.

*Mente é a capacidade de telepatia, alterar memórias, ler auras e até controlar mentes.

*Forças influência as forças físicas da realidade, calor, fogo, som, luz, a habilidade de manipular ou criar esses elementos.


1.Continuar...

 scanf(%i,&a system(cls
*Primórdio simboliza o poder de controlar magia e mana, a energia usada pelos magos. Manipulando-a para formar ilusões ou nulificando os feitiços de outros.

*Vida representa a influência sobre seres vivos e seus corpos, cura, mudança de forma e influenciar animais, todas habilidades de magos experientes em Vida.

*Espaço representa a manipulação da distância e da posição de seres e objetos, o poder da vidência e para magos poderosos o teletransporte. 


*Espírito controla e influencia espíritos (não fantasmas), seres elementais que representam conceitos, animais ou emoções do nosso mundo.

*Tempo inicialmente lhe permite ver o passado e ter alguns curtos vislumbres do futuro. Mas um mago poderoso pode acelerar o tempo ou voltar alguns segundos para corrigir erros.


1.Continuar...

 scanf(%i,&a system(cls
Cada um desses aspectos pode ser separado em 3 níveis de aptidão, oprimeiro deles permitindo sutis influências na realidade, o terceiro completo controle sobre tal aspecto, sendo capaz de completamente destruir ou criar elementos por pura força de vontade. Quando sua alma retornar vai estar controlando 3 desses aspectos, dois deles devem ser escolhidos juntos, e um deles você irá controlar de forma um pouco mais completa.

A primeira decisão é a mais importante, siga seus instintos ao escolher, deixe sua alma dizer qual caminho seguir até a ascensão.sleep(4


E boa sorte...sleep(2


1.Continuar...

 scanf(%i,&a system(clsdo{system(cls
Você abre os olhos e se encontra em uma encruzilhada, ao seu redor estão 5 estradas.

A primeira tem um caminho de ouro e leva até um cemitério. A segunda tem um caminho de terra e leva até uma floresta. A terceira é calçada com mármore e leva até um castelo. A quarta é feita de ferro e leva até uma mansão. A quinta é uma estrada de prata, que termina em um jardim.

Qual caminho sua alma segue?
 

1. A estrada de ouro, que promete morte e riqueza[Morte/Materia]
2. A estrada de terra, que promete sabedoria e vigor[Vida/Espirito]
3. A estrada de mármore, que promete força e glória[Forças/Primordio]
4. A estrada de ferro, que promete controle e soberania[Espaco/Mente]
5. A estrada de prata, que promete descoberta e liberdade[Tempo/Destino]

scanf (%i, &aif (a==1){ //Morosok=1;path=2;DEATH++;MATTER++; p = moros(gets(strgets(str 


Sua tumba está agora completa,if(*(p)==0){
a tinta escura escorre do último traço da assinatura, marcando a última letra do seu nome com uma grande gota cinza.}if(*(p)==4){
a caligrafia dourada brilha uma vez, refletindo luz que não parece vir de lugar nenhum.}


Você dá um passo para trás, para observar seu trabalho. Então a forma esquelética para, ela larga um carro de luxo e um punhado de almas gemendo no ar, parados em suspensão. Ela olha para você, um par de mãos feitas de ossos negros te agarra, com o cuidado de uma mãe segurando um filhote, a morte te leva ao peito.

Você afunda entre suas costelas em direção a escuridão.}else if (a==2){ok=1;path=4;LIFE++;SPIRIT++; p = thyrsus( gets(strgets(str if(*(p)==3){


Assim que termina de escrever o lobo abre a boca e solta um longo uivo seguido de algo que soa como um latido. Ele parece de certa forma orgulhoso.}//Vidaif(*(p)==8){


Quando você escreve a última letra, um raio da lua cheia parece brilhar diretamente sobre seu nome. Uma lágrima se forma ao seu lado e escorre pelo tronco, caindo em uma das poças de sangue entre as raízes.}//Espírito 


Seu nome agora pertence entre os outros que atravessaram a floresta e escalaram a árvore.
Ele então inclina lentamente o focinho para baixo, você tenta agarrar em algum galho, mas ele move todos para longe do seu alcance. Você desliza e caiif(*(p)==8){
, como a lágrima,}
 em direção ao chão. No caminho você passa pela nascente rubra no peito do lobo, e pode por um segundo ver seu coração em carne, pulsando dentro da madeira. Seu corpo cai na poça de sangue, afundando lentamente no líquido espesso. Você consegue ouvirif(*(p)==3){
 mais}
 um longo e emocionado uivo antes de apagar.}else if (a==3){ok=1;path=3;FORCES++;PRIME++;p = obrimos( gets(strgets(str if(*(p)==2){if(gen){ 

Lady %s Algoz das Bestas e Cavaleira em nome da coroa., str}else{

Lorde %s Algoz das Bestas e Cavaleiro em nome da coroa., str}} if(*(p)==6){if(gen){ 

Lady %s Defensora do Reino e Campeã da coroa., str}else{

Lorde %s Defensor do Reino e Campeão da coroa., str}} 


Sua visão é bloqueada por um clarão. Quando seus olhos retoma m foco você vê o resto da sua vida passando rapidamente a suafrente, festas e celebrações sem fim sobre seu heroísmo, músic as e poemas sendo escritos em seu nome. Seus últimos anos vivi dos em paz e conforto, até seu último suspiro e seu funeral co m todas as honras de if(gen){
 uma heroína.}else{
 um herói.} }else if (a==4){ok=1;path=1;MIND++;SPACE++;p = mastigos( 
Xgets(strgets(strsystem(cls
Assim que você termina de assinar ele arranca o contrato das suas mãos.Rapidamente dobra o documento e o coloca dentro de um envelope, elearrasta uma unha afiada sobre a palma da mão e começa a sangrar umlíquido espesso e escuro. Uma gota grande cai sobre a aba do envelopee ele pressiona um carimbo de madeira sobre ela, o sangue rapidamenteseca como cera, criando um selo. Ele toca o envelope ele desaparece.

 "Pronto, temos tudo acertado. Boa sorte" 

Ele se levanta e estende a mão através da mesa, você , um pouco hesitante, responde. Ele dá um aperto de mão firme e confiantee com a outra mão estala os dedos. 

O escritório desaparece, todo o prédio e a mansão desaparecem,você éif(gen){
deixada suspensa}else{
deixado suspenso}
 no ar, e imediatamente começa a cair. Desesperadif(gen){
a}else{
o}
 você deseja estar em outro lugar, estala os dedos desejando estar emoutro lugar. Você para de cair, tudo fica escuro.}else if (a==5){ok=1;path=0;TIME++;FATE++;p = acanthus( }else{ system(cls
Existem apenas cinco caminhos, sua alma pode escolher um destino, mas não escapar dele.ok=0; 

1.Continuar
scanf(%i}}while (ok!=1 //Alocação dos arcanasarc[*(p)]++; arc[*(p+1)]++; tird_a=*(p+2/* 

Escolha os arcana mais forte e o extra, respectivamente scanf(%i,&a arc[a]++; scanf(%i,&a arc[a]++;*//* *******************************Final************************************ */ dmg++; 


1.Continuar...

scanf(%i,&aclear(
Você desperta, porém não abre os olhos ainda, você não se lembra de nada que aconteceu. Lembra apenas do sonho incrívelmente real que acabou de ter. Seu corpo e sua cabeça doem//Life health check if(LIFE>0){
, você fraturou uma costela e a tíbia esquerda, e teve cortes e contusões leves no torso e nos braços }//Hora if(TIME>0){
, é de noite, exatamente 1:53am, embora você não faça ideia de como tem certeza disso sem nem conseguir enxergar nada }
.if(DEATH>0||FORCES>0||LIFE>0||MATTER>1){ 
 Alguma coisa pesada lhe esmaga as pernas, impedindo que você se mova. }do{


1.Abrir os olhos

scanf(%i,&aclear( }while(a!=1//Tutorial manaif((MIND&&path!=1)||(SPACE&&path!=1)||(SPIRIT&&path!=4)){tutorial_mana(pathtut_mana=1;}
Você lentamente abre os olhos, tudo está um pouco embaçado ainda,if(TIME==0){
é noite e }
o ar parece estar coberto por uma fumaça escura.if(MIND==0&&SPACE==0&&SPIRIT==0){//Nada na visão} //Vê algo else{do{
Além da escuridão da noite e da fumaça você tem a impressão de ter sua visão encoberta por algo mais, como um véu ou filtro que te limita os sentidos.


1.Realmente abrir os olhos if(MIND){
[Mente]}if(SPACE){
[Espaço]}if(SPIRIT){
[Espírito]} if((MIND&&path!=1)||(SPACE&&path!=1)||(SPIRIT&&path!=4)){//Check for mana cost 
(-1 Mana)} 


scanf(%i,&aclear( }while(a!=1 
Você imagina esse véu sendo erguido dos seus olhos, dos seus ouvidos, suas mãos e da sua alma. //Mana costif((MIND&&path!=1)||(SPACE&&path!=1)||(SPIRIT&&path!=4)){mana--;} //Espaço (Visão 360))if(SPACE>0){
Sua visão se distorce por um segundo se esticando como um elástico tensionado ao redor da sua cabeça, sua visão periférica se expandindoaos poucos até chegar a sua nuca, e com um flash de luz tudo entra em foco.
Você enxerga tudo ao seu redor,como se seus olhos tirassem uma perfeita foto panorâmica de 360 graus.if(MIND>0){ 
Quando você se adapta a sua nova visão você sente potencial para mais.Você expande sua percepção além do que jamais poderia ter imaginado antes. Além de ver e ouvir você realmente sente, alguém, alguma coisa,ali com você. Uma consciência, porém não completamente humana. Parece estar atrás de você.}if(SPIRIT>0){ 

Algo mais impede sua visão, você tem o potencial para ver algo invisível, algo como o que você viu no seu sonho. Você remove esse véu da mesma forma que o anterior. Agora de olhos realmente abertos você if(MIND>0){
 vê o dono da consciência que chamou sua atenção. } else{
 vê algo que simplesmente não estava ali um segundo antes. }


1.Continuar...

scanf(%i,&aclear(
Qualquer outro o chamaria de um monstro, mas algo dentro de você sabe que se trata de um espírito. Idêntico a um gato doméstico comum, porém com duas caudas, duas bocas e quatro olhos, de pelo todo branco execeto por uma das caudas e uma das patas, pretos. Os dois pares de olhos estão fixos em você, sem iris ou pupila, quatro orbes negros te observam com atenção. O gato não parece notar que foi descoberto, só agora você percebeque ele está atras de você e não parece ter se dado conta de como você expandiu seu dom da visão
De qualquer forma, você não pode ir a lugar nenhum antes de levantar. clem[1]=1;//Viu o gato}if (MIND>0&&SPIRIT==0){ 
Mas mesmo sendo capaz de enxergar em todas as direção ao mesmo tempo, você não encontra nada ali.}} //Mente, sem espaçoelse if(MIND>0){
Você expande sua percepção além do que jamais poderia ter imaginado antes. Além de ver e ouvir você realmente sente, alguém, alguma coisa,ali com você. Uma consciência, porém não completamente humana.if(!SPIRIT){ 
 Mas você não vê mais nada ali com você.}} //Espírito else{
Você sabe que existe potencial para algo mais nos seus sentidos, algo que foi invisível a sua vida toda mas não mais, algo que você tem a impressãode estar por aquiif(DEATH>0||FORCES>0||LIFE>0||MATTER>1){ 
, mas que não pode ver da posiçao que está}
.}}


1.Continuar...

scanf(%i,&aclear(if((!tut_mana)&&((LIFE&&path!=4)||(FORCES&&path!=3)||(DEATH&&path!=2))){tutorial_mana(pathtut_mana=1; }if(LIFE||MATTER>1){tutorial_dox(tut_dox=1;} 
Você consegue observar seus arredores com mais calma, aparente mente você estave em um acidente de carro, o automóvel batido e e m chamas a alguns metros deixa pouca dúvida. Na verdade, você pro vavelmente teve muita sorte de sair viv if(gen){
a.}else{
o.} ///Visão do artefato //Prime + fate if(PRIME&&FATE){


[Primórdio]
Vindo do carro, além das chamas, outra coisa chama sua atenção. Uma luz, uma aura iradiando de algo no banco de trás. Você sente uma estranha conexão com essa energia, ela te atrai sutilmente naquela direção, como um elástico levemente tensionado entre você e a fonte dessa aura.} //Fate else if (FATE){


[Destino]
Vindo do carro, além das chamas, outra coisa chama sua atenção,você sente uma estranha conexão, algo te atrai sutilmente naquela direção, como um elástico levemente tensionado entre você e o banco do carro.} //Prime else if(PRIME){ 


[Primórdio]
Vindo do carro, além das chamas, outra coisa chama sua atenção. Uma luz, uma auraif(path==2){ 
 estranhamente familiar} 
 iradiando de algo no banco de trás.}//Visão do acidende if Tempoif(TIME>0){


[Tempo]
Você tenta se lembrar do que ocorreu, sua memória está completamente perdida, mas você consegue abrir os olhos e encarar diretamente o passado. Você se vê dirigindo, a estrada vazia eescura, é difícil se concentrar na visão e elaparece turva em vários pedaços, como uma janela embaçada. Algo te distrai na estrada, parece haver algum tipo de falha mecânica, você bate o veículo e a visão desaparece.}//Cena do tronco do{if(DEATH>0||FORCES>0||LIFE>0||MATTER>1){


O peso que você sentia sobre as pernas é na verdade um tronco de á rvore que tombou sobre você.if(LIFE>0){
 De alguma forma você sabe que a madeira ainda está viva, morrendo, porém viva. Existe potencial nessa energia vital, você acha que pode se livrar da árvore dessa foma. } if(FORCES>0){
 A alguns metros de distância você repara nas chamas ao redor do carro, se você conseguisse trazer elas até aqui dealguma forma, talvez pudesse queimar o tronco, sem se queimar com alguma sorte.} if(DEATH>0){
 Talvez você consiga simplesmente quebrar a madeira, se houvesseuma forma de deixa-la mais frágil.} if(MATTER>1){
Talvez, parece difícil, mas você acredita ser capaz de moldara madeira, achar uma forma de torna-la mais leve.}//***\\ 


1.if(LIFE>0){
Transformar o tronco[Vida] if(path!=4){
(-1 Mana)} 
 (P)%i%%,(100-calc_dox(30,0)) }else if(FORCES>0){
Usar o fogo[Forças]if(path!=3){
(-1 Mana)} }else if(DEATH>0){
Destruir o tronco[Morte]if(path!=2){
(-1 Mana)} }else if(MATTER>1){
Moldar o tronco[Matéria+]
 (P)%i%%,(100-calc_dox(30,0))}//***\\if(((LIFE>0)+(FORCES>0)+(DEATH>0)+(MATTER>1))>1){ 

2.if((FORCES>0)&&(LIFE>0)){ 
Usar o fogo[Forças] if(path!=3){
(-1 Mana)}}else if ((DEATH>0)&&((LIFE>0)||(FORCES>0))){
Destruir o tronco[Morte]if(path!=2){
(-1 Mana)} }else if ((MATTER>1)&&((DEATH>0)||(LIFE>0)||(FORCES>0))){
Moldar o tronco[Matéria+]
 (P)%i%%,(100-calc_dox(30,0))} } //***\\if(((LIFE>0)+(FORCES>0)+(DEATH>0)+(MATTER>1))>2){ 

3.if(MATTER>1){
Moldar o tronco[Matéria]
 (P)%i%%,(100-calc_dox(30,0))} }


scanf(%i,&a//Scan//Para a==1if(a==1){if(LIFE>0){ //Mudeiclear(tronco_mudei(if(path!=4){mana--;}ok=1; }else if(FORCES>0){ //Queimeiclear(tronco_queimei(if(path!=3){mana--;}ok=1; }else if(DEATH>0){ //Mateiclear(tronco_matei(LIFEif(path!=2){mana--;}ok=1; }else if(MATTER>1){ //Amasseiclear(tronco_amassei(ok=1; }else{ok=0; clear( } }//***\\ //Para a==2else if(a==2){if(((LIFE>0)+(FORCES>0)+(DEATH>0)+(MATTER>1))>1){if((FORCES>0)&&(LIFE>0)){ //Queimei clear(tronco_queimei(if(path!=3){mana--;}ok=1; }else if ((DEATH>0)&&((LIFE>0)||(FORCES>0))){ //Matei clear(tronco_matei(LIFEif(path!=1){mana--;}ok=1; }else if ((MATTER>1)&&((DEATH>0)||(LIFE>0)||(FORCES>0))){ //Amasseiclear(tronco_amassei(ok=1; }else{ok=0;clear( } } }//***\\ else if(a==3){if(((LIFE>0)+(FORCES>0)+(DEATH>0)+(MATTER>1))>2){ //Amasseiif(MATTER>1){ clear(tronco_amassei(ok=1; } }else{ok=0; clear( }}//***\\ else{ok=0;clear( } }}while(!ok//Fim cena do tronco//


1.Levantar... 


 scanf(%i,&a clear(tutorial_roll(if((tut_mana==0)&&(LIFE>0)){tutorial_mana(pathtut_mana=1; } //Caso o jogador tenha espírito mas não tenha espaço ele vê o gato atrás dele, com obs caso ele tenha mentedo{clear( if((SPIRIT)&&!(SPACE)){if(MIND){
Você procura pela consciência que sentiu anteriormente. 

}
[Espírito]
Quando olha para trás você vê, uma pequena criatura que te obser vava. Qualquer outro o chamaria de um monstro, mas algo dentrode você sabe que se trata de um espírito. Idêntico a um gatodoméstico comum, porém com duas caudas, duas bocas e quatro ol hos, de pelo todo branco execeto por uma das caudas e uma daspatas, pretos. Os dois pares de olhos estão fixos em você, semiris ou pupila, quatro orbes negros te observam com atenção.

 Ele inclina a cabeça para a direita, curioso, como se não ente ndesse por que você olha na direção dele. Só então o espírito percebe que você consegue vê-lo, e dispara correndo na direçãodas árvores.

 clem[1]=1;}//Caso o jogador tenha espaço e espírito ele já avistou o gato e tem um bônus caso vá persegui-loif(SPIRIT&&SPACE){ if(x1){
O espírito que você viu antes já desapareceu entre as árvores.} else {
O espírito que você tinha visto antes ainda está atrás de você,ele te observa com atenção, e parece não ter percebido que você sabeque ele está ali.

} } //Caso o jogador tenha prime ele percebe o artefato if((PRIME||FATE)){
Dentro do carro acidentado, no que parece ser o banco de trás,if(PRIME){ 
a curiosa aura ainda chama sua atenção, é bastante intensaif(path==2){ 
 e de certa forma lhe faz lembrar do seu sonho}} else if(FATE){
alguma força ainda te compele naquela direção} 
, mas pode ser perigoso se aproximar do carro em chamas. }//Dar uma chance do jogador se curarif((SPIRIT&&x1==0)||(PRIME||FATE)){
Porém, talvez não seja uma boa ideia ir a lugar nenhum, feridif(gen){
a}else{
o}
 da forma que você está.} else{
Você levanta com alguma dificuldade, bastante ferid if(gen){
a}else{
o} 
 devido ao acidente. }if(LIFE){
 Mas depois desse sonho, você acredita que pode fazer algo quanto a is so.} //Opções


1.if(SPIRIT&&x1==0){if(SPACE){
Ir na direção do espírito}else{if(SPIRIT>1){ bonus=10;}
Perseguir o espírito (C)%i%%,(calc_roll(60,bonus))} }else if((PRIME||FATE)){
Investigar o carro }else if(LIFE){
Cuidar dos seus ferimentos [Vida]if(path==4){
(-1 Mana)}else{
(-2 Mana)} }else{
Procurar ajuda }if((((SPIRIT&&x1==0)>0)+((PRIME||FATE)>0)+(LIFE>0)+1)>1){ 

2.if((PRIME||FATE)&&SPIRIT){
Investigar o carro }else if(LIFE&&((PRIME||FATE)||(SPIRIT&&x1==0))){
Cuidar dos seus ferimentos [Vida]if(path==4){
(-1 Mana)}else{
(-2 Mana)} }else{
Procurar ajuda } }if((((SPIRIT&&x1==0)>0)+((PRIME||FATE)>0)+(LIFE>0)+1)>2){

3.if(LIFE&&((PRIME||FATE)&&(SPIRIT&&x1==0))){
Cuidar dos seus ferimentos [Vida]if(path==4){
(-1 Mana)}else{
(-2 Mana)} }else{
Procurar ajuda } }if((((SPIRIT&&x1==0)>0)+((PRIME||FATE)>0)+(LIFE>0)+1)>3){

4.
Procurar ajuda }


scanf(%i,&a//Scanif(a==1){if(SPIRIT&&x1==0){if(SPACE){x1 = cat(1if(x1==1){ ok=0;}else{ ok=1;}}else{x1 = cat(0ok=1;} }else if((PRIME||FATE)){ if (tut_mana==0&&((DEATH&&path!=2)||(FORCES&&path!=3))){ tutorial_mana(path tut_mana=1; } car(ok=1; }else if(LIFE){heal(ok=mana_check(1,4mana--; }else{help(ok=1; } }else if(((((SPIRIT&&x1==0)>0)+((PRIME||FATE)>0)+(LIFE>0)+1)>1)&&(a==2)){ if((PRIME||FATE)&&(SPIRIT&&x1==0)){ if (tut_mana==0&&((DEATH&&path!=2)||(FORCES&&path!=3))){ tutorial_mana(path tut_mana=1; } car(ok=1; }else if(LIFE&&((PRIME||FATE)||(SPIRIT&&x1==0))){heal(ok=mana_check(1,4mana--; }else{help(ok=1; } } else if(((((SPIRIT&&x1==0)>0)+((PRIME||FATE)>0)+(LIFE>0)+1)>2)&&(a==3)){if(LIFE&&((PRIME||FATE)&&SPIRIT)){heal(ok=mana_check(1,4mana--; }else{help(ok=1; }}else if(((((SPIRIT&&x1==0)>0)+((PRIME||FATE)>0)+(LIFE>0)+1)>3)&&(a==4)){help(ok=1; }else{ok=0; }}while(!(ok)//Caso o jogador não tenha nem espírito nem prime, ou resolva esperar, ir direto para a cena do Janus chegando


1.Continuar

scanf(%i,&aclear( //Jogador chegando na cena//Tutorial para gasto de mana na leitura das auras if((tut_mana==0)&&(((PRIME>0)&&(path!=3))||((MIND>0)&&(path!=1)))){ tutorial_mana(path tut_mana=1;} do{clear(//Janus surgindoif(clem[4]){ 
Voltando da parte mais fechada do trecho de mata ao redor da estrada você encontra alguém no local do acidente. Uma silueta masculina contra as chamas, de pé ao lado do seu carro em chamas, olhando ao redor e dentro do carro como se procurasse por algo. Uma motocicleta parada a certa distância do local explica de onde ele surgiu.}else{ 
No fim da estrada você percebe alguma coisa se aproximando, apenas um farol, uma moto, o único veículo que você vê passar desde que acordou. Ela para no acostamento, alguns metros antes do acidente, o motorista desce, a viseira do capacete cobre todo o seu rosto, mas aparentemente é um homem.}//Se puder ler aurasif(PRIME||MIND){


Antes mesmo de conseguir enxerga-lo direito você tem a impressão de que pode ver algo, ao redor deleif((PRIME&&(path!=3))||(MIND&&(path!=1))){
 mas vai ser necessário um pouco de esforço para realmente discernir o que é. }else if((PRIME&&path==3)||(MIND&&path==1)){
 claro como o dia. }


1.if(PRIME){
Ver a alma dele[Primórdio]if(path!=3){
(-1 Mana)} }else if(MIND){
Ler a aura dele[Mente]if(path!=1){
(-1 Mana)} }if(((PRIME>0)+(MIND>0))>1){

2.
Ler a aura dele[Mente]if(path!=1){
(-1 Mana)} 

3.Ver ambos[Primórdio][Mente](-1 Mana) 

4.Ignorar a aura a redor dele}else {

2.Ignorar a aura a redor dele } //Scans


 scanf(%i,&aclear(if(a==1){if(PRIME){//Primórdio ok=mana_check(1,3 if(ok){
Você vê percebe a alma como uma silhueta de luz ao redor e dentro do corpo, mas você não consegue distinguir nada de útilexceto pelas pequenas faíscas de luz que parecem piscar ao redor dele parece uma alma "normal" até onde você pode dizer. Na verdade algumas faíscas piscam ao redor da sua também,algo te diz que isso tem a ver com seu sonho e ascoisas estranhas que você tem visto e feito desde que levantou.Algo te diz que ele também pode ver e fazer coisas.}}else if(MIND){//Menteok=mana_check(1,1 if(ok){clem[6]=1;//Liga a visão de aura
Você consegue distinguir uma aura turva de luz colorida aoredor deleif(clem[4]==0){ 
 enquanto ele se aproxima}else{ 
 mesmo contra a luz das chamas, ela se sobrepõe}
. A aura é principalmente de um tom forte de violeta, com feixes vermelhos surgindo momentáriamente e se dissipando. Felicidade, euforia, é surpreendentemente óbvio o que as cores significam. Alguém está bastante animado em ver um acidente de carro.} } }else if(((PRIME>0)+(MIND>0))>1){ if(a==2){//Menteok=mana_check(1,1 if(ok){clem[6]=1;//Liga visão de aura
Você consegue distinguir uma aura turva de luz colorida aoredor deleif(clem[4]==0){ 
 enquanto ele se aproxima}else{ 
 mesmo contra a luz das chamas, ela se sobrepõe}
. A aura é principalmente de um tom forte de violeta, com feixes vermelhos surgindo momentáriamente e se dissipando. Felicidade, euforia, é surpreendentemente óbvio o que as cores significam. Alguém está bastante animado em ver um acidente de carro.}}else if(a==3){//Ambosok=mana_check(1,999if(ok){ clem[6]=1;//Liga visão de aura
Você vê percebe a alma dele como uma silhueta de luz, tingida pelas cores da aura ao redor e dentro do corpo, você não consegue distinguir nada de útil da alma em siexceto pelas pequenas faíscas de luz que parecem piscar ao redor dele, ela parece uma alma "normal" até onde você pode dizer. Na verdade algumas faíscas piscam ao redor da sua também,algo te diz que isso tem a ver com seu sonho e ascoisas estranhas que você tem visto e feito desde que levantou.Algo te diz que ele também pode ver e fazer coisas.


A aura é principalmente de um tom forte de violeta, com feixes vermelhos surgindo momentáriamente e se dissipando. Felicidade, euforia, é surpreendentemente óbvio o que as cores significam. Alguém está bastante animado em ver um acidente de carro.}} else if(a==4){
Seja lá o que for não vale a pena se distrair com isso nomomento. Você dispersa a imagem que emana dele e se concentra na pessoa em si.} else{ok=0;} }else { if(a==2){
Seja lá o que for não vale a pena se distrair com isso nomomento. Você dispersa a imagem que emana dele e se concentra em falar com a pessoa em si.} else{ok=0;}}}//Sem prime nem menteelse{ ok=1;} }while(!ok 


1.Continuar...

scanf(%i,&aclear(// Interação com Janus ////Caso o jogador esteja vindo de longeif(clem[4]){ do{clear(
Você não tem certeza do que ele está procurando, mas ele ainda não te viu. Você poderia usar a oportunidade a seu favor. Ou simplesmente se aproximar, ele pode estar procurando por sobreviventes.


1.Ir até lá cumprimenta-lo
2.Tentar se aproximar silenciosamente (C)%i%%, (calc_roll(60,0))if((2+(FORCES>0)+(SPACE>0))>2){ 

3.if(FORCES){
Se aproximar silenciosamente controlando o som[Forças]if(path!=3){
(-1 Mana)} }else if(SPACE){
Estender seus sentidos naquela direção[Espaço]if(path!=1){
(-1 Mana)} } }if((2+(FORCES>0)+(SPACE>0))>3){ 

4. if(SPACE){
Estender seus sentidos naquela direção[Espaço]if(path!=1){
(-1 Mana)} }}


scanf(%i,&aclear(//Scansif(a==1){//Greet ok=1;
Você vai na direção dele, acenando para chamar sua atenção "Ei!". Ele logo vira na sua direção, e você consegue vê-lo melhor. Ele é jovem, tem os cabelos loiros despenteados e olhos claros, usa uma jaqueta escura e uma calça jeans bastante desbotada. Quando te vê ele para o que estava fazendo e acena de volta, te chamando para se aproximar.if(clem[6]){


As cores vibrantes ao redor dele esmaecem e dão espaço a um t om fechado de azul que sugere desconfiança. }}else if(a==2){//Sneak ok=1;if(roll(60,0)){//Sucesso
Você se aproxima com cuidado, usando as sombras da folhagem e ailuminação imprecisa das chamas ao seu favor. Você consegue c hegar perto o bastante para vê-lo melhor. Ele é jovem, te m os cabelos loiros despenteados e olhos claros, usa uma jaquetaescura e uma calça jeans bastante desbotada. Ele está com certezaprocurando alguma coisa ao redor do seu carro. if(FATE||PRIME){
 Você se lembra daif(PRIME){ 
 aura que viu vindo dessa direção.}else if(FATE){ 
 sensação de atração que sentiu.}}else{
 Ele constantemente olha para alguma coisa no banco de trásdo carro.} 


Ele xinga baixo sobre ter queimado os dedos e parece estarprocurando ao redor por algo que o ajude a alcançar o banco. V ocê teria que se aproximar para ver o que ele está procurando,e de qualquer forma se está no seu carro provavelmente te per tence. 

Você sai das sombras e vai na direção do carro. Ele acenaassim que te vê, de forma amigável aparentemente. }else{
Você se aproxima com cuidado, usando as sombras da folhagem e ailuminação imprecisa das chamas ao seu favor. Você consegue c hegar perto o bastante para vê-lo melhor. Ele é jovem, te m os cabelos loiros despenteados e olhos claros, usa uma jaquetaescura e uma calça jeans bastante desbotada.

 Ele parece estar resmungando ou falando sozinho, chegando maisperto você poderia...

CRACK!

Um galho especialmente secoe barulhento quebra quando você dá mais um passo. O homem olha nasua direção, e acena, de forma amigável aparentemente, convid ando você a se aproximar. }if(clem[6]){


As cores vibrantes ao redor dele esmaecem e dão espaço a um t om fechado de azul que sugere desconfiança. }}else if(((2+(FORCES>0)+(SPACE>0))>2)&&a==3){if(FORCES){ok=mana_check(1,3 if(ok){//silent+
Se concentrando nas vibrações do ar, você consegueenxergar a energia em forma de som emanando sutilmente da sua respiração, das folhas sacudidas pelo vento e do rapaz que parece estar falando sozinho enquanto procura por algo ao redor do seu carro. Tocando nos seus pés você imagina um vácuo ao redor de cada um deles, uma bolha suprimindo som, e impedindo que o ar se mova. Em perfeito silênciovocê consegue se aproximar

Ele é jovem, te m os cabelos loiros despenteados e olhos claros, usa uma jaquetaescura e uma calça jeans bastante desbotada. Ele fala sozinho,reclamando sobre como queimou os dedos tentando pegar "adroga do olho".if(FATE||PRIME){
 Você se lembra daif(PRIME){ 
 aura que viu emanando do carro.}else if(FATE){ 
 sensação de atração que sentiu vinda do carro.}}
Independente do que se trate se está no seu carro provavelmente te pertence. Você não vai descobrir mais do que issose escondendo, liberando os seus pés do vácuo que você criou você decide falar com ele.

"Ei!"

Ele vira na sua direção quando te ouve e acena de forma amigável, convidando você a se aproximar.if(clem[6]){


As cores vibrantes ao redor dele esmaecem e dão espaço a um tom fechado de azul que sugere desconfiança.}} }else if(SPACE){ok=mana_check(1,1 if(ok){//Space
Ele ainda não parece ter te visto, por sorte não existe necessidade de se aproximar. Você mentaliza seus sentidos, sua audição e sua visão, desligados dos seus orgãos ou do seu corpo, uma entidade maleável, móvel. Você gentilmente arrmessa sua percepção na direção do carro, observando o homem como se estivesse ao seu lado.

Ele é jovem, tem os cabelos loiros despenteados e olhos claros, usa uma jaquetaescura e uma calça jeans bastante desbotada. Ele constantemente olha para dentro do carro, na direção do banco de trás.if(FATE||PRIME){ 
Você logo se lembra daif(PRIME){
aura } else if(FATE){
sensação de atração } 
 que vinha do carro. }
Ajustando um pouco o ângulo dos seus setidos você conseguever o que parece ser uma pedra preciosa ou um cristal, redondo, do tamanho de uma bola de gude caído próximo ao cintode segurança. Independente do que seja, se está dentro do seucarro provavelmente te pertence, mas você não vai conseguir fazer muito mais do que observar de onde está.

Saindo do seu esconderijo o rapaz logo percebe sua aproximaçãoe acena amigávelmente para que você se aproxime.clem[8]=1; //Viu o cristalif(clem[6]){


As cores vibrantes ao redor dele esmaecem e dão espaço a um tom fechado de azul que sugere desconfiança.}} }else{ok=0; } }else if(((2+(FORCES>0)+(SPACE>0))>3)&&a==4){ if(SPACE){ok=mana_check(1,1 if(ok){//Space
Ele ainda não parece ter te visto, por sorte não existe necessidade de se aproximar. Você mentaliza seus sentidos, sua audição e sua visão, desligados dos seus orgãos ou do seu corpo. Você gentilmente arrmessa sua percepção na direção do carro, observando o homem como se estivesse ao seu lado.

Ele é jovem, tem os cabelos loiros despenteados e olhos claros, usa uma jaquetaescura e uma calça jeans bastante desbotada. Ele constantemente olha para dentro do carro, na direção do banco de trás.if(FATE||PRIME){ 
Você logo se lembra daif(PRIME){
aura } else if(FATE){
sensação de atração } 
 que vinha do carro. }
Ajustando um pouco o ângulo dos seus sentidos você conseguever o que parece ser uma pedra preciosa ou um cristal, redondo, do tamanho de uma bola de gude caído próximo ao cintode segurança. Independente do que seja, se está dentro do seucarro provavelmente te pertence, mas você não vai conseguir fazer muito mais do que observar de onde está.

Saindo do seu esconderijo o rapaz logo percebe sua aproximaçãoe acena amigávelmente para que você se aproxime.clem[8]=1; //Viu o cristalif(clem[6]){


As cores vibrantes ao redor dele esmaecem e dão espaço a um tom fechado de azul que sugere desconfiança.}} }else{ok=0; }}else{ ok=0;} }while(!(ok) 


1.Continuar...

scanf(%i,&aclear( }else{//Já estava
Assim que te vê próximo ao carro, em meio a cena do acidente, ele guarda o capacete na moto e acena, indo na sua direção. Ele é jovem, tem os cabelos loiros despenteados e olhos claros, usa uma jaqueta escura e uma calça jeans bastante desbotada.if(clem[6]){
 As cores vibrantes ao redor dele esmaecem e dão espaço a um tom fechado de azul que sugere desconfiança.} 


}//Janus mais próximodo{
"Ei! Tudo bem com você?" Ele tem olhos grandes e sorridentes, estatura mediana, e mãos que não parecem acostumadas a trabalho físico, emboraele não aparente estar fora de forma, ou ao menos não parece especialmente gordo ou franzino.


"é o seu carro? Você se machucou?"


1."Claro que sim? Você viu o estado do meu carro?"
2.if(dmg){ 
"Um pouco, eu acho que tive sorte na verdade..."}else{ 
"Não, eu acho que já dei jeito nisso na verdade"} 

3.if(clem[4]){ 
"O que você quer com o meu carro?"}else{ 
"Um pouco, obrigado por parar para ajudar"} 


 scanf(%i,&aclear(}while(a<1||a>3//Respostasif(a==1){//Rude 
"Wow! Desculpa por ter perguntado. Considerando o estado do carro eu to surpreso que alguém tenha saído vivo de lá. Bem... não muito surpreso"}else if(a==2){ if(dmg){//Machucado
"Sorte!" Ele sorri e faz aspas com as mãos quando fala. "Seibem como é" } else{//curado
"Ah! Entendi, bom pra você, eu não ia poder te curar. Não que eunão queira nem nada, eu só não sei mesmo" }}else if(a==3){ if(clem[4]){//Acusador
"Hum... Eu..." Ele coloca a mão na nuca e vira o rosto para os ladosevitando seu olhar. "Eu meio que esq ueci uma coisa no seu carro" }else{//Obrigado
"Não que eu não fosse parar para ajudar alguém em um acidente,mas para ser sincero eu já estava procurando por você" }clem[7]=1;}


1."Como assim?"

scanf(%i,&aclear(do{
"Quer dizer..." Ele para, te encarando de forma especialmente confusa.if(clem[6]){ 
 A aura ao redor dele muda para um tom mais calmo e menos escuro, você pode ver a dúvida dele na forma de pequenos pontos coloridos que rapidamente surgem quando ele pergunta.}
"Ei, mas qual seu nome?"


1."%s, e o seu?"
2."%s, mas pare de mudar de assunto!"

, str, strscanf(%i,&aclear(}while(a<1||a>2do{
"Mas, esse é seu nome de verdade?! Como assim? Você acabou de despertar por acaso?!"



1."Hun? Do que você está falando?"
2."Claro que é meu nome de verdade, o que você esperava?"
3."Despertar? Você quer dizer o sonho..."


scanf(%i,&aclear(}while(a<1||a>3if(a==1){ 
"Você não sabe mesmo!"}else if(a==2){ 
"Qualquer coisa menos seu nome de verdade. Hahahaha!"}else if(a==3){ 
"Sim! Sim!"}


Ele aponta para você e começa a falar rápido em um tom entusiasmado e agitando os braços, você tem a impressão queele está se contendo para não lhe segurar e te sacudir no ar.if(clem[6]){ 
 Ondas de vermelho e amarelo se alternam rapidamente em um padrão frenético, refletindo a animação dele.}


"Logo depois desse acidente provavelmente. Você teve um sonho muito real, e desde que ele acabou você vê as coisas de forma diferente. Consegue fazer coisas que não deveriam fazer sentido, mas que parecem perfeitamente naturais para você, mesmo que você não saiba explicar?"


1."Sim... Exatamente isso"

scanf(%i,&aclear(do{
"Ah! Eu sempre quis ser o primeiro a contar pra alguém" Ele dá um passopara trás e abre os braços como se jatos de confete e efeitos pirotécnicosfossem surgir atrás dele.


"Você é umif(gen){ 
a maga!!!}else{ 
 mago!!!}
"


1."Tipo com varinhas e chapéis pontudos e caldeirões?"
2."E é por isso que eu não me lembro de nada?"
3."Ok, mas falando sério agora sério agora..."


scanf(%i,&aclear(}while(a<1||a>3if(a==1){ 
"Não! Claro que não!"

"Quer dizer... as varinhas sim, mas são opcionais. Na verdade eu já ouvi falar de algumas pessoas que usam caldeirões... Mas definitivamente sem chapéis pontudos!"}else if(a==2){ 
"Você perdeu a memória? Não, eu acho que você só bateu a cabeça mesmo. Mas eu tenho uma amiga que talvez possa te ajudar com isso."}else if(a==3){ 
"Sempre tem um cético não é mesmo?" Ele rola os olhos, sarcástico. "Você não está vendo o mundo de forma diferente? Não fez nada que não consiga explicar desde que acordou? Sua alma não se sente livre deuma âncora que te acompanhava a vida toda?! Eu estou literalmente olhando pra ela nesse momentoif(gen){
moça} else{
cara }
, você é umif(gen){
a maga } else{
 mago } 
." }


"Primeira lição sobre ser um mago. Nomes tem poder, evite contar seunome verdadeiro para outros magos, mais fácil de te encontrarem, espionaremem você e coisas assim. Geralmente usamos nomes falsos entre nós, e mesmo essesainda tem um pouco de poder, mas ia ser tipo, impossível, conviver sem chamaras pessoas de alguma coisa. Você pode me chamar de Janus falando nisso."



1.Continuar...

scanf(%i,&aclear(if(clem[7]){ 
"Mas eu quase esqueço. Como eu dizia tem um motivo para eu ter te encontrado aqui. Seu carro, eu esqueci uma coisa dentro dele.}else{ 
Ele para um momento e dá um passo para trás como se te estudasse.

"Eu acho que eu posso te contar de qualquer forma, eu não te encontrei por acaso passando pela estrada, eu deixei uma coisa no seu carro.}if(clem[4]){//janus já viu o cristal 
 Ficou ali atrás está vendo? Aquele cristalzinho roxo."

Ele aponta para dentro do carro, você se aproxima para ver mais de perto, ele está largado no banco do passageiro perto do cinto.if((PRIME||FATE)&&(!(clem[8]))){ 
 Era, afinal, essa a fonte daif(PRIME){
aura que você viu.} else if(FATE){
força que parecia te atrair nessa direção.} }else if(clem[8]){
 O mesmo cristal que você tinha avistado antes. }eye_grab( }else{//Janus chegou agora e não viu 
 Tipo um cristal, parece um olho. Ele é um artefato mágico, então talvez você tenha percebido ele."//Ja peguei troxão if(clem[3]==1){


1."Esse aqui?" *Mostrar o cristal* 


scanf(%i,&aclear(//E caímos para o you are the chosen 1!}//Não peguei else{if(clem[8]){
 Você reconhece como provavelmente sendo o que você viu maiscedo no banco de trás do seu carro. O pequeno cristal arredondadoainda está ali.}else if (PRIME||FATE){


Isso provavelmente explica a if(PRIME){ 
aura que você viu vinda da direção do carro}else if(FATE){ 
 atração que você estava sentindo por alguma coisa na direção do carro}
. Uma observação rápida do banco de trás encontra uma pequenapedra arredondada, mas lapidada em várias faces.} else{


Você explica que não percebeu nada desse gênero. "Eume lembro de ter jogado pela janela, ainda deve estar aquiatrás" Ele vai na direção do carro e olha por dentro dajanela quebrada. "Ali! no banco de trás" largado ao ladodo cinto você vê uma pequena pedra arredondada, mas lapidadaem várias faces.} eye_grab( }}//YOU ARE THE CHOSEN ONE!!1!!!11ELEVEN{
Assim queif(clem[3]==1){
você mostra o cristal} else{
você vê o cristal}if(FATE){
 a sensação de atração que você sentia se intensifica. Alguma força parece agir não só sobre você e o cristal, mas sobre Janus também, ele parece perceber a mesma coisa, pois começa a sorrir descontroladamente. }else{ 
 Janus começa a sorrir descontroladamente, olhando para você depois para o cristal, e para você de novo.}


"Você é if(gen){ 
a terceira}else{ 
o terceiro}
!? Hahahaha! Esse dia só fica melhor"


1."Como assim? Do que você está falando?"
2.if(FATE){ 
"Você quer dizer essa força que eu sinto...?"}else{ 
"Acho que você está vendo alguma coisa que eu não estou"}

3."Você está realmente me assustando agora..."

scanf(%i,&aclear(}while(a<1||a>3do{if(a==1){if(gen){
"Você é o cara que nós estávamos procurando! A mulher no caso..." }else{
"De você! E desse olho!"if(clem[3]==1){
Ele aponta pro cristal na sua mão.}else{
Ele te mostra novamente o cristal, quase esfregando-o na sua cara.} }}else if(a==2){ if(FATE){
"Ah você sente também! ótimo, vai ser mais fácil de explciar" } else{
"Você não sente? Talvez por que eu sou treinado em Destino, mas a auraparece tão forte em você quanto em mim, com certeza" }}else if(a==3){ 
"Desculpa! Desculpa! É que... longa história"}


Ele para para respirar por um segundo, tentando se acalmar.if(clem[6]){ 
 Você consegue ver as cores na aura dele se tornando mais amenas.}


"Eu tenho uma irmã, maga também. Quando despertamos nós descobrimosque tinhámos nascido sob uma profecia, mas ela também mencionava um'terceiro, de outro sangue'. Alguém que não fosse da nossa família. Na verdade..."Ele olha ao redor apreensivo.

"Eu te conto no caminho, é melhor sairmos daqui. Mais ninguém te viu, certo?"


1.if(clem[1]){ 
"Eu vi um gato..."}else if(MIND){ 
"Eu achei ter sentido uma presença..."}else{ 
"Não, você é a primeira pessoa que passa"}


scanf(%i,&aclear(}while(a!=1 if(clem[1]){
"Era uma gata meio estranha? Quatro olhos, dois rabos, na verdadeum espírito?" 


Você confirma 


"Merda! Era a Fortuna, o familiar da minha irmã, ela já deve saber queo olho está aqui, mas talvez ainda não saiba quem é você" if(clem[1]==2){


"Na verdade..." Você acrescenta "Sua irmã é loira? Olhos verdes como os seus?"


"Sim... como você sabe"


"Eu segui a gata, vi quando ela abriu um portal e pulou nos braços da sua irmã"


"Isso é pior ainda, quer dizer que ela..."}}else if(MIND){
"Presença? Como uma consciência? Você sabe Mente então, certo? Podeter sido só um animal ou algo assim, mas é melhor ..." }else{
"ótimo, talvez ela ainda não..." }


Janus para de falar de repente. Você sente um calafrio na base da espinhaif(clem[1]==2){
, a mesma sensação de quando viu o portal sendo aberto }
.if(SPACE){


[Espaço]
Sua visão continua estendida, passando atrás de você, por entreas árvores você consegue ver um vulto, passando rápido de mais para identificar.}if(MIND){ 


[Mente]
 if(SPACE){
Além disso v}else{
V} 
ocê sente mais uma consciência além da sua e de Janus, mais dua s na verdade, diferentes entre si e diferentes da que você sent iu quando acordou. }



Janus puxa do bolso uma moeda de prata, grande como o que você veria em um filme de piratas, mas marcada com um pentagrama em um dos lados, e dois rostos virados em direções opostas do outro. Ele começa a move-la entre os dedos, e você tem a impressão que ele se concentra para conjurar algum tipo de magia.


1.Continuar...

 scanf(%i,&a clear(
Você ouve um farfalhar entre as folhas e um bater de asas, algo passa ao seu lado, rápido de mais para identificar.if(clem[3]==1){
Você sente uma dor aguda nas costas da mão, dois cortes profundosfazem você derrubar o cristal no chão [-1 Saúde]. Em um segundo rasante, t ão rápido quanto, o falcão que te atacou recolhe o artefato dochão e levanta voo. Janus se desconcentra, seja lá o que tentavafazer parece ter falhado. dmg++;}if(clem[3]==2){
A sombra vai na direção de Janus, ele sufoca um grito de dor, m as deixa cair o cristal, ele para qualquer magia que estivessetentando para tentar estancar os dois cortes profundos nas costas damão. Logo em seguida o falcão que o atacou dá um segundo rasante, re colhendo o artefato e levantando voo. }


De trás de uma das árvores um homem aparece, ele chama o animal, que pousa diligentemente sobre seu braço e lhe entrega o olho de cristal.

"Merda!" Janus xinga. "Parece que alguém te viu"

O recém-chegado é um homem negro, aparentando ser um pouco mais velho que o outro mago, um palmo mais alto e de compleição forte. Ele usa um casaco de frio pesado e tem os cabelos em dreadlocks curtos e bem cuidados. Ele agita o braço e a ave voa para uma árvore próxima.

"Janus! Sua irmã pediu que eu lhe avisasse que isso já foi longe de mais. Entregue os artefatos que você tem, e pare de procurar pelo rei. Não vale a pena o risco!"


1.Continuar...

 scanf(%i,&a clear(do{ 
"Ah, claro Yoonir. Estávamos 2 a 1, eu finalmente ia conseguir empatar a pontuação com o olho. Você tem que adimitir que largar ele em um carro aleatório para despistar vocês foi genial. Nós temos uma profecia para cumprir, parar de competir agora simplesmente não é justo com o destino"


Enquanto fala Janus casualmente coloca as mãos atrás do corpo, assim que termina a frase saca uma pistola que tinha escondida nas costas. Apontando-a para Yoonir. Antes que ele possa atirar, o outro mago age mais rápido, ele faz um movimento com as mãos, você sente uma onda de calor seca e intensa, um conjunto de runas radiantes surge sobre os braços de Janus, que começam a subtamente se contrair em espasmos descordenados. Ele dispara uma vez, e erra.


Yoonir então vira na sua direção.

"Você! Você éif(gen){
a terceira } else{
o terceiro } 
, de outro sangue não é?! Janus é um lunático, você precisa vir comigo!"

"Lunático? Que exagero, nós dois sabemos que um tiro não ia te matar, eu só precisava te distrair enquanto você se cura"if(clem[6]){


Você ainda consegue ver a aura de ambos, mas a magia pareceestar se dissipando. A aura de Yoonir tem um tom fechado de azul ealguns tons ocilantes de verde, indicando desconfiança. A aura de Janusé tomada por tons escuros de verde e marrom, emoções negativas, invejatalvez, mas nada que indique agressividade, ou violência. O efeitoacaba e sua visão volta ao normal. }


1.Ir com Yoonir
2.Ajudar Janus

scanf(%i,&a clear(}while(a<1||a>2if(a==1){clem[8]=1; if((tut_mana==0)&&(((DEATH>0)&&(path!=2))||((FATE>0)&&(path!=0))||((LIFE>0)&&(path!=4))||((MIND>0)&&(path!=1))||((SPACE)&&(path!=1))||(TIME>1))){tutorial_mana(pathtut_mana=1;}if((tut_dox==0)&&((SPACE>0)||(TIME>1))){tutorial_dox(tut_dox=1;} go_yoonir( } else if(a==2){clem[8]=0; if((tut_mana==0)&&((TIME>1)||((SPACE>0)&&(path!=1))||((MIND>0)&&(path!=1))||((LIFE>0)&&(path!=4))||((PRIME>0)&&(path!=3)))){tutorial_mana(pathtut_mana=1;}if((tut_dox==0)&&((TIME>1)||(SPACE>0)||(FORCES>1))){tutorial_dox(tut_dox=1;} go_janus( }


1.Continuar...

 scanf(%i,&a clear(//Shot-back if(clem[11]&&(!((dmg+dmg_dox)>=5))){ do{
Yoonir fugiu por entre as árvores, e lhe chama para segui-lo.Mas Janus está desarmado na sua frente, você com a pistola deleem mãos. Ele talvez continue a perseguir vocês, se ele é realmente um lunático, mas nas verdade ele não pareciatão perigoso assim antes do outro mago chegar.

 
1.Disparar contra Janus
2.Dar as costas e acompanhar Yoonir

 scanf(%i,&aclear(}while(a<1||a>2 if(a==1){do{clem[11]=2;
Você aponta a arma para Janus, a expressão dele muda de frustraçãopara legítima surpresa.

"Wow! Wow! Wow! Vamos com calma aí. Eu não sou um xamã quenem aquele cara, eu estou sozinho aqui e não tenho como me curar"

 
1.Mirar na perna
2.Mirar na cabeça

 scanf(%i,&a clear(}while(a<1||a>2if(a==1){ 
Você não responde, simplesmente aponta a arma para as pernas dele e puxa o gatilho.if(FATE){


[Destino]
Você ouve um soar de cordas, osfios do destino se tensionam como uma guitarra desafinadapara protege-lo.

 }
O tiro acerta-o na coxa, você ouve um som metálico, e não vê sangue. Ele tranquilamente põe a mão no bolso e tira um isqueiro zippo amassado.

"Wow, que sorte a minha não é?" Ele diz sarcástico "Já é o quarto isqueiro que desvia uma bala. Falando nisso eu só tinha uma bala, então..."

Ele começa a calmamente seguir de volta para sua motocicleta.

"Só vai logo com ele, manda um abraço pra minha irmã."


1.Continuar...

 scanf(%i,&a clear( }else if(a==2){ 
Você não responde, simplesmente aponta a arma para testa dele e puxa o gatilho. A arma emperra.

"Você acabou de tentar me matar!? Nossa, quando você acha que conhece as pessoas... Eu disse, essa arma não mata, ela é encantada pra isso."

Ele começa a calmamente seguir de volta para sua motocicleta.

"Só vai logo com ele, manda um abraço pra minha irmã."


1.Continuar...

 scanf(%i,&a clear(}} else if(a==2){
Guardando a pistola na cintura assim como o mago havia feito paraesconde-la, você dá as costas e corre para entre as árvores.


1.Continuar...

scanf(%i,&aclear(} }//#morta if((dmg+dmg_dox)>=5){if(clem[8]){// com Yoonir
Seu corpo todo dói, mas com alguma dificuldade você consegue acompanhar Yoonir, mesmoferidif(gen){ 
a}else{ 
o}
 e mancando. Ele se vira na sua direção, sem parar de corrermas desacelerando ao notar sua condição.

"Você está bem? Pare um segundo eu posso te curar se..."

Tudo fica escuro, você consegue apenas sentir seu corpo cairantes de perder completamente sua consciência.}else{// com Janus
Yoonir escapaif(!(clem[9])){ 
 com o artefato}
, você olha para Janus como quem diz "E agora?", mas derrependetodo seu corpo dói. A adrenalina estava te distraindo dos seusferimentos, mas você rapidamente sente sua cabeça girar, tudo ficaescuro e você perde completamente a consciência.} 


1.Continuar...

scanf(%i,&aclear( }//Não morta else{//Yoonirif(clem[8]){do{
Você logo alcança Yoonir entre as árvores, ele pede que você continue a correr mais ou pouco. Vocês logo cruzam o curto trecho de matae encontram uma segunda estrada do outro lado, parado no acostamento o carro de Yoonir. Você para para recuperar o fólego. if(clem[10]){ 
Enquanto isso, ele põe uma das mãos sobre o ferimento no braço, imediatamente curando-o, o rasgo no casaco e a mancha de sangue ao redor de repente parecendo um tanto incoerentes. }if((dmg+dmg_dox)>1){ 


"Ei! Precisa de ajuda? Eu posso te curar se você precisarif((dmg+dmg_dox)>2){
, você não me parece muito bem } 
"


1.Aceitar a cura
2.Recusarif((LIFE>0)&&(((path=4)&&(mana>=1))||(mana>=2))){

3.Recusar, e curar a si mesmif(gen){
a}else{
o}
[Vida]if(path==4){
(-1 Mana)}else{
(-2 Mana)} }


 scanf(%i,&aclear(if(a==1){ok=1;
"Aqui, só fique paradif(gen){
a}else{
o}
 um segundo por favor" 


Ele põe as mãos estendidas em frente ao seu corpo,você sente uma onda de calor passar pelo seu corpo,parecida com quando ele encantou os braços de Janus,mas menos seca, um calor mais confortável, comoum dia ensolarado. if((dmg==0)&&(dmg_dox>0)){
 Mas você ainda se sente tão mal quanto.

"Hum, parece que seus ferimentos foram causadospor paradoxo, desculpe, mas eu não posso curar isso com magia, só o tempo recupera o sua matriz vital nesses casos"} else if(dmg_dox>0){
 Você se sente um pouco melhor, mas ainda umpouco machucadif(gen){
a}else{
o}
"Eu fiz o que pude, mas parte dos seus ferimentosforam causados por paradoxo, só o tempo recupera o sua matriz vital nesses casos"} else{
 Você se sente perfeitamente curadif(gen){ 
a}else{ 
o}
, todo mínimo arranhão ou pequeno ferimento completamentereparado


"Acho que eu consegui cuidar de tudo, se sente melhor?"}dmg=0;}else if(a==2){ok=1;
"Você é quem sabe, mas não tenha medo de pedir seprecisar." }else if((a==3)&&((LIFE>0)&&(((path=4)&&(mana>=1))||(mana>=2)))){ok=1;if(path==4){mana--;}else{mana-=2;}
Você olha para dentro do seu próprio corpo, escaneandocada célula danificada e orientando seu corpopara imediatamente repara-los. if(dmg_dox>0){
 Você repara tudo que pode, mas alguns dos ferimentosparecem simplesmente impossíveis. Yoonir notasua preocupação.

"Você se machucou tentando fazer alguma magia mais complexadepois do despertar? Parece que você tem alguns ferimentos causadospor paraoxo. É impossível cura-los com magia, só o tempo recupera o sua matriz vital nesses casos"} dmg=0;}else{ok=0; } } //Caso nao tenha nem a cena da cura passa logo com um ok =1else{ ok=1;}


1.Continuar...

scanf(%i,&aclear(//Ele entra no carro and drives to the sunset
Vocês entram no carro e Yoonir começa a dirigir. Passam-sealguns momentos um tanto tensos de silêncio em que ele parececoncentrado em alguma outra coisa além da estrada, de vezem quando olhando na sua direção e abrindo a boca antes desimplesmente desistir de falar.}while(!(ok)} //Januselse{
Yoonir escapaif(clem[9]){ 
 mas você consegue recuperar o olho de cristal}else{ 
 com o artefato}
.if(clem[9]){ 


"Olha pra isso! Novo artefato e eu ainda encontro parte da profecia perdid if(gen){
a } else{
o } 
 no meio da estrada. Eu geralmente não tenho tanta sorte no mesmo dia nem com magia!"}else{ 
 Janus encara o trecho de floresta por algum tempo, então guarda novamente a pistola, frustrado.

"Ei, obrigado por ficar ao meu lado. Foi uma pena termos perdido o olho, mas não é sua culpa. Tudo ficou muito tenso muito rápido, você acabou de despertar, relaxa"}


"De qualquer forma, acho que você vai precisar de uma carona" Ele inclina a cabeça na direção do esqueleto if(clem[2]){ 
destruído}else{ 
flamejante}
 que era seu carro.


"Nós podemos parar em algum lugar no caminho para eu te explicartoda essa questão da profecia, mas não é uma boa ficar paradosno meio da estrada do lado de um acidente."


Ele pega um capacete extra na moto e te entrega. Vocês doissobem na moto, e ele dá partida.


1.Continuar...

scanf(%i,&aclear( } }//Acordando feridoif((dmg+dmg_dox)>=5){ //Acordando ferido com Yoonirif(clem[8]){dmg=0;
Você sente que está em movimento, e se sentindo bastante melhorvocê acorda, sentadif(gen){ 
a}else{ 
o}
 no banco do carona de um carro, Yoonir dirigindo ao seu lado.

"Ei que bom que você está bem, eu cuidei dos seus ferimentos como pude, mas você tem algumas marcas de paradoxo,elas devem melhorar daqui a algum tempo. Eu sei que vocêé novif(gen){ 
a}else{ 
o}
 nisso, mas precisa tomar mais cudiado" } //Acordando ferido com Januselse{dmg--;
Quando acorda você sente alguma coisa pesada ao redor da sua cabeça, você está em movimento, apoiadif(gen){ 
a}else{ 
o}
 contra alguma coisa. Você abre os olhos, você está na moto deJanus, ele colocou um capacete em você e equilibrou seu corposobre a moto, apoiado contra o dele. Dirigindo bem lentamenteaté perceber que você acordou e acelerar.

"Ei, finalmente! Desculpa te acordar assim, mas eu não podiaficar lá esperando você. Aqui, vamos parar ali em frente."

}}
Ele entra em um posto de gasolina na beira da estrada, estacionando ao lado da loja de conveniência.

"Vamos entrar, podemos conversar com mais calma, e eu preciso comer alguma coisa"


1.Continuar...

 scanf(%i,&a clear(do{ 
A loja de conveniência não tem nada de extraordinário, provavelmente algo bom com tudo que tem acontecido. Uma pequena lanchonete, alguns biscoitos e doces com o típico preço inflacionado desse tipo de lugar. Já é de manhã, o sol começou a nascer a pouco tempo, a loja está vazia exceto por alguns poucos funcionários sonolentos.

"Quer alguma coisa?"if(clem[8]){
Yoonir } else{
Janus } 
 pergunta. Você põe a mão no bolso, e se dá conta de que perdeu sua carteira no acidente. "Não se preocupe if(clem[8]){
 eu pago } else{
, você me paga depois } 
"


1.Uma água
2.Um café
3.Algo para comer
4.Recusar

 scanf(%i,&a clear(}while(a<1||a>4 if(a==1){
Você pega uma garrafa de água em uma das geladeiras aolado do balcãoclem[12]=1; } else if(a==2){
Uma das funcionárias lhe serve uma xícara fumegante de espressoacompanhado de um biscoitoclem[12]=2; } else if(a==3){
Você escolhe entre os salgados da vitrine o que parece estar maisfresco e recebe uma coxinha de galinha em um guardanapo de papelclem[12]=3; } else if(a==4){
Você educadamente recusa a oferta, esperandoif(clem[8]){
Yoonir}else{
Janus}
 se servirclem[12]=0; }
. Ele pega um if(clem[8]){
a água e um sanduíche natural } else{
 café e um pacote de biscoitos recheados } 
 e vocês vão se sentar em uma das mesas mais afastadas.


1.Continuar...

 scanf(%i,&a clear(//Papos de nome//Yoonir if(clem[8]){ do{
"Então... eu ainda não sei seu nome"

 
1."%s"
2."Eu prefiro não dizer"

,strscanf(%i,&aclear(}while(a<1||a>2 do{if(a==1){a=0; b=0;do{ok = strcmp(str, name[a] if(ok==0){ b=1;}a++;}while((a<24)&&(b==0)if(b==1){ clem[13]=1; 
"%s? Hum..." Ele para pensativo por um momento. "Você tem o mesmo nome que um,str if(gen){
a heroína } else{
 herói } 
 do mundo mágico, sabia? Mais uma lenda pra falar a verdade, ninguém tem certeza se aconteceu mesmo..."

1.Continuar...

 scanf(%i,&a clear(}
"Nomes são coisas poderosas entre Magos, tome nota e tome cuidadocom quem sabe o seu, mas não se preocupe, você pode confiar em mim." } else if(a==2){
"Oh!" Ele parece um pouco envergonhado em ter perguntado. "Desculpe, eu não quis dizer desse jeito. Eu diria que vocêpode confiar em mim com seu nome verdadeiro, mas acabamos denos conhecer, seria tolo da sua parte acreditar em mim"} 


Ele abre a garrafa de água e toma um gole.

 "Você precisa de um nome das sombras. Magos tem um segundo nomepara usar entre nós, Yoonir não está na minha certidão de nascimentosabe? Tem algo em mente?"

 gets(sdwgets(sdwclear( ok = strcmp(str,sdw if(ok==0){
Seu nome das sombras deve ser diferente do seu nome real


1.Voltar

scanf(%i,&aclear(}}while(ok==0a=0;b=0; do{ok = strcmp(sdw, name[a]if(ok==0){b=1; } a++;}while((a<24)&&(b==0)if(b==1){ if(clem[13]){
"%s? Sério? Curioso você escolher esse nome, também tem relação com aquela lenda que eu comentei",sdw} else{
"%s? Bom nome, engraçado que também é o nome deum,sdwif(gen){ 
a heroína}else{ 
 herói}
 de uma certa lenda contada entre Magos".} }else{
"%s? Bom nome. Posso me referir a você de forma adequada para ummago agora",sdw }}//Janus else{do{a=0;b=0;do{ ok = strcmp(str, name[a]if(ok==0){b=1;}a++; }while((a<24)&&(b==0)if(b==1){clem[13]=1;
"Então, %s..." Ele dá uma sorriso. "Você tem o mesmo nome que um,strif(gen){ 
a heroína}else{ 
 herói}
 do mundo mágico, sabia? Mais uma lenda pra falar a verdade,ninguém tem certeza se aconteceu mesmo..."


1.Continuar...

scanf(%i,&aclear(}
"%s! Você precisa de um nome de mag, strif(gen){
a}else{
o}
. Seu nome de verdade tem poder, principalmente poder para os outros te espionarem. Você precisaescolher um nome das sombras, um nome de mago. Tem algo em mente?"

 gets(sdwgets(sdwclear( ok = strcmp(str,sdw if(ok==0){
Seu nome das sombras deve ser diferente do seu nome real


1.Voltar

scanf(%i,&aclear(}}while(ok==0a=0;b=0;do{ ok = strcmp(sdw, name[a]if(ok==0){b=1;}a++; }while((a<24)&&(b==0)if(b==1){if(clem[13]){ 
"%s? Sério? Engraçado você escolher esse nome, também tem a ver com aquela lenda que eu falei",sdw}else{ 
"%s? Bom nome, engraçado que também é o nome de um,sdw if(gen){
a heroína } else{
 herói } 
 de uma lenda entre Magos".} }else{
"%s? Legal. Já posso falar com você como um,sdwif(gen){
a maga}else{
 mago}
 de verdade agora"} }//Papo de nomes end 


1.Continuar...

 scanf(%i,&a clear(if(clem[8]){
Ele dá uma mordida no sanduíche. } else{
Ele abre um dos biscoitos, comendo o recheio antes do resto. }
if(clem[12]==0){
Você percebe que talvez esteja com mais fome do que pensou. }if(clem[12]==1){
Você toma um gole de água, suas mãos ainda sujas de terraif(clem[0]==2){
 e das cinzas do tronco}
 mancham o rótulo da garrafa. }if(clem[12]==2){
Você meche um pouco o café e prova para ter certeza de que nãovai se queimar.if(FORCES){
 Você ainda pode se queimar? Provavelmente não. Você tem a impressão de que poderiafazer essa xícara ferver ou congelar se quisesse.} else if(MATTER){
 O café não é dos melhores, você pensa brincando se poderiaresolver isso com magia. Mas na verdade você sabe que sim,que esse café poderia ser água, vinho ou mercúrio se vocêdesejasse.} }if(clem[12]==3){
Você dá uma mordida na coxinha, é boa o bastante para alguém com fome,melhor do que você esperava de uma loja de conveniência. }


"Só mais um detalhe,if(clem[8]){
 antes de te explicar a situação da profecia. Eu gostaria de saber qualé sua torre." } else{
 só para matar uma curiosidade minha, eu já te explico toda asituação da minha irmã e da profecia. Mas antes eu queria saberqual a sua torre." }


Antes que você possa perguntar ele lembra que você é nov if(gen){
a } else{
o } 
 nessa coisa de magia, e explica o que quis dizer.

"Ser um mago quer dizer que você despertou, sua alma foi até os planos astrais e você assinou seu nome em uma das cinco torres. E agora você pode canalizar a influência da sua torre para alterar esse mundo. Cada torre favorece influências diferentes, que nós chamamos de Arcanas, mas com trinamento qualquer mago pode dominar todos eles.if(clem[8]){
Eu por exemplo sou um Thyrsus, eu naturalmente já domino os Arcanasde Espírito e Vida, mas também sou versado em Espaço. } else{
Eu por exemplo sou um Acanthus, eu naturalmente já domino,Destino e Tempo, mas também sei Primórdio e um pouco de Espírito. } 
" 


1.Continuar...

 scanf(%i,&a clear(
"Então? Como foi seu despertar?" 


do{ switch(path){ case 0: 
1."Eu segui uma estrada de prata até uma festa..."
2."Eu lembro de um baile de máscaras ou algo do tipo"
3."Eu lembro de alguém roubando meu rosto"break; case 1:
1."Havia um trem e uma estrada de ferro que me acompanhava"
2."Foi tudo como um grande pesadelo, como um sonho dentro do meu despertar"
3."Eu lembro de demônios, um com chifres, um meio nojento"break;case 2:
1."Eu lembro de ter morrido"
2."Eu lembro da estrada de ouro, decorada com caveiras"
3."Tinha um porteiro, em frente a portões de chunbo"break;case 3:
1."Eu lembro do dragão, me fizeram encarar um dragão"
2."Havia um rei feito de fogo, e uma rainha coberta de magia"
3."Eu segui por uma estrada de mármore, montadif(gen){ 
a}else{ 
o}
 em um cavalo branco, cercadif(gen){ 
a}else{ 
o}
 de querubins"break;case 4:
1."Eu me lembro de vários espíritos, querendo falar comigo"
2."Eu me lembro do lobo, um enorme lobo em uma árvore"
3."Era uma floresta, tudo estava vivo e lutando para sobreviver"break;}


 scanf(%i,&a clear(}while(a<1||a>3//Yoonir if(clem[8]){if(path==0){
"Provavelmente umif(gen){ 
a}
 Acanthus, assim como o Janus e a irmã. Parece que além de controlar o destino vocês atraem ele"}if(path==1){
"Provavelmente um"if(gen){ 
a}
 Mastigos, if(gen){ 
 uma bruxa}else{ 
 um bruxo}
" Ele fica sério por um momento "Ei. Não leve para o lado pessoal,mas um conselho, não é por que você pode ler a mente das pessoasque você deva, ok? Desculpe, é que eu já tive... deixa pra lá"}if(path==2){
"Provavelmente você é umif(gen){ 
a}
 Moros, umif(gen){ 
a}
 necromante. Não é nada pessoal, mas eu agradeço se você tentarmanter zumbis e fantasmas afastados de mim. Eu acho que é poreu estar mais acostumado com magias de Vida, mas os mortos-vivos meincomodam"}if(path==3){
"Isso soa como um Obrimos, torre dos taumaturgos. Eu vou teapresentar o Hélio, outro mago que está nos ajudando, eletambém é um Obrimos, pode te aconcelhar até você ter um controlemelhor da sua magia. Quando vocês não estão lançando fogoe trovões estão controlando mana, todo cuidado é pouco"}if(path==4){
"Umif(gen){ 
a}
 Xamã, com certeza. Tudo parecia tentar te matar, eao mesmo tempo você nunca se sentiu tão vivif(gen){ 
a? Você é uma}else{ 
o? Você é um}
 Thyrsus, como eu. Talvez eu possa te ensinar alguma coisa quandotivermos mais tempo"} }//Janus else{if(path==0){
"Parece que temos mais umif(gen){ 
a}
 Acanthus nessa profecia, é a mesma torre que eu e minha irmã.Bom e velho reino astral de Arcadia. Deve ser essa ligação com o destino sabe, atrai profecias para a gente"}if(path==1){
"Se as leis da física não faziam sentido ou você achou queestava no inferno provavelmente você é umif(gen){ 
a bruxa, uma}else{ 
 bruxo, um}
 Mastigos. Eu vou te apresentar a Psiquê, outra maga da mesma torre que você queestá me ajudando com toda essa coisa da profecia."}if(path==2){
"Parece que você visitou Stygia então. Muitos mortos, muitoouro e chumbo? Você é umif(gen){ 
a}
 Moros, ou necromante. Você vai se dar bem com a Magpie, é outra maga da mesma torre que você queestá me ajudando com toda essa coisa da profecia."}if(path==3){
"Eu posso estar errado, mas Obrimos eu acho. Eu não trocariasorte e poder voltar no tempo por nada, mas controlar raiose trovões é tipo, o segundo melhor."}if(path==4){
"Provavelmente Thyrsus. Umif(gen){ 
a}
 xamã como nosso bom amigo Yoonir. Além de iluminação espirituale harmonia com todas as coisas vivas você nunca mais vai teruma ressaca, talvez o uso mais nobre dos poderes que o destino nos concedeu."}}


1.Continuar...

 scanf(%i,&a clear(if(clem[8]){
Yoonir da mais uma mordida no sanduíche, e toma um gole de água. } else{
Janus toma apenas gole do café e passa a molhar os biscoitos nele a ntes de come-los. }//Papo sério Yoonir if(clem[8]){


"Bem... agora sobre a profecia."

 Ele termina a garrafa de água em um grande gole antes de começar.

 "Você conheceu Janus certo? Ele tem uma irmã gêmea, Moira. Desdeque eram crianças, antes mesmo de despertarem eles tem sonhos sobre essemesmo Rei. O antigo Rei de Atlantis, líder de uma cidade antiga, repletade magos. qQuando eram menores ambos sonhavam que estavam passeandopelas ruas da cidade, ouvindo seus discursos, ou que eram concelheirosem sua corte."

 
1.Continuar...

scanf(%i,&aclear(
"Os sonhos continuaram até eles despertarem, ao mesmo tempo, adolecentes ainda.Quando despertaram puderam ver seu destino, eles, junto deuma terceira alma, de outro sangue, iriam trazer o Rei de voltaa vida. Foi revelado a eles que o corpo do rei foi espalhadopelos cinco planos astrais, e as partes retornaram ao nosso plano imbuídasde magia. Então os dois se juntaram para procurar pelas partes, usandobibliotecas arcanas e pesquisando livros antigos eles começarama encontra-las, foi aí que nós nos conhecemos, quando eles ainda estavam juntos, éramos seis procurando os artefatos."

 
1.Continuar...

scanf(%i,&aclear(
"Até que os sonhos voltaram, novamente, os dois voltaram a sonharcom o Rei, mas onde antes eles viam o passado, eles passaram aver o futuro. De acordo com Janus o retorno do Rei iria despertar toda ahumanidade, e todos teriam a chance de se tornar magos. Mas Moira tinha pesadelos,ela via o Rei cercado apenas dos magos mais poderosos, magias depoder inimaginável selavam os reinos astrais além do alcance dequalquer um que não jurasse sua alma a ele. Os magos do seu concílioeram os únicos que tinham permissão para praticar magia e nenhum novo despertar jamais ocorreu"

 
1.Continuar...

scanf(%i,&aclear(
"Eles discutiram, brigaram, e se separaram. Hélio, Moira e eupretendemos juntar as partes do Rei para invocar seu espírito e destruí-lo.Janus, Magpie e Psiquê querem trazê-lo de volta a vida."

 
1.Continuar...

scanf(%i,&aclear( do{
"Então? Agora que ouviu tudo, entendeu o que está acontecendo?Você está queitif(gen){
a}else{
o}
, o que você acha?" 


1."Eu concordo com vocês, Janus é insano"
 2."Mas o que acontece se Janus tuver razão?"
 3."Eu prefiro não me envolver sabe..."

 scanf(%i,&aclear(}while(a<1||a>3 if(a==1){clem[14]=0;
"Ele com certeza não é equilibrado, mas ele era uma boa pessoacom certeza. Mas hoje em dia... eu não sei. if(clem[10]){ 
Ele atirou em mim}else{ 
Ele apontou uma arma para mim}
, eu sei que aquela pistola dele está encantada para não matar, masmesmo assim. Ele pode desencantar ela quando quiser, eu achoque não confio mais nele, sabe?"} else if(a==2){clem[14]=1;
"Eu não sei, mas se ele estiver errado a humanidade toda saiperdendo. Se você preferir ajuda-lo fique a vontade. Não vamoste forçar a ficar do nosso ladoif(clem[11]==2){ 
, mas depois daquilo? Eu vi que você tentou atirar nele, boa sorte voltando}if(clem[9]){ 
. O olho do Rei fica comigo de qualquer forma, obrigado pode me ajudar, mas eu não posso simplesmente te entrega-lo}
."} else if(a==3){clem[14]=2;
"Não se preocupe, não vamos te obrigar a escolher um ladonessa disputa. Eu aprecio toda a ajuda e confiança que você me ofereceu até agora."}}//Papo sério Janus else{


"Agora, vamos a parte importante."

 "Como já eu disse eu tenho uma irmã. Moira o nome dela. Desde queéramos crianças, sonhamoscom esse cara, um Rei de uma cidade chamada Atlantis. Umacidade muito antiga e feita para magos, eu lembro até hoje, era incrível, eles podiam fazer magiaquando quisessem, não existiam paradoxos, e qualquer um podia sedespertar se tentasse. Claro que na época eu não sabia o que eramagia, magia de verdade, eu só achávamos que nós éramos irmãostendo sonhos iguais, o que já era legal o bastante pra mim."

 
1.Continuar...

scanf(%i,&aclear( 
"Os sonhos duraram até nós despertarmos, ao mesmo tempo, como bons gêmeos. No nosso despertar nósconseguimos ver a profecia. Dizia que nós dois, junto com você, uma terceiraalma de outro sangue, nas palavras da profecia, estávamos destinados atrazer o Rei de volta a vida. Nós descobrimos que o corpo dorei foi espalhado pelos cinco planos astrais, e as partes entãoretornaram ao nosso mundo como artefatos mágicos. Nós nos juntamose começamos a procura-las com a ajuda de alguns outros magosque nós conhecíamos, inclusive o Yoonir, nós trabalhávamos juntos a algunsmeses atrás, bons tempos."

 
1.Continuar...

scanf(%i,&aclear( 
"O problema foi que enquanto nós e a nossa gangue do Scooby Doorecolhíamos artefatos mágicos eu e minha irmã voltamos a sonhar com o Rei.Mas ao invés de sonhar com o passado nós sonhávamos com ele re tornando. Eu vi ele tornando nosso mundo a nova Atlantis, todos podiampraticar magia e todos tinham uma chance de despertar, as pessoaspodiam usar magia para resolver crises ambientais e questões de guerra.Era utópico mesmo sabe, no nível individual ainda haviam tantosmagos ruins quanto existem pessoas ruins, mas numa escala global eu tinha aimpressão do mundo ser um lugar melhor. Mas minha irmãtinha pesadelos, ela viu o Rei escravizando as pessoas, selandoos reinos astrais para que nenhum despertar jamais ocorresse"

 
1.Continuar...

scanf(%i,&aclear( 
"Nós discutimos, nos separamos, o time se dividiu. Eu, Magpie e Psiquê queremostrazer o rei de volta a vida. Yoonir, minha irmã e Helio estãotentando destruir o rei, mas acho que eles precisam de todos osartefatos pra isso."


1.Continuar...

scanf(%i,&aclear( do{
"Agora que você ouviu tudo? O que você acha? Eu sei que eu devoparecer meio maluco. Mas eu depois de despertar eu só comecei aaceitar os riscos sabe? Se você pode controlar as variáveis aseu favor, vale a pena. Minha arma por exemplo, eu nunca tentariamatar o Yoonir, mas minha arma é encantada para nunca matar alguém.Você pode apontar ela pra sua cabeça e puxar o gatilho se quiser,ela vai travar ou alguém vai aparecer para tirar ela da sua mão, ela talvez a té exploda, mas alguma coisa sempre acontece que impeça ela de matar.O lado ruim é que a mira dela é péssima mesmo para tiros não letais"

 "Da forma que eu vejo, se eu ganho nós alcançamos uma utopia mágica,se minha irmã ganha nada acontece."

 
1."Na verdade eu acho que você está certo"
 2."Sinceramente? Acho que deveria ter ido com o Yoonir"
 3."Eu prefiro não me envolver sabe..."

 scanf(%i,&aclear(}while(a<1||a>3 if(a==1){clem[14]=0;
"Ei, obrigado! Eu acho que esse deveria ser o objetivo sabe? De todos nós, de todo mago. Conseguir despertar o restodo mundo, levar para eles o que nós temos. Até onde eu seio Rei é a única coisa que já teve alguma chance de conseguir isso,pode ser a única chance que a humanidade vai ter de despertar."} else if(a==2){clem[14]=1;
"Eu não te culpo, o lado deles é a opção segura mesmo, pode irpara o lado deles se quiser. if(clem[10]){ 
Eu só não sei como ele vai lidar com toda a situação de nós termos atirado nele, boa sorte com isso. }if(clem[9]){ 
Mas o olho fica comigo, Obrigado por me ajudar a conseguir, mas eu não vou simplesmente entregar ele.}
"} else if(a==3){clem[14]=2;
"Hun? Sério?" Ele dá um sorriso debochado "É seu destino,meio difícil de não se envolver com eleif(path==0){ 
 umif(gen){
a }
 Acanthus deveria saber disso. Mas você é nov if(gen){
a } else{
o } 
, eu entendo.}else if(FATE){ 
 você também viu não foi? A força que te impulsiona na direção dos artefatos?}else{ 
.}
 É claro que eu não vou te obrigar a nada, mas eu duvido quevocê não vá encontrar mais artefatos 'surgindo' no seu carro"}} //Fim dos papos sérios


1.Continuar...

 scanf(%i,&a clear(//Brinquedo novo if(clem[9]){ do{if(clem[8]){
Yoonir tira o cristal do bolso do casaco e começa a examina-losobre a mesa.} else{
Janus então tira o olho de cristal do bolso e começa a estuda-locontra a luz.} 


1."Mas... ele faz alguma coisa?"
 2."Vocês quase se mataram por um pedaço redondo de vidro"

scanf(%i),&a;clear(}while(a<1||a>2 if(clem[8]){if(a==1){ 
"Não tenho certeza. O Hélio geralmente verifica os que nós conseguimos para saber se são encantados de alguma forma}else if(a==2){ 
"Além de ser uma parte do tirano que pode destruir toda nossa civilização. Eles geralmente são artefatos poderosos por si só. Hélio vai saber dizer que habilidades ele tem}if ((PRIME>0)&&(clem[14]!=1)){ 
, se você tiver habilidade com o Arcana de Primórdio talvez consiga, quer tentar?}
"if ((PRIME>0)&&(clem[14]!=1)){ do{ 


1.Tentar [Primórdio]
2.Não tentar

 scanf(%i,&a clear( }while(a<1||a>2if(a==1){
Ele te entrega o cristal, você segura ele e observacom muita atenção a aura mágica ao seu redor. A mesmaque você conseguia ver no banco de trás do seucarro, porém vendo de perto e com calma você consegueler a magia como um livro.

 Parecem dois encantamentos, ambos associados a visão, o queparece adequado, você pensa. Um é estruturado de talforma que sugere ampliação, como se permitisse enchergarem várias direções ao mesmo tempo, você tem a impressãode que é uma magia de Espaço. O outro parece tratarde ver algo que geralmente é invisível, você tem aimpressão de que é uma magia do arcana Morte, mas é sóo que você consegue descobrir.

 Você devolve o olho e conta o que conseguiu entenderpara Yoonir, ele te esclarece sobre a segunda magia.

 "Provavelmente um encantamento para ver fantasmas. Ah, sim , fantasmas existem também, vá se acostumando a essetipo de surpresa, é saudável manter uma mente aberta a partir deagora" } else if(a==2){
"Ok então. Hélio sempre gosta de explicar os artefatosde qualquer forma." }}} //Brinquedo novo Januselse{if(a==1){ 
"é o que eu estou vendo agora, todos os que nós achamos até agora faziam...}else if(a==2){ 
"É, mas todo artefato também vem com poderes, esse aqui por exemplo...}
 Parece que te dá o poder de ver fantasmas, if(path==2){ 
 não é muito útil paraif(gen){
uma } else{
um } 
 necromante como você. Vocês já fazem isso.}else{ 
 falando nisso fantasmas existem. Dizem que vampiros e lobisomens também, mas sei lá, eu nunca vi.}
 Hum, acho que também te dá aquele poder do arcana de Espaço,de enchergar em 360 graus. Eu sei que nós precisamos de todoseles, mas eu já vi melhores."} }


1.Continuar...

 scanf(%i,&a clear(//Brinquedo novo enddo{ if(clem[8]){ 
Ele termina o sanduíche e joga a embalagem e a garrafa de águavazias em uma lixeira próxima.

 if(clem[14]==0){
"Então? Vamos? O pessoal vai ficar feliz em ver que você está donosso lado. Principalmente a Moira"}else if(clem[14]==1){
"Então? Você vem comigo ou realmente concorda com Janus?Não se preocupe, eu não vou te largar aqui no meio da estrada se disser que não,te deixo em algum lugar antes de voltar para o meu grupo. Quem sabe você não mudade ideia no caminho"}else if(clem[14]==2){
"Então? Vem comigo? Eu posso te deixar em algum lugar se realmentenão quiser nos ajudar, mas seria ótimo se você pensasse noassunto"}}else{ 
Ele termina o café, já um tanto frio em um só gole, e rudimentarmente fecha o pacote de biscoitos com um pedaço daprópria embalagem e coloca-o no bolso.

 if(clem[14]==0){
"Então você vem comigo né? Vai se juntar ao team Janus?"}else if(clem[14]==1){
"Vamos? Eu te dou uma carona até algum lugar, se você aindaquiser se juntar ao Yoonir eu até ligo para ele para vocêsse encontrarem"}else if(clem[14]==2){
"Vamos? Eu te dou uma carona até algum lugar, se você quisermesmo tentar fugir do seu destino. Ou você pode se juntar anós de uma vez."} }


Antes que você possa responder de qualquer forma, você sente uma dor aguda perna direita. Como se todos os seus nervos disparessem ao mesmo tempo de uma vez só e então parassem. Mas você ainda sente uma estranha pressão acima do joelho.


"O que houve?!"

 if(clem[8]){
Yoonir } else{
Janus }
 pergunta, preocupado. Ele olha para você e para sua perna, mas não parece haver nada de errado. Você vê ele fazendo um curto gesto próximo dos olhos, alguma magia de visão provavelmente.

"Wow! Você consegue ver isso?"

if((path==0)||((FATE>0)&&(mana>0))){
1.Usar visão mágica[Destino]if(path!=0){
(-1 Mana)}clem[15]=1; }else if((path==1)||((SPACE>0)&&(mana>0))){
1.Usar visão mágica[Espaço]if(path!=1){
(-1 Mana)}clem[15]=2; }else{
1."Não"clem[15]=0; }


 scanf(%i,&a clear( }while(a!=1if(clem[15]==1){
Você esfrega seus olhos, e se concentra em tentar enchergar osfios do destino ao seu redor }else if(clem[15]==2){
Você abre os olhos, tentando enchergar as conexões ao redor devocê além dos conceitos de proximidade e distância }else if(clem[15]==0){
"Você não deve ter o arcana. Aqui!"

 if(clem[8]){
Ele toca sua testa}else{
Ele toca sua testa com a moeda} 
. Você sente a magia recaindo sobre a sua visão,if(clem[8]){
você encherga as conexões além das distância entre entre as coisas. Como um magohábil no arcana de Espaço faria}else{
você encherga os fios do destino ao seu redor}}
.

Ao redor da sua perna, você consegue ver um emaranhado de fios dourados, presos a matriz da sua alma mágica, mas também presos especificamente a sua perna. Os fios se estendem além do posto de gasolina, atravessando vários quilómetros em uma linha reta incorpórea que desaparece no horizonte.


if(clem[8]){
Yoonir se vira para você if(clem[14]==0){
, sorrindo.

"Acho que eu vou ficar te devendo a carona. Eu vou ligarpara a Moira e avisar que if(clem[9]){ 
vamos ter um olho e uma perna para entregar a ela"}else{ 
não conseguimos o olho, mas vamos voltar para casa com a perna"}} else if(clem[14]==1){
, sério.

"Desculpe, mas agora eu vou ter que insistir que você trabalheconosco"} else if(clem[14]==2){
.

"Eu sei que você já fez bastante por mim, mas acho que vouprecisar da sua ajuda mais uma vez."}}else{
Janus se vira para você if(clem[14]==0){
, sorrindo.

"Se precisar ir ao banheiro vai agora! Por que eu pretendoseguir essa linha até o meu próximo pedaço de Rei!"} else if(clem[14]==1){
.

"Mudança de planos. Você não precisa me ajudar, mas eu comcerteza não vou te entregar para minha irmã tão fácil assim"} else if(clem[14]==2){
, sorrindo.

"O que foi que eu disse? Como você pretende fugir disso?Seu destino está literalmente amarrado a sua perna"}}sleep(
01

***********************************Fim************************************sleep(2


1.Continuar...

 scanf(%i,&a system(clsdo{ 
1.Fechar
2.Créditos

 scanf(%i,&a system(cls}while(a<1||a>2if(a==1){ 
Obrigado por jogar! sleep(3}else if(a==2){
Roteiro
 Programação
 Desenvolvimento
 Lead Designer
 Produtor
 Voice Acting
 Continuísta ......................... Igor "Jerry" Carneiro sleep(4system(cls 
Assistência técnica
 Consultoria de Programação ............ Lucas Santos de Souza sleep(4system(cls 
Playtesters ........................... Cícero Demetrio
 Lucas dos Santos Silva sleep(4system(cls 
Pessoas que me aturaram falando desse jogo o tempo todo
sleep(3system(cls
Pessoas que leram os textos que eu mandava quando eu já estava perdendo a motivação para terminar isso
sleep(4system(cls 
Pessoas que perguntaram "E aí? Como ta indo aquela parada?"
sleep(4system(cls 
Pessoas que aguentaram eu mestrando um RPG sem nunca saber todas as regras
sleep(4system(cls 
Pessoas que em momento nenhum disseram pra eu fazer alguma coisa melhor com meu tempo

sleep(4system(cls 
.Caio Calheiros
sleep(1
.Cícero Demetrio
sleep(1
.Hannah Carolina
sleep(1
.Julia Lacerda
sleep(1
.Lucas dos Santos Silva
sleep(1
.Matheus Abreu
sleep(1
.Matheus Martinez
sleep(1
.Rafael Rosário
sleep(1
.Vinícius Farinha

sleep(1 
Se eu um dia conseguir fazer mais desses, de verdade, é graças avocês. sleep(5}return (EXIT_SUCCESS}//main endvoid tronco_mudei(){clem[0]=3;
Você coloca as mãos sobre a madeira, observando com calma, se ntindo a energia vital que te chamou a atenção, você percebe oquão simples ela é, básico como um único acorde ou uma frasesolta. Simples o bastante para compreender completamente sem es forço, simples o bastante para alterar uma letra e formar outr a palavra.

Você imagina algo vivo, porém menor, mas a árvor e é grande, você tem matéria prima para muitos seres menores.Algo simples, algo leve, uma frase de poucas letras, uma imagemde poucas formas. O corpo, reto, magro. Dois círculos, finos c omo se de papel, leves, por que não coloridos, ? Pernas, antena s, orgãos e outros detalhes. Você cria uma imagem perfeita nasua mente, sua imaginação se acumulando como um músculo tensio nado. Com uma figura perfeitamente clara em mente você arremes sa sua vontade sobre o tronco,if(dox(30,0)){//Paradoxo
mas algo dá errado.

A imagem que você criara se deforma na s ua frente, as asas da borboleta encolhem e endurecem, ficam es curas e grudam no corpo como uma carapaça. A transformaçãocomeça e o tronco começa a tomar forma. Em pequenas lascas, p artes do tronco criam pernas e se desgrudam, a madeira então c ria cabeça, antenas e a carapaça brilhante, e as baratas corremou voam para longe, algumas passando sobre suas pernas ou voa ndo rente ao seu rosto. Cada vez mais delas rastejando sobre v ocê, até um grande en xame ter se formado sobre todo seu corpo, te arranhando e mord endo antes de desaparecerem na escuridão [-1 Saúde]. Todas finalmente sae m, e você pode se levantar. dmg_dox++;clem[5]=1;} else{
e a realidade cede.

Em peque nas lascas, partes do tronco criam pernas e se desgrudam. Em s eguida criam grandes asas coloridas, e voam para longe, inicia lmente uma por uma, logo mais e mais, até que estão saindo as d ezenas de cima de você. Em um pequeno turbilhão de cores e cen tenas de asas batendo as últimas borboletas levantam voo, leva ndo o que restava do tronco com elas.}}void tronco_queimei(){clem[0]=2;
Alguns metros a sua direita um carro (provavelmente seu carr o) se encontra com o parachoque ao redor de um poste de luz, ocapô aparentemente voou juto com você e está em algum canto e scuro da beira da estrada, toda a parte da frente do carro est á em chamas. Não está próximo o bastante para que você sinta m iuta coisa além de uma ocasional onda de calor quando o ventobate. Curiosamente você sente as ondas de calor de forma dife rente, o calor tem textura e cor, se você se concetrar pode ve r ao redor das chamas ele se dissipando no ar frio da noite. C omo corante em um vidro de água, subindo em ondas, sendo dispe rsado pelo vento.

O fogo poderia te ajudar, queimar esse t ronco para que você pudesse se mover. Você poderia traze-lo a té aqui, você estica o braço na direção das chamas, muito long e com certeza, mas um vento mais forte bate, o calor é empurra do na sua direção e você agarra um punhado, uma onda de calor,segura na sua mão como uma porção de areia. Você abre a mão eele se dispersa no ar, não bastaria de qualquer forma, você p recisa do fogo.

Na sua mente você vê, uma corda, um laço,um conduite para as chamas, para traze-las até aqui, você imag ina e refina a ideia até ser um conceito perfeito na sua mente , então arrmessando o braço na direção do fogo você impõe suavontade sobre realidade. Como em um show pirotécnico uma labared a voa pelo ar e cai sobre o tronco. Ali você pode cuidadosamen te guiar a chama e o calor por entre os veios da madeira e con centrar a chama o bastante para que você possa quebrar o tronc o em alguns minutos. Depois de controlar o próprio fogo foi si mples o bastante não se queimar no processo, mas não foi possí vel fazer nada quanto a fumaça e cinza cobrindo seu corpo. }void tronco_matei(int life){clem[0]=1;
Mesmo sendo um tronco de bom tamanho você imagina que poderia tira-lo dali se fosse mais secos e oco, como uma árvore morta.if(!(life)){
Ela ainda parece estar viva na verdade } else{
Você sabe que ela ainda está viva }
, bastante ferida porém viva. Você passa as mãos ao longo do tro nco, imaginando como sair dali, mas acidentalmente causa um cor te, abre um pequeno buraco. Como que por um rasgo invisível vo cê sente o pouco que restava de vida naquele tronco escorrendosobre suas mãos. Em pouco tempo você tem certeza que ele estámorto, porém continua tão pesado quanto.

Ignorando por ummomento as consequências morais de ter matado um vegetal vocêfoca sua atenção no cadáver sobre você. Qual era mesmo seu obj etivo? Que a madeira apodrecesse e inchasse, depois se tornass e ressacada e esbranquiçada, oca e frágil, um esqueleto da árvo re que foi. Privado da proteção da vida o vácuo da morte corro endo-o até que se tornasse nada.

Tudo isso está acontecendo , você sente, porém muito mais devagar do que p recisaria ser, impaciente você toma a morte nas próprias mãos,você lixa e maretela o tronco, esculpindo em madeira e decadê ncia a perfeita imagem da árvore morta que você imaginou.

V ocê observa sua obra concluída, qualquer um diria que aquela á rvore caíra a anos atrás, o casco branco e trincado, o interio r oco e apodrecendo. Sem muito esforço você joga-o para o lado , vendo-se livre para levantar.}void tronco_amassei(){clem[0]=4;
Com as mãos sobre a árvore você se põe a analisar a madeira, procurar por um ponto falho ou espaço onde pudesse conseguir um ponto de apoio melhor. Frustrado na tentativa de procurar a solução na superfície, o interior do tronco parece mais promissor, não o centro de madeira sólida, mas sua composição. Você vê na sua frente, claro como um livro tudo o que a madeira é, como ela age e reage.

 Você desfaz aquela informação, quebra tudo em pedaços como se recortasse letra por letra do livro, para então, com todo o alfabeto disponível reescrever a história. Ponto por ponto você faz o tronco menos madeira, até que forma uma imagem mental perfeita de como você deseja que ele se torne. Com a imagem perfeitamente em ordem, como uma planta construída de recortes dos planos para outra casa, você impõe sua vontade sobre a realidade.if(dox(30,0)){


Porém algo dá errado, você sente algo tentar interferir nos planos que você escreveu, como se uma mão fria, muito fria tocasse seu ombro antes que você possa terminar de transformar o tronco. Como se ele quisesse os planos que você escreveu para ele.

O porteiro! Do seu sonho, ele te seguiu até aqui, você deveria estar morto certo? E aqui você, está tentando fazer... O que exatamente é isso?

Você se move assustado, alguma coisa dentro de você doi. Dor de mais para alguém que deveria estar morto, mortos não sentem dor, você se lembra muito bem. Foi apenas uma dose de paranóia, respirando fundo e se concentrando você não tem problemas em transformar o tronco em um grande cilindro de isopor que é empurrado para o lado com facilidade.

Embora você não tenha certeza se o hematoma no seu ombro estava ali quando você acordou. [-1 Saúde]dmg_dox++; clem[5]=2; }else{
Respirando fundo e se concentrando você não tem problemas em transformar o tronco em um grande cilindro de isopor que é empurrado para o lado com facilidade. } }void tutorial_mana(int path){int b;
*******************************************************************************
Existem duas situações em que você utiliza mana, algumas magias mais poderosas sempre vão precisar de um ou mais pontos de mana para serem utilizadas. E qualquer magia que não seja dos seus arcanas principais, que no seu caso sãoswitch(path){ case 0: 
Tempo e Destinobreak; case 1:
Espaço e Mentebreak;case 2:
Matéria e Mortebreak;case 3:
Forças e Primórdiobreak;case 4:
Vida e Espíritobreak;}
, custa um ponto de mana a mais para ser usada.
*******************************************************************************
 


1.Continuar...

 scanf(%i, &bclear(}void tutorial_dox(){int b; 
*******************************************************************************
As vezes, distorcer a realidade pode ter consequências graves. Usar magia de forma que poderia ser confundida com sorte, coincidência, ou algum fenômeno estranho porém sutil é geralmente inofensivo. Porém feitos realmente impossíveis que desafiem as leis naturais podem resultar em paradoxos. A realidade resiste a ser alterada, podendo fazer sua magia falhar, agir de forma inesperada ou te ferir de alguma forma. Dano causado por paradoxo não pode ser curado com magia e é indicado por um X na sua barra de saúde. Opções que tenham risco de paradoxo vão estar indicadas por um (P), seguido da chance do efeito ser bem sucedido e o paradoxo NãO acontecer. Forçar a realidade repetidamente é perigoso, cada vez que você arrisca causar pardoxo (ele ocorrendo ou não) as chances de controlar os próximos diminuem.
*******************************************************************************
 


1.Continuar...

 scanf(%i, &bclear(}void tutorial_roll(){int b;
*******************************************************************************
Algumas situações arriscadas, difíceis ou perigosas vão ter uma chance de falhar, essas opções vão estar indicadas por um (C), seguido da chance da ação dar certo. O principal fator que influencia suas chances é sua saúde, mas suas escolhas ao longo do jogo também podem facilitar ou dificultar certas ações. Falhar em uma ação nunca significa o fim do jogo, apenas pode trazer consequências desagradáveis ao longo da história.
*******************************************************************************



1.Continuar...

 scanf(%i, &bclear( }void heal(){clear(
Você se concentra no seu corpo, nos seus ferimentos, nas suas células, cada corte e contusão é clara como um farol para você. Com a destreza de uma tecelã, você liga músculos e emenda pele, absorve hematomas e solda ossos. Você restaura seu corpo a imagem de saúde perfeita que é possível a um ser humano.if(dmg_dox){
 Execeto pelo //Lifeif(clem[5]==1){
s arranhões e mordidas nas suas pernas. Aquelas baratas de algu ma forma feriram mais do que o seu corpo, rasgando e cortandopartes do seu ser fundamental.}//Matterelse if(clem[5]==2){
 hematoma no seu ombro. A mancha escura é um ferimento bem alémdo seu corpo, tendo ferido seu ser fundamental.} 
 você não consegue se curar pois a formaif(clem[5]==1){
das suas pernas saudáveis e intactas } else if(clem[5]==2){
do seu ombro saudável e intacto }
 deixou de existir. Temporáriamente claro... você tem quase certeza.}dmg=0; }void car(){extern int tut_mana;int chance=75; int a; int ok; int b=0; //1 Morte 2 Forças int m=0; do{clear( 
O incêndio parece estar de certa forma contido a parte da frente do carro, mas mesmo assim você se aproxima com cuidado, isso com certeza não é de forma alguma seguro.) ; if(PRIME){
A aura com vem do banco de trás, mais que uma luz colorida você a percebe com todos os seus sentidos. Ela irradia uma energia fria e rígida, que lembra metalao tato, mas cheira a algo como incenso, com certeza tem um tipo de presença poderosa if(path==2){ 
, você não consegue deixar de pensar o quanto tudo te faz lembrar do cemitério e das sombras do seu sonho } }
.

Se arriscando um pouco mais de perto, você pode verif(PRIME){
a origem do brilho.}else if(FATE){
o objeto que te atraiu até o carro.}
Largado do lado do cinto de segurança, uma pedra arroxeada, do tamanho de uma bola de gude. Você precisaria pega-la para enxergar mais do que isso, a porta parece trancada, porém o vidro quebrou no acidente, de forma que talvez seja possível alcançar o interior, mas você corre o risco de se queimar.clem[8]=1;



1.Arriscar e pegar a pedra pela janela (C)%i%%, (calc_roll(chance,0))

2.Deixar ela onde está//Criar um matter para destrancar a porta if(((FORCES>0)+(DEATH>0)+(MATTER>0))>0){ 

3. if(FORCES){
Reduzir as chamas[Forças]if(path!=3){ 
(-1 Mana)} } else if(DEATH){
Reduzir as chamas[Morte]if(path!=2){ 
(-1 Mana)} } else if(MATTER){
Destrancar a porta[Matéria]if(path!=2){ 
(-1 Mana)}}}if(((FORCES>0)+(DEATH>0)+(MATTER>0))>1){

4. if(DEATH&&FORCES){
Reduzir as chamas[Morte]if(path!=2){ 
(-1 Mana)} }else if(MATTER){
Destrancar a porta[Matéria]if(path!=2){ 
(-1 Mana)}} }


 scanf(%i,&aclear(//Scansif(a==1){//Pegarif((roll(chance,0))){//Sucesso
Você provavelmente vai se queimar feio se encostar no carro.O metal deve estar quente o bastante para deixar bolhas,mas o plástico nem tanto. Apoiadif(gen){ 
a}else{ 
o}
 em um detalhe opaco de plástico na lateral da porta você consegue se debruçar janela a dentro e agarrar a pedra. Vocêteme que ela também esteja quente, mas na verdade ela équase gelada ao toque.clem[3]=1;} else{
Você tem certeza que não deve tocar no metal, mas a pedra está de certa forma fora do seu alcance. Meio sem jeito e com medo de se queimar você tenta se debruçar janela a dentro.As pontas dos seus dedos tocam a pedra, se esticando um pouco mais você consegue coloca-la entre dois dedos, quando você tenta levanta-la ela escorrega e rola ao longo do banco,ameçando cair no chão e ficar completamente fora de alcance.Você rapidamente se apoia na porta do carro e agarra o cristal, a queimadura no abdomem dói, mas você vai viver. [-1 Saúde]dmg++;clem[3]=1;} clem[3]=1;ok=1;}else if(a==2){//Deixa pra lá
Seja lá o que for não vale o risco de se machucar mais ainda, n em de passar tanto tempo ao lado de um motor em chamas.ok=1; }else if(a==3){if(((FORCES>0)+(DEATH>0)+(MATTER>0))>0){ if(FORCES){//Forçasok=mana_check(1,3if(ok){ b=2;} } else if(DEATH){//Morteok=mana_check(1,2if(ok){ b=1;} }else if(MATTER){ //Matériaok=mana_check(1,2if(ok){ m=1;}}}else{ok=0;}}else if(a==4){ if(((FORCES>0)+(DEATH>0)+(MATTER>0))>1){ if(DEATH&&FORCES){ok=mana_check(1,2if(ok){ b=1;}}else if(MATTER){ok=mana_check(1,2if(ok){ m=1;}//printf do arc4} }else{ok=0; } } else{ok=0; } }while(ok==0if(b){clear( clem[2]=1;//Carro apagadoclem[3]=1;//Olho conseguido 
Você consegue sentir o calor emanando do metal e das chamas if(b==1){
, simples energia como qualquer outra, que você pode suprimir.} else{
, uma aura avermelhada e palpável que você consegue moldar.} 
 Sem nenhuma dificuldade você comprime e diminui as chamas, atése extinguirem. Então cuidadosamente tocando no metal vocêif(b==1){
consome} else{
dissipa} 
 o calor que cobria a porta do carro. Tornando perfeitamente se guro se apoiar nela para alcançar a pedra. }if(m){
A tranca da porta parece ter sido danificada no acidente, na ve rdade você tem certeza que foi. Você consegue sentir as peçasde metal intercaladas, ver todos os mecanismos complexos alémda lataria do carro, como se o projeto do carro fosse col ocado na sua frente. Se concentrando na porta você rapidamenteencontra o problema, prontamente imaginando aquelas peças rep aradas você consegue destrancar a porta, e com cuidado abri-lasem se queimar. Quem sabe com tempo o bastante você possa atérecuperar esse carro.clem[3]=1; }if((b>0||m>0)){


1.Continuar...

scanf(%i,&aclear( }if(clem[3]){
Com a pedra em mãos você consegue observa-la mais de perto. Elaparece ser feita de três "camadas", a mais externa completa mente transparente como vidro, dentro dela, uma esfera menor,também transparente, mas tingida de púrpura, e no centro uma p edra ainda menor, opaca e brilhante, e completamente negra.

 Ela parece ter sido feita com a intenção de se assemelhar a umolho } }int cat(int n){clear(int b = 0; int a;//Caso o jogador tenha espírito 2 if(SPIRIT>1){b+=10; }//Caso o jogador tenha espaço + espírito e tenha visto o espírito anteriormente if (n){ b += 10; do{clear( 
Você se vira e vai na direção do espírito, você questiona por um se gundo se deveria tentar falar com ele ou só chama-lo com asso bios como um gato. Antes que você pudesse decidir ele se virae foge, disparando entre as árvores. 


1.Perseguir o espírito (C)%i%%,(calc_roll(60,b))

2.Desistir e voltar


scanf(%i,&a}while(a<1||a>2 //Se o jogador desiste, retorna x1=1 e ok=0 volta pras opções, sem essa opçãoif(a==2){return(1}//Jogador não desiste, segue para um ponto comum APRENDE A FAZER PONTOS COMUNS!!!!else{clear(}}//Sucesso if(roll(60,b)){ clem[1]=2;//Viu tudo sobre o gato 
O gato corre e salta por entre as árvores, mas você consegue acompan ha-lo de perto. Porém ele é rápido de mais para realmente alcançar.if(SPIRIT>1){


[Espírito+]
Um galho baixo te impede a passagem e te atrasa, você começa a perde-lo na escuridão, instintivamente vocêgrita "Pare!". E ele para, obedecendo seu comando, o espírito subtamente para de fugir e senta no chão, te olhandocomo se esperasse outro comando.} else{
Sempre próximo porém nunca realmente parando-o, você chegaaté uma parede de pedra, encurralando o espírito. Você poderia pega-lo agora. Ele vira para te encarar e senta,como se te desafiasse a se aproximar.} 


Mas antes que você possa responder de qualquer forma você s ente um calafrio na base da espinha. Uma pedra ao lado do gatocomeça a brilhar com uma suave luz dourada if(SPACE){
 você pode sentir o espaço se distorcendo ao redor daquele ponto} 
. O feixo de luz se abre, e forma o limiar de um portal, conecta ndo a floresta a uma sala de estar bem mobiliada, como se simplesmente houves se um apartamento dentro da rocha. Do out ro lado, uma jovem, em torno dos seus vinte anos, de cabelos l oiros presos em um rabo de cavalo e olhos verdes. "Fortuna!"ela chama if(SPIRIT>1){
, tirando a gata do transe} 
. O espírito então se vira e salta portal a dentro, caindo nosbraços da sua... dona?

A passagem imediatamente se fecha ea luz desaparece if(SPACE){
, você pode ver que ainda existe uma tênue conexão entre osdois pontos que o portal ligava, mas você é incapaz de determinar de onde a gata veio} }//Fail else{
O gato corre e salta por entre as árvores, mas você consegue acompan ha-lo de perto. Porém ele é rápido de mais para realmente alcançar.
Um galho baixo te impede a passagem e te atrasa, você começa a perde-lo na escuridão,quando se recupera ainda pode ouvir ele correndo mais adentro na mata fechadae corre para alcança-lo.

O som subtamente para, e você acelera. A única trilhaacaba em um parede de pedra, mas o espírito parece ter conseguido te despistar } 
.

Você decide voltar até o seu carro. clem[4]=1; return 0;}void help(){ clear(
A estrada se encontra completamente vazia, no escuro você não consegue ver nenhum ponto de referência no horizonte. Você instintivamente apalpa seus bolsos, você tinha um celular com certeza, provavelmente ele foi lançado com o impacto, talvez ele tenha tido a mesma sorte que você. Procurando ao redor do local em que você acordou e eventualmente um pouco além das árvores, você encontra várias migalhas de plástico e metal ao pé de uma árvore. Antes ele que a sua cabeça, você pensa.clem[4]=1;}void eye_grab(){int a;
 Embora pareça um tanto difícil de alcançar, considerando que a porta não parece estar abrindo e o metal está quente de mais para se apoiar sobre.


"Eu acho que tive uma ideia. Considere seu primeiro exemplo prático de magia."


1.Continuar...

 scanf(%i,&a clear(do{ 
Ele esfrega as mãos e agita os braços como um ginasta prestes a se apresentar, depois de uma combinação de gestos exagerados que você imagina serem mais uma tentativa de te impressionar do que realmente relacionados a magia, você consegue realmente sentir algo acontecendo.

Metade do corpo do mago começa a irradiar um suave brilho prateado, e a outra metade parece sutilmente descolorida, como uma foto saturada dada vida. Ondas brancas de energia luminosa fluem ao longo dosbraços de Janus até se acumularem em uma nuvem reluzente entre suas mãos. Dos braços estendidos duas sombras emergem, uma prateada, outra opaca, as duas rapidamente dão forma a nuvem de mana e tudo imediatamente desaparece, deixando Janus segurando um par de longas pinças metálicas.

Ele olha na sua direção com um olhar ansioso, esperando sua reação.


1."Isso foi incrível! Eu também posso fazer isso?"
2."Uau... Pinças, os pobres mortais devem tremer sob seus pés"
3."Eu acho que aprendi nada. O que foi tudo isso? Exatamente?"


 scanf(%i,&a clear( }while(a<1||a>3if(a==1){
"Talvez, isso na verdade é o que nós chamamos de taça, mana da da forma sólida, as vezes elas se formam naturalmente como frutasou pedras em lugares especiais. Mas criar um dessa forma é umamagia de Primórdio um pouco avançada." }else if(a==2){
"Ei! Não desmereça minha magia, é bem difícil modelar mana emcoisas desse tipo. Pedras, caixas, vasos, fácil. Mas coisas compartes móveis?" Ele abre e fecha os pegadores para ilustrar ocomentário "Outro nível, requer muito mais habilidade" }else if(a==3){
"Bem, eu canalizei mana para fora do meu corpo e dei a ela for ma física. É o que nós chamamos de taça, elas se formam natura lmente em alguns lugares especiais. Mas o que eu acabei de faz er é uma magia de Primódio." }


"De qualquer forma as pinças são mais uma ilusão do que reais, elas se desfazem em alguns minutos, e não são tão resistentes quanto metal de verdade. Então se me dá licença"

Se colocando ao lado da porta do carro ele consegue facilmente pescar o cristal.clem[3]=2; //Janus pega o olho


1.Continuar...

 scanf(%i,&a clear(
"Geralmente o melhor a fazer é absorver essa mana de novo antesque ela se dissipe no ar.//Bonus de mana if(mana<5&&PRIME){ do{
 Mas aqui, por que não fica pra você?" 


1.Aceitar[Primórdio](+1 Mana) 
2.Recusar

 scanf(%i,&aclear( }while(a<1||a>2 if(a==1){
Segurando a pinça você consegue facilmente sentir como é falsa, feita de mana, não metal. Como alguém que desfia um suéter puxando um fio solto você rapidamente retona ela a suamatéria prima, armazenando a mana dentro de você.mana++;}else if(a==2){
"Quanta educação!" Ele franze o queixo em uma expressãodebochada "Mas mana pode ser mais difícil de conseguir poraí do que parece" Ele dobra os pegadores como se fosse quebra-los ao meio, o falso metal se desfaz na mesma energiabranca que você viu antes, que é canalizada para o peito de Janus.}}else{
 Ele dobra os pegadores como se fosse q uebra-los ao meio, o falso metal se desfaz na mesma energiabranca que você viu antes, que é canalizada para o peito de Janus. }


1.Continuar...

 scanf(%i,&aclear(if(!(clem[8])){ //Janus mostra a pedra
Você pede para ver a pedra, já que ainda não teve a chance de vê -la de perto, Janus abre a palma da mão para você examina-la, m as não te entrega.

Elaparece ser feita de três "camadas", a mais externa completa mente transparente como vidro, dentro dela, uma esfera menor,também transparente, mas tingida de púrpura, e no centro uma p edra ainda menor, opaca e brilhante, e completamente negra.

 Ela parece ter sido feita com a intenção de se assemelhar a umolho 


1.Continuar...

scanf(%i,&a clear( //E caímos para o you are the chosen 1!}}void go_janus(){int ok=0; int a; do{ 
Você continua ao lado de Janus. Yoonir sacode a cabeça desapontado.

"Quando você perceber o erro que cometeu sempre terá a chance de nos procurar" Ele se vira, e começa a correr na direção da floresta.

"Obrigado, mas não deixe ele fugir com o olho! Se você não conseguir desfazer o que ele fez com meus braços vai ter que atirar por mim. Não se preocupe, você não vai matar ele, eu juro."if(PRIME){


[Primórdio]
Você consegue ver uma leve aura na arma de Janus, ela parece encantada de alguma maneira.} if(LIFE||MIND){


if(LIFE){
[Vida]}if(MIND){
[Mente]} 

 
Você sente que a águia que Yoonir estava controlando ainda estápor perto em algum lugar. }//Opção 1 


1.Pegar a arma e atirar (C)%i%%,(calc_roll(65,0))//Opção 2if((1+(TIME>1)+(SPACE>0)+(FORCES>1)+(MIND>0)+(LIFE>0)+(LIFE>0)+(PRIME>0)+1)>=2){ 

2. if(TIME>1){
Voltar no tempo[Tempo+](-1 Mana)(P)%i%%,(100-(calc_dox(30,0)))} else if(SPACE){
Teleportar o olho para sua mão[Espaço]if(path!=1){ 
(-1 Mana)}
(P)%i%%,(100-(calc_dox(30,0)))} else if(FORCES>1){
Usar telecinesia[Forças+](P)%i%%,(100-(calc_dox(30,0)))} else if(MIND){
Usar a águia[Mente]if(path!=1){ 
(-1 Mana)} } else if(LIFE){
Usar a águia[Vida]if(path!=4){ 
(-1 Mana)}} else if(LIFE){
Curar os braços de Janus[Vida]if(path!=4){ 
(-1 Mana)}} else if(PRIME){
Desfazer a magia sobre os braços de Janus[Primórdio]if(path!=3){ 
(-1 Mana)}} else{
Deixar Yoonir escapar com o artefato}}//Opção 3 if((1+(TIME>1)+(SPACE>0)+(FORCES>1)+(MIND>0)+(LIFE>0)+(LIFE>0)+(PRIME>0)+1)>=3){ 

3. if((SPACE>0)&&((1+(TIME>1))==2)){
Teleportar o olho para sua mão[Espaço]if(path!=1){ 
(-1 Mana)}
(P)%i%%,(100-(calc_dox(30,0)))} else if((FORCES>1)&&((1+(TIME>1)+(SPACE>0))==2)){
Usar telecinesia[Forças+](P)%i%%,(100-(calc_dox(30,0)))} else if((MIND>0)&&((1+(TIME>1)+(SPACE>0)+(FORCES>1))==2)){
Usar a águia[Mente]if(path!=1){ 
(-1 Mana)}} else if((LIFE>0)&&((1+(TIME>1)+(SPACE>0)+(FORCES>1)+(MIND>0))==2)){
Usar a águia[Vida]if(path!=4){ 
(-1 Mana)}} else if((LIFE)&&((1+(TIME>1)+(SPACE>0)+(FORCES>1)+(MIND>0)+(LIFE>0))==2)){
Curar os braços de Janus[Vida]if(path!=4){ 
(-1 Mana)}} else if((PRIME>0)&&((1+(TIME>1)+(SPACE>0)+(FORCES>1)+(MIND>0)+(LIFE>0)+(LIFE>0))==2)){
Desfazer a magia sobre os braços de Janus[Primórdio]if(path!=3){ 
(-1 Mana)}} else{
Deixar Yoonir escapar com o artefato}}//Opção 4if((1+(TIME>1)+(SPACE>0)+(FORCES>1)+(MIND>0)+(LIFE>0)+(LIFE>0)+(PRIME>0)+1)>=4){ 

4. if((FORCES>1)&&((1+(TIME>1)+(SPACE>0))==3)){
Usar telecinesia[Forças+](P)%i%%,(100-(calc_dox(30,0)))} else if((MIND>0)&&((1+(TIME>1)+(SPACE>0)+(FORCES>1))==3)){
Usar a águia[Mente]if(path!=1){ 
(-1 Mana)}} else if((LIFE>0)&&((1+(TIME>1)+(SPACE>0)+(FORCES>1)+(MIND>0))==3)){
Usar a águia[Vida]if(path!=4){ 
(-1 Mana)}} else if((LIFE)&&((1+(TIME>1)+(SPACE>0)+(FORCES>1)+(MIND>0)+(LIFE>0))==3)){
Curar os braços de Janus[Vida]if(path!=4){ 
(-1 Mana)}} else if((PRIME>0)&&((1+(TIME>1)+(SPACE>0)+(FORCES>1)+(MIND>0)+(LIFE>0)+(LIFE>0))==3)){
Desfazer a magia sobre os braços de Janus[Primórdio]if(path!=3){ 
(-1 Mana)}} else{
Deixar Yoonir escapar com o artefato}} //Opção 5 if((1+(TIME>1)+(SPACE>0)+(FORCES>1)+(MIND>0)+(LIFE>0)+(LIFE>0)+(PRIME>0)+1)>=5){

5.if((MIND>0)&&((1+(TIME>1)+(SPACE>0)+(FORCES>1))==4)){
Usar a águia[Mente]if(path!=1){ 
(-1 Mana)}} else if((LIFE>0)&&((1+(TIME>1)+(SPACE>0)+(FORCES>1)+(MIND>0))==4)){
Usar a águia[Vida]if(path!=4){ 
(-1 Mana)}} else if((LIFE)&&((1+(TIME>1)+(SPACE>0)+(FORCES>1)+(MIND>0)+(LIFE>0))==4)){
Curar os braços de Janus[Vida]if(path!=4){ 
(-1 Mana)}} else if((PRIME>0)&&((1+(TIME>1)+(SPACE>0)+(FORCES>1)+(MIND>0)+(LIFE>0)+(LIFE>0))==4)){
Desfazer a magia sobre os braços de Janus[Primórdio]if(path!=3){ 
(-1 Mana)}} else{
Deixar Yoonir escapar com o artefato}}//Opção 6if((1+(TIME>1)+(SPACE>0)+(FORCES>1)+(MIND>0)+(LIFE>0)+(LIFE>0)+(PRIME>0)+1)>=6){

6.Deixar Yoonir escapar com o artefato }


 scanf(%i,&a clear(///////////////////////////////////Scans/////////////////////////////////////PARA a==1 if(a==1){ok=1;j_shot( }//PARA a==2 else if(a==2){if((1+(TIME>1)+(SPACE>0)+(FORCES>1)+(MIND>0)+(LIFE>0)+(LIFE>0)+(PRIME>0)+1)>=2){//Tempoif(TIME>1){ok=mana_check(1,99if(ok){j_tempo( }}//Teleportelse if(SPACE){ok=mana_check(1,1 if(ok){j_teleport( }}//Telecinesiaelse if(FORCES>1){ ok=1; j_telecinesia(}//Aguia menteelse if(MIND){ok=mana_check(1,1if(ok){j_aguiam( } }//Aguia vidaelse if(LIFE){ ok=mana_check(1,4 if(ok){j_aguiav( }}//Curaelse if(LIFE){ ok=mana_check(1,4 if(ok){j_cura( }}//Counterelse if(PRIME){ ok=mana_check(1,3 if(ok){j_counter( }}else{ ok=1; j_escape(}} else{ok=0;} }//PARA a==3 else if(a==3){if((1+(TIME>1)+(SPACE>0)+(FORCES>1)+(MIND>0)+(LIFE>0)+(LIFE>0)+(PRIME>0)+1)>=3){//Teleportif((SPACE>0)&&((1+(TIME>1))==2)){ok=mana_check(1,1 if(ok){j_teleport( }}//Telecinesiaelse if((FORCES>1)&&((1+(TIME>1)+(SPACE>0))==2)){ ok=1; j_telecinesia(}//Aguia menteelse if((MIND>0)&&((1+(TIME>1)+(SPACE>0)+(FORCES>1))==2)){ok=mana_check(1,1if(ok){j_aguiam( } }//Aguia vidaelse if((LIFE>0)&&((1+(TIME>1)+(SPACE>0)+(FORCES>1)+(MIND>0))==2)){ ok=mana_check(1,4 if(ok){j_aguiav( }}//Curaelse if((LIFE>0)&&((1+(TIME>1)+(SPACE>0)+(FORCES>1)+(MIND>0)+(LIFE>0))==2)){ ok=mana_check(1,4 if(ok){j_cura( }}//Counterelse if((PRIME>0)&&((1+(TIME>1)+(SPACE>0)+(FORCES>1)+(MIND>0)+(LIFE>0)+(LIFE>0))==2)){ ok=mana_check(1,3 if(ok){j_counter( }}else{ ok=1; j_escape(}} else{ok=0;} }//PARA a==4 else if(a==4){if((1+(TIME>1)+(SPACE>0)+(FORCES>1)+(MIND>0)+(LIFE>0)+(LIFE>0)+(PRIME>0)+1)>=4){//Telecinesiaif((FORCES>1)&&((1+(TIME>1)+(SPACE>0))==3)){ ok=1; j_telecinesia(}//Aguia menteelse if((MIND>0)&&((1+(TIME>1)+(SPACE>0)+(FORCES>1))==3)){ok=mana_check(1,1if(ok){j_aguiam( } }//Aguia vidaelse if((LIFE>0)&&((1+(TIME>1)+(SPACE>0)+(FORCES>1)+(MIND>0))==3)){ ok=mana_check(1,4 if(ok){j_aguiav( }}//Curaelse if((LIFE>0)&&((1+(TIME>1)+(SPACE>0)+(FORCES>1)+(MIND>0)+(LIFE>0))==3)){ ok=mana_check(1,4 if(ok){j_cura( }}//Counterelse if((PRIME>0)&&((1+(TIME>1)+(SPACE>0)+(FORCES>1)+(MIND>0)+(LIFE>0)+(LIFE>0))==3)){ ok=mana_check(1,3 if(ok){j_counter( }}else{ ok=1; j_escape(}} else{ok=0;} }//PARA a==5 else if(a==5){if((1+(TIME>1)+(SPACE>0)+(FORCES>1)+(MIND>0)+(LIFE>0)+(LIFE>0)+(PRIME>0)+1)>=5){//Aguia menteif((MIND>0)&&((1+(TIME>1)+(SPACE>0)+(FORCES>1))==4)){ok=mana_check(1,1if(ok){j_aguiam( } }//Aguia vidaelse if((LIFE>0)&&((1+(TIME>1)+(SPACE>0)+(FORCES>1)+(MIND>0))==4)){ ok=mana_check(1,4 if(ok){j_aguiav( }}//Curaelse if((LIFE>0)&&((1+(TIME>1)+(SPACE>0)+(FORCES>1)+(MIND>0)+(LIFE>0))==4)){ ok=mana_check(1,4 if(ok){j_cura( }}//Counterelse if((PRIME>0)&&((1+(TIME>1)+(SPACE>0)+(FORCES>1)+(MIND>0)+(LIFE>0)+(LIFE>0))==4)){ ok=mana_check(1,3 if(ok){j_counter( }}else{ ok=1; j_escape(}} else{ok=0;} }//PARA a==6 else if(a==6){if((1+(TIME>1)+(SPACE>0)+(FORCES>1)+(MIND>0)+(LIFE>0)+(LIFE>0)+(PRIME>0)+1)>=6){ok=1;j_escape(} else{ok=0;} }//Valor naum existe else{ok=0; } }while(!ok}void go_yoonir(){int ok=0; int a=0;do{
"Ok, eu vou com você" Você responde Yoonir.

"Depois de tudo que passamos juntos, você me troca pelo primeiro que aparece?" Ele brinca, surpreendentemente bem humorado. "Se você mudar de ideia sempre pode nos procurar, mas antes"

Ele pega a moeda de prata e consegue arremessa-la para cima, você sente que ele fez algum tipo de magia. As runas de Yoonir se apagam, e Janus recupera sua coordenação, pronto para atirar.if(LIFE||MIND){


if(LIFE){
[Vida]}if(MIND){
[Mente]} 

 
Você sente que a águia que Yoonir estava controlando ainda estápor perto em algum lugar. }//Opção 1 


1.Segurar a arma (C)%i%%,(calc_roll(70,0))//Opção 2 if((1+(DEATH>0)+(FATE>0)+(FORCES>1)+(LIFE>0)+(MIND>0)+(SPACE>0)+(TIME>1)+1)>=2){

2. if(DEATH>0){
Destruir a arma[Morte]if(path!=2){ 
(-1 Mana)}} else if(FATE>0){
Usar a sorte para protege-lo[Destino]if(path!=0){ 
(-1 Mana)}} else if(FORCES>1){
Desviar a bala[Forças]if(path!=3){ 
(-1 Mana)}
(P)%i%%,(100-(calc_dox(30,0)))} else if(LIFE>0){
Usar a águia[Vida]if(path!=4){ 
(-1 Mana)}} else if(MIND>0){
Usar a águia[Mente]if(path!=1){ 
(-1 Mana)}} else if(SPACE>0){
Teleportar a arma até você[Espaço]if(path!=1){ 
(-1 Mana)}
(P)%i%%,(100-(calc_dox(30,0)))} else if(TIME>1){
Voltar no tempo[Tempo+](-1 Mana)(P)%i%%,(100-(calc_dox(30,0)))} else{
Não se arriscar, deixar Janus dar o tiro} }//Opção 3 if((1+(DEATH>0)+(FATE>0)+(FORCES>1)+(LIFE>0)+(MIND>0)+(SPACE>0)+(TIME>1)+1)>=3){

3. if((FATE>0)&&((1+(DEATH>0))==2)){
Usar a sorte para protege-lo[Destino]if(path!=0){ 
(-1 Mana)}} else if((FORCES>1)&&((1+(DEATH>0)+(FATE>0))==2)){
Desviar a bala[Forças]if(path!=3){ 
(-1 Mana)}
(P)%i%%,(100-(calc_dox(30,0)))} else if((LIFE>0)&&((1+(DEATH>0)+(FATE>0)+(FORCES>1))==2)){
Usar a águia[Vida]if(path!=4){ 
(-1 Mana)}} else if((MIND>0)&&((1+(DEATH>0)+(FATE>0)+(FORCES>1)+(LIFE>0))==2)){
Usar a águia[Mente]if(path!=1){ 
(-1 Mana)}} else if((SPACE>0)&&((1+(DEATH>0)+(FATE>0)+(FORCES>1)+(LIFE>0)+(MIND>0))==2)){
Teleportar a arma até você[Espaço]if(path!=1){ 
(-1 Mana)}
(P)%i%%,(100-(calc_dox(30,0)))} else if((TIME>1)&&((1+(DEATH>0)+(FATE>0)+(FORCES>1)+(LIFE>0)+(MIND>0)+(SPACE>0))==2)){
Voltar no tempo[Tempo+](-1 Mana)(P)%i%%,(100-(calc_dox(30,0)))} else{
Não se arriscar, deixar Janus dar o tiro}}//Opção 4 if((1+(DEATH>0)+(FATE>0)+(FORCES>1)+(LIFE>0)+(MIND>0)+(SPACE>0)+(TIME>1)+1)>=4){

4. if((FORCES>1)&&((1+(DEATH>0)+(FATE>0))==3)){
Desviar a bala[Forças]if(path!=3){ 
(-1 Mana)}
(P)%i%%,(100-(calc_dox(30,0)))} else if((LIFE>0)&&((1+(DEATH>0)+(FATE>0)+(FORCES>1))==3)){
Usar a águia[Vida]if(path!=4){ 
(-1 Mana)}} else if((MIND>0)&&((1+(DEATH>0)+(FATE>0)+(FORCES>1)+(LIFE>0))==3)){
Usar a águia[Mente]if(path!=1){ 
(-1 Mana)}} else if((SPACE>0)&&((1+(DEATH>0)+(FATE>0)+(FORCES>1)+(LIFE>0)+(MIND>0))==3)){
Teleportar a arma até você[Espaço]if(path!=1){ 
(-1 Mana)}
(P)%i%%,(100-(calc_dox(30,0)))} else if((TIME>1)&&((1+(DEATH>0)+(FATE>0)+(FORCES>1)+(LIFE>0)+(MIND>0)+(SPACE>0))==3)){
Voltar no tempo[Tempo+](-1 Mana)(P)%i%%,(100-(calc_dox(30,0)))} else{
Não se arriscar, deixar Janus dar o tiro}}//Opção 5 if((1+(DEATH>0)+(FATE>0)+(FORCES>1)+(LIFE>0)+(MIND>0)+(SPACE>0)+(TIME>1)+1)>=5){

5.Não se arriscar, deixar Janus dar o tiro}


 scanf(%i,&a clear(////////////////////////////////Scans//////////////////////////////////PARA a==1 if (a==1){ok=1;y_arma( }//PARA a==2 else if (a==2){ if((1+(DEATH>0)+(FATE>0)+(FORCES>1)+(LIFE>0)+(MIND>0)+(SPACE>0)+(TIME>1)+1)>=2){//Destroyif(DEATH>0){ ok=mana_check(1,2 if(ok){y_destroy( }}//Sorteelse if(FATE>0){ ok=mana_check(1,0 if(ok){y_sorte( }}//Desviaelse if(FORCES>1){ ok=mana_check(1,3 if(ok){y_bala(} }//àguia Vidaelse if(LIFE>0){ ok=mana_check(1,4 if(ok){y_aguiav( }}//águia menteelse if(MIND>0){ ok=mana_check(1,1 if(ok){y_aguiam( }}//TPelse if(SPACE>0){ ok=mana_check(1,1 if(ok){y_teleport( }}//Tempoelse if(TIME>1){ ok=mana_check(1,99 if(ok){y_tempo( }}else{ ok=1; y_nope(} } else{ok=0;}}//PARA a==3else if (a==3){ if((1+(DEATH>0)+(FATE>0)+(FORCES>1)+(LIFE>0)+(MIND>0)+(SPACE>0)+(TIME>1)+1)>=3){//Sorteif((FATE>0)&&((1+(DEATH>0))==2)){ ok=mana_check(1,0 if(ok){y_sorte( }}//Desviaelse if((FORCES>1)&&((1+(DEATH>0)+(FATE>0))==2)){ ok=mana_check(1,3 if(ok){y_bala(} }//àguia Vidaelse if((LIFE>0)&&((1+(DEATH>0)+(FATE>0)+(FORCES>1))==2)){ ok=mana_check(1,4 if(ok){y_aguiav( }}//águia menteelse if((MIND>0)&&((1+(DEATH>0)+(FATE>0)+(FORCES>1)+(LIFE>0))==2)){ ok=mana_check(1,1 if(ok){y_aguiam( }}//TPelse if((SPACE>0)&&((1+(DEATH>0)+(FATE>0)+(FORCES>1)+(LIFE>0)+(MIND>0))==2)){ ok=mana_check(1,1 if(ok){y_teleport( }}//Tempoelse if((TIME>1)&&((1+(DEATH>0)+(FATE>0)+(FORCES>1)+(LIFE>0)+(MIND>0)+(SPACE>0))==2)){ ok=mana_check(1,99 if(ok){y_tempo( }}else{ ok=1; y_nope(}} else{ok=0;}}//PARA a==4 else if (a==4){ if((1+(DEATH>0)+(FATE>0)+(FORCES>1)+(LIFE>0)+(MIND>0)+(SPACE>0)+(TIME>1)+1)>=4){//Desviaif((FORCES>1)&&((1+(DEATH>0)+(FATE>0))==3)){ ok=mana_check(1,3 if(ok){y_bala(} }//àguia Vidaelse if((LIFE>0)&&((1+(DEATH>0)+(FATE>0)+(FORCES>1))==3)){ ok=mana_check(1,4 if(ok){y_aguiav( }}//águia menteelse if((MIND>0)&&((1+(DEATH>0)+(FATE>0)+(FORCES>1)+(LIFE>0))==3)){ ok=mana_check(1,1 if(ok){y_aguiam( }}//TPelse if((SPACE>0)&&((1+(DEATH>0)+(FATE>0)+(FORCES>1)+(LIFE>0)+(MIND>0))==3)){ ok=mana_check(1,1 if(ok){y_teleport( }}//Tempoelse if((TIME>1)&&((1+(DEATH>0)+(FATE>0)+(FORCES>1)+(LIFE>0)+(MIND>0)+(SPACE>0))==3)){ ok=mana_check(1,99 if(ok){y_tempo( }}else{ ok=1; y_nope(} } else{ok=0;}}//PARA a==5 else if (a==5){ if((1+(DEATH>0)+(FATE>0)+(FORCES>1)+(LIFE>0)+(MIND>0)+(SPACE>0)+(TIME>1)+1)>=5){ok=1;y_nope( } else{ok=0;}}else{ok=0; }}while(!ok }// Finale //void j_aguiam() {extern int gen; extern int clem[40]; extern int dmg;
A águia que Yoonir usou para te atacar, ainda está por aqui, perto. Você consegue sentir sua consciência, como um zumbido baixo que você ouve vindo de algum lugar próximo. Ali, em um galho alto, mas ainda perto o bastante.


Você estende sua mente naquela direção, e rapidamente engloba a da águia, encontrando pouca resistência no cérebro simples do pássaro. Você então ordena, "Ataque Yoonir, pegue o cristal, traga-o para mim" A ave não reage, Yoonir já está escapando em meio as árvores. O nome do mago e a palara cristal não significam nada na mente da águia, você rapidamente molda uma imagem do artefato e do mago que escapou, associando com instintos básicos de atacar e recolher que você consegue expressar mentalmente.

O pássaro levanta voo e desaparece entre as árvores. Você não consegue mais ver a águia nem o mago, por alguns segundos você não ouve nada. Então ela surge, do topo da copa das árvores, voando alto ela deixa o cristal cair e você agarra-o no ar.clem[9]=1; clem[10]=0;}void j_aguiav() {extern int clem[40];
A águia que Yoonir usou para te atacar, ainda está por aqui, perto. Você consegue sentir sua energia vital, como um pulsar baixo que você sente vindo de algum lugar próximo. Ali, em um galho alto, mas ainda perto o bastante.


Você tenta dominar a criatura, acessando seus instintos e suas funções corporais você consegue criar um tipo rudmentar de controle sobre ela. Você então ordena, "Ataque Yoonir, pegue o cristal, traga-o para mim" A ave não reage, Yoonir já está escapando em meio as árvores. O nome do mago e a palara cristal não significam nada para águia, você rapidamente dispara alguns instintos de caça e proteção na águia, fazendo ela ter a impressão que teve seu território invadido, tratando o cristal como um filhote ou ovo, e o local em que você está como um ninho.

O pássaro levanta voo e desaparece entre as árvores. Você não consegue mais ver a águia nem o mago, por alguns segundos você não ouve nada. Então ela surge, do topo da copa das árvores, com o cristal seguro em uma garra ela pousa e cuidadosamente baixa o artefato entre um punhado de folhagem ao seu lado.

Com as condições cumpridas, a magia de dissipa e o águia volta a si. Confusa, ela bica o cristal uma vez, e logo em seguida levanta voo.clem[9]=1; clem[10]=0;}void j_counter() {extern int clem[40];
Você foca seu esforço em tentar desfazer o que Yoonir fez. Concentrando sua visão na aura mágica de Janus e do encantamento sobre ele, você consegue sentir o encantamento entranhado no corpo de Janus, uma magia de Vida provavelmente. Cuidadosamente, porém com agilidade, você impõe sua magia sobre a de Yoonir. Como agulhas de uma tecelã, sua aura desfia o encantamento parte por parte, separando a magia da matriz que define o corpo de Janus. Você rompe um último fio, deixando a magia se desfazer no ar, foi um processo cuidadoso, você teme que tenha demorado de mais, mas na verdade apenas segundos se passaram.

As runas desaparecem dos braços de Janus e ele logo toma mira novamente. Ele atira, Yoonir é atingido no braço, deixa o olho cair, mas continua seguindo em direção a floresta. clem[9]=1; clem[10]=1;}void j_cura() {extern int gen; extern int clem[40];
Você se concentra em tentar desfazer o que Yoonir fez. Você rapidamente analisa o padrão de Janus, a matriz mágica que define seu corpo, você encontra uma mancha no padrão. As partes responsáveis pela sua coordenação, seus nervos, diretamente danificados. Cuidadosamente impondo sua magia sobre a de Yoonir, você empunha sua aura como um bisturi, cortando as conexões entre a matriz de Janus e a magia nociva. Precisif(gen){
a } else{
o }
 e ágil você termina em segundos, as runas desaparecem dos braços de Janus e ele logo toma mira novamente.

Ele atira, Yoonir é atingido no braço, deixa o olho cair, mas continua seguindo em direção a floresta.clem[9]=1; clem[10]=1;}void j_escape() { extern int clem[40];
Você continua ao lado de Janus, mas não faz nada enquanto o outro mago escapa com o artefato. O encantamento sobre os braços de Janus logo se desfaz, mas Yoonir já desapareceu entre as árvores.

"Droga! Ok, eu entendo você não querendo atirar nele nem nada assim, mas eu falei sério quando disse que não ia matar ele."clem[9]=0; clem[10]=0;}void j_shot() {extern int clem[40];
Você pega a arma das mãos dele, hesitante, sua memória ainda está confusa, mas mesmo assim você tem quase certeza de que nunca segurou uma arma de verdade antes, ela é pesada de mais, não se acomoda direito nas suas mãos, não é algo que você parece fazer naturalmente. Você tenta grosseiramente mirar, sem habilidade, mas não tem tempo, você puxa o gatilho e espera pelo melhor.

Você fecha os olhos, o recuo da arma e a explosão do tiro são bem maiores do que você esperava.

if(roll(65,0)){
Mas você acerta, a bala atinge Yoonir no ombro, ele deixa o olho cair, mas continua seguindo em direção a floresta. A magia começa a se dissipar dos braços de Janus e elepega a pistola de volta, guardando-a.

 "Ótimo tiro, eu não achei que você ia conseguir" clem[9]=1;clem[10]=1; } else{
Yoonir continua a correr, ileso, um pequeno fio de fumaça sai doburaco de bala de uma árvore ao lado. A magia começa a se dissipar dos braços de Janus e elepega a pistola de volta, guardando-a.

 "Não se preocupe, essa arma é péssima mesmo" clem[10]=0;clem[9]=0; } }void j_telecinesia() {extern int clem[40]; extern int dmg_dox;
Yoonir foge com o artefato nas mãos, carregando o cristal no punho direito, você ainda consegue ve-lo daqui. Você precisa pega-lo de alguma forma antes que ele se afaste de mais. Basta pega-lo certo? Puxar o cristal até você. É muito simples, sua mente recém-desperta visualiza perfeitamente as forças envolvendo o cristal e pruxando-o na sua direção, mas sua alma mágica ainda precisa de um certo apoio físico para superar a realidade.

Você levanta um dos braços a frente do corpo, e estende a palma da mão aberta, dobrando seu dedão, indicador e dedo médio você cria um conjunto de forças ao redor do artefato, um leve brilho dourado escapa do punho fechado de Yoonir.

if(dox(30,0)){
Você hesita por um segundo, o próximo movimento da magia não é tãoclaro, se sua alma estava seguindo instruções, uma sombraparece obscurecer o manual. As forças continuam a se concentrar,você não sabe como prosseguir, e o mago continua a se afastar,mas é tarde de mais para voltar atrás. Você perde o controle, aenergia que você acumulava dispara a esmo, como um elásticoestendido ela volta em sua direção. Algo te atinge como umsoco, como se o próprio ar lhe golpeasse no meio do peito [-1 Saúde].

 O brilho da sua magia se dissipa completamente do cristal que você tentava pegare Yoonir escapa com ele. clem[9]=0;clem[10]=0;dmg_dox++;} else{
Você fecha sua mão em um punho, as forças que você criou se tencionam.O cristal é puxado na sua direção, o mago é quase carregado junto,mas larga o artefato antes de ser arrastado pela areia. Envoltoem uma esfera etéria o olho segue como uma bala em uma perfeitalinha reta até suas mãos. 

Yoonir retoma o equilíbrio, mas nãocontesta sua posse do cristal, voltando a seguir na mesma direção de antes. clem[9]=1;clem[10]=0; }}void j_teleport() { extern int clem[40]; extern int path; extern int dmg_dox; extern int gen;
Você esquece do mago se afastando de você e se concentra no artefato, o olho de cristal nas mãos dele. Você estende a palma da mão aberta em frente ao corpo, com os olhos fixos no cristal você se lembra como descobriu que a distância é uma ilusão, que sua alma mágica pode dobrar o espaço entre dois pontos como uma folha de papel.

Você visualiza o artefato em sua mão e começa a lentamente erodir a imagem de que ele está distante de você. Umaif(path==0){
nuvem de prata }else if(path==1){
aura distorcida} else if(path==2){
sombra anormal} else if(path==3){
aura radiante} else if(path==4){
névoa densa}
se forma ao redor da sua mão, e uma idêntica ao redor da mão de Yoonir. Você estende a mão através do espaçoif(dox(30,0)){
, pront if(gen){
a}else{
o}
 para agarrar o cristal. Mas algo dá errado, você perde o controlepor um segundo e vai longe de mais. Você sente uma pressãosobre sua mão, como um vácuo tentando suga-la, você consegue sentirela ameaçando se desligar do seu pulso, e tem tempo apenas deinterromper a magia antes de perder um membro. Mas mesmo assim,seus ossos doem dos dedos até o cotovelo, como se tivessem tentado puxa-lospara fora do seu corpo.[-1 Saúde]

 Yoonir desaparece entre as árvores com o cristal. dmg_dox++;clem[9]=0; } else{if(path==0){
,a nuvem de prata se transforma em um pequeno redemoinho brilhante,ele passeia por um momento sobre a sua palma, então começa a perdervelocidade até se dissipar, o olho surge dentro dele, e cai na sua mão. }else if(path==1){
, a aura ao redor da mão de Yoonir continua a se distorcer e criaruma miragem deformada, então, como um arquivo digital corrompidoo cristal "trava" ficando por um segundo suspenso empleno ar uma, como uma imagem falha e incompleta. Por um momentoum segundo cristal incompleto surge sobre sua mão, para em seguida se concretizar na forma perfeita do artefato completo. } else if(path==2){
, a sombra vai se tornando cada vez mais escura,formando uma escuridão densa sobre a sua mão, o cristal vaisendo igualmente consumido pela escuridão. Até que é impossívelvê-lo, no mesmo momento a escuridão concentrada se dissipa da suapalma, e o artefato esta lá.}else if(path==3){
, a luz que irradia dos dois lados se torna maisintensa, os dois pontos começam a brilhar em cores diferentes,rapidamente alternando entre diversos tons, como se tentassemse aproximar de uma mesma cor. Sua mão e a de Yoonir brilhamao mesmo tempo em um profundo tom de azul, você sente um pesorepentino, as luz desaparecem, e você tem o cristal.} else if(path==4){
, a névoa branca continua a se tornar mais e mais densa, acompa nhando Yoonir como uma nuvem ao redor de seu punho. Você já n ão consegue ver mais sua mão, até sentir um estranho peso surgirderrepente sobre ela, a névoa se dispersa em uma rajada de vento que vocênão sente, e deixa o olho em sua mão.}


Yoonir parece ter percebido que perdeu o artefato, mas mesmo assim continua a fugir.clem[9]=1; clem[10]=0;}}void j_tempo() {extern int gen; extern int clem[40]; extern int dmg_dox;int a;
Você ignora por um segundo Janus gritando ao seu lado e o Yoonir escapando com o artefato, concentrando sua atenção somente no fluir do tempo ao seu redor. Sentindo o tempo passar delicadamente por entre seus dedos, você põe as duas mãos ao lado do corpo, os punhos apenas um pouco abertos. Respirando fundo você conjura sua magia e fecha as mãos, tudo para ao seu redor, congelado no tempo. Você se agarra as linhas do tempo que conseguiu segurar, e puxa, arrastando o tempo de volta.if(dox(30,0)){dmg_dox++; 


As linhas escorregam, a palma das suas mãos queimam como setentassem segurar uma corrente de ferro quente. Você é obrigadif(gen){
a}else{
o}
 a solta-las. O tempo tenta se corrigir fluindo na direção opostaa que você puxou, as linhas voltam como um elástico tencionado,chicoteando suas costas antes de retornarem ao estado natural [-1 Saúde]. Otempo se normaliza com Yoonir desaparecendo entre as árvores. 

Janus vira para você, o encantamento em seus braços já se desfa zendo.

Janus vira para você, o encantamento em seus braços já se desfa zendo.


Tudo se move como um borrão a sua volta, como se estivesse depé no olho de um furacão, tudo se move em reverso ao seu redor e você não éafetado. O furacão vai perdendo força e tudo começa a se mover maisdevagar até congelar mais uma vez, momentos antes de Janus sacar suaarma, você gentilmente solta as linhas e deixa elas voltarem a fluir.

 Janus para por um segundo, com a mão já sobre a pistola, ele pisca para você, como sesoubesse o que aconteceu, o outro mago aparentemente não. Com a mão direita Janus pegasua moeda, e saca a arma com a esquerda. Quando Yoonir tenta conjurar a mesmamagia que antes, Janus arremessa a moeda para cima e fala alguma coisaem um idioma que você não entende, mas parece familiar. A moedabrilha por um segundo, dissipando o encantamento antes de chegar atéseu alvo, Janus atira, Yoonir leva a mão ao ombro atingido, o olhocai no chão e rola pela terra até seus pés, a moeda cai sobre apalma estendida de Janus, cara. clem[9]=1;clem[10]=1; }}void y_aguiam(){extern int clem[40];
A águia que Yoonir controlou, ainda está por aqui, perto. Você consegue sentir sua consciência, como um zumbido baixo que você ouve vindo de algum lugar próximo. Ali, em um galho alto, mas ainda perto o bastante.


Você estende sua mente naquela direção, e rapidamente engloba a da águia, encontrando pouca resistência no cérebro simples do pássaro. Você então ordena, "Ataque Janus, distraia ele" A ave não reage, Janus está prestes a puxar o gatilho. O nome do mago não significa nada para águia, você rapidamente molda uma imagem da arma e do mago que a segura, associando com instintos básicos de atacar e afastar que você consegue expressar mentalmente.

O pássaro levanta voo e investe sobre ele. Ele atira, mas erra, Yoonir foge por entre as árvores e chama você para segui-lo. Você vai atrás., enquanto Janus continua desesperadamente tentando se desvencilhar do pássaro.clem[9]=1;clem[10]=0; }void y_aguiav(){extern int clem[40];
A águia que Yoonir controlou, ainda está por aqui, perto. Você consegue sentir sua energia vital, como um pulsar baixo que você sente vindo de algum lugar próximo. Ali, em um galho alto, mas ainda perto o bastante.


Você tenta dominar a criatura, acessando seus instintos e suas funções corporais você consegue criar um tipo rudmentar de controle sobre ela. Você então ordena, "Ataque Janus, distraia ele" A ave não reage, Janus está prestes a puxar o gatilho. O nome do mago não significa nada para águia, você rapidamente dispara alguns instintos de caça na águia, fazendo ela ter a impressão que teve seu território invadido, que Janus é um predador perigoso porém fraco.

O pássaro levanta voo e investe sobre ele. Ele atira, mas erra, Yoonir foge por entre as árvores e chama você para segui-lo. Você vai atrás., enquanto Janus continua desesperadamente tentando se desvencilhar do pássaro.clem[9]=1; clem[10]=0; }void y_arma(){extern int clem[40]; extern int dmg;
Você parte para cima de Janus, rapidamente agarrando a pistola e apontando-a para cima, o dedo dele ainda sobre o gatilho, mas Yoonir está fora de perigo. Você entretanto, luta para tentar tirar a arma das mãos deleif(roll(70,0)){
, ele tenta alcançar algo no bolso da calça, provavelmente sua moeda , você aproveita a distração para empurra-lo, ele se desequilibra, vocêdá um puxão decidido na arma, e consegue arranca-la das mãos do mago. clem[11]=1; }else{
, elese recusa a soltar, em uma tentativa de golpea-lo você soltauma das mãos da arma, Janus tenta puxar a pistola na direção dele epuxa o gatilho.

 A arma dispara, você sente uma dor quente e ardente na lateral doabdomem [-1 Saúde]. Ambos largam a arma, que cai no chão sem mais balas.

 "Merda! Viu o que você fez?"

Você põe a mão sobre o ferimento,existe algum sangue, mas parece ter sido bastante superficial, ochoque foi maior que a lesão em si. 

"Só vai atrás dele logo então, não se preocupe, ele pode tecurar. E manda um abraço para minha irmã"

 Janus recolhe sua arma e segue calmo, porém frustrado, para sua motocicleta. Vocêsegue para encontrar com Yoonir. dmg++;}clem[9]=1; clem[10]=0; }void y_bala(){extern int clem[40]; extern int gen;
Você vê Janus se preparando para disparar, mas não se move, é arriscado de mais tentar tirar a arma das mãos dele, existe algo mais inteligente que você pode tentar. Cobrindo seus sentido com magia você se prepara para responder a primeira descarga de energia que perceber, calor, velocidade, energias, você deve ser capaz de responder imediatamente.

Ele dispara, você consegue ver a onda de som surgindo ao redor da arma antes mesmo de ouvir o desparo, sua atenção acompanha a concentração de calor e energia estrondosa que surge da arma, a bala que seria diminuta e discreta para olhos normais é gigantesca quando observada pelas lentes de uma magia de Forças.

if(dox(30,0)){
Você consegue perceber o calor, a energia cinética e o som da bala, mastambém o calor do fogo ao seu redor, ouvir a eletricidade alimentandoos postes ao longo da estrada, sentir a luz da lua e das estrelasna sua pele. Você se perde em meio a todas as ondas, raios e correntesao seu redor, todos os seus sentidos se sentem ofuscados, e você éobrigadif(gen){
a}else{
o}
 a reverter sua magia antes de conseguir parar o tiro. Yoonir é atingido no braço, deixa o olho cair, mas continua seguindo em direção a flroesta. Você vai atrás, mas Janus não te impede. clem[9]=0;clem[10]=1;}else{
Você agarra a energia cinética que impulsiona a bala e com um girar do seu pulso, você muda seu trajeto.Ela resiste a mudança de direção, mas você consegue que no últimosegundo ela vire e atinja uma árvore próxima ao invés do braço deYoonir, ele some na parte mais fechada da mata e você segue atrás.Janus não faz nada para te impedir. clem[9]=1;clem[10]=0; } }void y_destroy(){extern int clem[40]; extern int gen;
Você não tenta tirar a arma das mãos de Janus, mas ainda sim tenta segura-la. Logo antes dele dar o tiro, você toca nela, com um rápido toque de um dedo próximo ao cano da arma você consegue acessar o padrão da arma, a matriz mágica que a define no mundo real. Com só um toque você desfaz a arma em sua essência, minando a estrutura do metal.

Janus puxa o gatilho, nenhum tiro, ele tenta novamente. O gatilho cai, o pente da arma solta e uma única bala rola pelo chão, a arma desmonta peça por peça. Você pode tranquilamente seguir atrás de Yoonir enquanto Janus recolhe as peças de sua pistola.clem[10]=0; clem[9]=1; }void y_nope(){extern int clem[40];
Yoonir vira as costas e se põe a correr em direção as árvores. Janus se prepara para atirar, mas você prefere não se arriscar com o lunático mágico armado. E pelo que ele disse Yoonir poderia simplesmente se curar depois, certo?

Ele atira, Yoonir é atingido no braço, deixa o olho cair, mas continua seguindo em direção a flroesta. Você vai atrás, mas Janus não te impede.

"Não se preocupe, a sua segurança é mais importante que o artefato." Ele comenta, sincero, com a mão sobre o ombro ferido.clem[10]=0; clem[9]=0; }void y_sorte() {extern int clem[40];
Você cria um pedido, um desejo, que Yoonir não seja atingido pela bala. Sua alma mágica consegue dar peso a sua vontade, mas você depois de lança-la entre os fios do destino você só pode torcer pelo melhor.

Uma gota de água escorre de uma folha de uma árvore próxima, ela despenca vários metros de altura, e sua trajetória é desviada alguns poucos centímetros por uma brisa repentina que passa. Janus acompanha o alvo em movimento com a mira, e lentamente espreme o gatilho, a gota o atinge no olho, no mesmo momento em que Yoonir por acaso abaixa para desviar de um morcego que passa voando baixo. A arma dispara, e o tiro erra.

Você rapidamente segue atrás do mago, Janus não faz nada para lhe impedir.clem[9]=1; clem[10]=0;}void y_teleport(){extern int clem[40]; extern int path; extern int dmg_dox; extern int gen;
Você se concentra em tirar a arma das mãos de Janus. Você estende a palma da mão aberta em frente ao corpo, com os olhos fixos na pistola você se lembra como descobriu que a distância é uma ilusão, que sua alma mágica pode dobrar o espaço entre dois pontos como uma folha de papel.

Você visualiza o artefato em sua mão e começa a lentamente erodir a imagemde que ele está distante de você. Umaif(path==0){
nuvem de prata }else if(path==1){
aura distorcida} else if(path==2){
sombra anormal} else if(path==3){
aura radiante} else if(path==4){
névoa densa}
se forma ao redor da sua mão, e uma idêntica ao redor da mão de Janus. O mago parece ignorar sua magia, se concentrando em tentar mirar no alvo móvel. Você estende a mão através do espaçoif(dox(30,0)){
, pront if(gen){
a}else{
o}
 para agarrar a arma. Mas algo dá errado, você perde o controlepor um segundo e vai longe de mais. Você sente uma pressãosobre sua mão, como um vácuo tentando suga-la, você consegue sentirela ameaçando se desligar do seu pulso, e tem tempo apenas deinterromper a magia antes de perder um membro. Mas mesmo assim,seus ossos doem dos dedos até o cotovelo, como se tivessem tentado puxa-lospara fora do seu corpo.[-1 Saúde]

 Ele atira, Yoonir é atingido no braço, deixa o olho cair, mas continua seguindo em direção a flroesta. Você vai atrás, mas Janus não te impede. dmg_dox++;clem[9]=0;clem[10]=1;} else{if(path==0){
,a nuvem de prata se transforma em um pequeno redemoinho brilhante,ele passeia por um momento sobre a sua palma, então começa a perdervelocidade até se dissipar, pistola surge dentro dele, e cai na sua mão. }else if(path==1){
, a aura ao redor da mão de Janus continua a se distorcer e criaruma miragem deformada, então, como um arquivo digital corrompidoa arma "trava" ficando por um segundo suspenso empleno ar uma, como uma imagem falha e incompleta. Por um momentouma segunda pistola incompleta surge sobre sua mão, para em seguida se concretizar na forma perfeita da arma por inteiro. } else if(path==2){
, a sombra vai se tornando cada vez mais escura,formando uma escuridão densa sobre a sua mão, a arma vaisendo igualmente consumida pela escuridão. Até que é impossívelvê-la, no mesmo momento a escuridão concentrada se dissipa da suapalma, e você está segurando a pistola.} else if(path==3){
, a luz que irradia dos dois lados se torna maisintensa, os dois pontos começam a brilhar em cores diferentes,rapidamente alternando entre diversos tons, como se tentassemse aproximar de uma mesma cor. Sua mão e a de Janus brilhamao mesmo tempo em um profundo tom de azul, você sente um pesorepentino, as luz desaparecem, e você está segurando a arma.} else if(path==4){
, a névoa branca continua a se tornar mais e mais densa. Você já n ão consegue ver mais sua mão, até sentir um estranho peso surgirderrepente sobre ela, a névoa se dispersa em uma rajada de vento que vocênão sente, e quando você vê, está segurando a arma.}


Sua magia se conclui no momento em que Janus puxava o gatilho, com as mãos vazias em posição de mira, seu indicador pressiona o ar.clem[9]=1; clem[11]=1;}}void y_tempo() {extern int gen; extern int clem[40]; extern int dmg_dox;int a;
Você ignora por um segundo Yoonir fugindo e Janus ameaçando disparar contra ele, concentrando sua atenção somente no fluir do tempo ao seu redor. Sentindo o tempo passar delicadamente por entre seus dedos, você põe as duas mãos ao lado do corpo, os punhos apenas um pouco abertos. Respirando fundo você conjura sua magia e fecha as mãos, tudo para ao seu redor, congelado no tempo. Você se agarra as linhas do tempo que conseguiu segurar, e puxa, arrastando o tempo de volta.if(dox(30,0)){dmg_dox++; 


As linhas escorregam, a palma das suas mãos queimam como setentassem segurar uma corrente de ferro quente. Você é obrigadif(gen){
a}else{
o}
 a solta-las. O tempo tenta se corrigir fluindo na direção opostaa que você puxou, as linhas voltam como um elástico tencionado,chicoteando suas costas antes de retornarem ao estado natural [-1 Saúde]. Otempo se normaliza no momento em que Janus está puxando o gatilho.Ele atinge Yoonir no braço, o cristal cai da sua mão, mas elenão retorna para pega-lo, apenas grita para que você vá com ele logo. clem[9]=0; clem[10]=1; }else{


Tudo se move como um borrão a sua volta, como se estivesse depé no olho de um furacão, tudo se move em reverso ao seu redor e você não éafetado. O furacão vai perdendo força e tudo começa a se mover maisdevagar até congelar mais uma vez, momentos antes de Janus sacar suaarma, você gentilmente solta as linhas e deixa elas voltarem a fluir.

 Janus para por um segundo, com a mão já sobre a pistola, ele olha ao redorconfuso, leva um segundo para ele perceber o que aconteceu, Yoonir parece com pletamente ignorante ao fato.

 Grita para que ele fuja, e salta sobre Janus, agarrando a arma de sua cintura antesmesmo que ele consiga saca-la. clem[9]=1;clem[10]=0;clem[11]=1; }}