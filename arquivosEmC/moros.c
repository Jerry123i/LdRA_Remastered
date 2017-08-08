/*  * File:moros.c * Author: Usuario * * Created on 8 de Agosto de 2015, 19:51 */#include <stdio.h>#include <stdlib.h>/* *  */int * moros() {  static int awake[3]; extern int gen; int ok; int ok1; int a;  int coins=0; int x1=0; //anti-repetidores int x2=0; int x3=0;char str[50];  system(cls); 

(Você segue pela estrada de ouro, o caminho limpo e polido, porém nada brilhante. A medida que você se aproxima do cemitério a estrada se apresenta mais decorada, detalhes com pedras preciosas adornam o caminho, belíssimas engravações de assassinatos e afogamentos, doentes moribundos e vítimas baleadas engravadas no metal.

 Qualquer luz que estivesse iluminando seu caminho esmorece a medida que postes feitos de ossos empilhados e lamparinas acesas em caveiras surgem para cumprir essa função. Você espera ouvir o som do fogo queimando, ou o cheiro de fumaça ou incenso, mas percebe que desde que escolheu esse caminho não ouve nem sente nada. Porém esse silêncio dos seus sentidos não te preocupa, mas te preenche de uma sensação de paz.); 

(

Depois de andar pelo que parece toda uma existência você alcança os portões do cemitério, as grades de chumbo escuro e pesado trancadas.

); //Jogador chega no portãodo { 

(De pé ao lado da fechadura um homem feito de sombras aguarda. Como tudo que já foi vivo você sabe que deve duas moedas a ele.); 

(

1. Falar com o porteiro. Pedir com educação que ele abra os portões
2. Procurar uma forma de pagar sua entrada
);scanf(
%i,&a);  ok=0;if (a==1){ //Falar  ok=0;  system(cls); 

(Você tenta conseguir a atenção dele, argumentar, implorar. A so mbra não responde, não se move, não reage.
 Você tenta negoci ar com a morte e falha, não foi ); if(gen){

(a primeira, não será a última.);  }  else{

(o primeiro, não será o último.); } }  else if (a==2){ //Pagar  ok==1;system(cls); do {ok=0;//Jogador possui 2 moedas  system(cls);if(coins==2){

(Você consegiu as duas moedas, por um momento você  tem a impressão que o porteiro lhe olha com espectativa.
Estr anho, pois você não tem certeza se ele realmente possui olhos.);} //Menos de duas moedas  else{  

(Então você precisa de);  if(coins==0){

( um par de moedas);}  if(coins==1){

( mais uma moeda);}  

(, onde você procura?); } 

(

1.Esvaziar seus bolsos
2.Procurar entre os mortos
3.Mudar de idéia); if (coins==2){

(
4.Pagar sua dívida, entregar as moedas.);  } 

(

);  scanf(%i, &a); if (a==1){ //Bolsos  ok=0; system(cls);  if (x1==1){  

(Aparentemente aquele pedaço de papel era tudo que você tinha); } else{ 

(Você retira um pedaço de papel colorido do bolso. Em algum lugar esse pedaço de papel vale uma moeda, aqui ele é inútil, porém é tudo que você tem.); 

(
A sombra exige moedas, você olha o papel, e percebe que na verdade ele é mais que isso, mais que uma única coisa. Você observa mais de perto. Decide trocar as coisas de lugar, remover algumas, discutir e convencer outras.); 

(
Eventualmente elas obedecem e se organizam a seu comando. Todas as coisas que eram papel, alinhadas, empilhadas e conectadas para serem uma moeda de metal dourado.);  coins++; x1++;  

(

1.Continuar...

); scanf(%i);  }} else if (a==2){ //Mortos ok=0; system(cls);  if (x2==1){  

(Você foi longe de mais para encontrar a aliança. Melhor não arriscar outra caminhada a esmo.); 

(

1.Continuar...

);  scanf(%i); }  else{ 

(Você se afasta dos portões e procura entre os mortos, além das pilhas de ossos ao longo da estrada você encontra alguns corpos ao longo do portão. Talvez outras almas que não conseguiram entrar.); 

(

Ignorando por um momento a ideia de que você pode encontrar o mesmo destino, você concentra sua atenção em conseguir sua entrada.); 

(

Alguns dos cadáveres, os que ainda tem alguma carne em seus ossos, se movem. Tentam se arrastar em sua direção ou erguem um braço pútrido tentando te tocar.); 

(

Quando você estava prestes a desistir e retornar aos portões, um reflexo brilhante chama sua atenção. Dois corpos, apoiados um contra o outro, reduzidos a ossadas, exceto pelos braços. Apoiados um no ombro do outro, as almas tem os dedos pálidos entrelaçados como amantes.); 

(

O brilho que você viu veio da aliança que um deles usa (apenas um). É dourado e redondo, você imagina que basta para pagar parte da sua dívida.); 

(

1.Tomar o anel
2.Pedir

);  do {scanf(%i, &a);  if (a==1){ //Pegar o anel  ok1=1;  system(cls); 

(Você se inclina, para tomar o anel. Um pouco apreen siv);  if(gen){

(a);  }  else{

(o);  }

(em relação a tocar os corpos, você delicadamente te nta separa-los. Subtamente os músculos apodrecidos  se contraem, os amantes se apertam com mais força , um dedo se descola um pouco e fica pendurado, ma s eles não parecem ligar.);  

(

Você não vai ser capaz de tomar a aliança a força . Pelo menos não enquanto eles tiverem alguma carn e em seus ossos. Você deseja que eles não tivessem , que a morte terminasse de consumi-los. As sombra s se movem como se te ouvissem, tremulam e crescem , formam uma garra fantásmagórica que se inclui no  aperto do casal. O que a sombra toca, apodrece e  definha, a carne se desfaz em pó, e a garra para  apenas quando os dois esqueletos se desmontam um sobre o outro.);  

(

Você pega a aliança e segue as grades de volta  até o portão, os corpos que conseguem se arrastam  quando você passa, tetando se afastar de você dessa vez.); coins++;  x2++; 

(

1.Continuar...

);  scanf(%i);}  else if (a==2){ //Pedir  ok1=1;  system(cls); 

(A cena é tocante, mas você acredita que necessita m ais do anel do que eles. Você se abaixa, e pede, p or favor que lhe entreguem o anel.
);  

(
Não ha resposta, apenas o silêncio dos mortos. Se us sentidos ainda estão atordoados, mas você acred ita que realmente eles não são capazes de falar. E stão tão fracos, parecem estar a muito tempo aqui.  Do lado de fora dos portões suas almas se corroer am como seus corpos. Um sentimento fraco pulsa no  centro delas, um fragmento do que um dia eles pod em ter sido.);  

(

É um sentimento familiar, porém nesse estado é il egível, não resta muita coisa, não serve mais para  muita coisa. Com um aceno de mão você apaga essa última brasa.);  

(

As mãos se soltam, nenhum deles reage quando você  pega a aliança. No caminho de volta você se pergun ta por que apenas um deles tinha um anel.);coins++;  x2++; 

(

1.Continuar...
);  scanf(%i); }  else{  ok1=0; }  }while (ok1!=1);  } }else if (a==3){ //voltar system(cls); break; }  else if (a==4 && coins==2){ //Pagar ok=1; system(cls); 

(Você estende as moedas para o porteiro. Ele recolhe as duas e fala alguma coisa. Você pede que ele repita, tanto tempo no torpor do silêncio fez você esquecer como ouvir. Ele repete em algo que parece mais um eco do vento do que uma voz. "Sua dívida está paga, porém esses portões não serão abertos a uma alma viva".

Como você morre?);} else { system(cls); 

(Você olha em volta, econtrando apenas um deserto estéril. Parece que essas são realmente suas únicas opções.); ok=0; }  }while (ok!=1);}  else {  ok=0;  

(

A sombra se mantém imóvel, você não tem certeza se ela tem olhos, mas sente que algo te encara fixamente.); }  }while (ok!=1);  //Jogador morre  do{ 

(

1. Doença[Vida]
2. Fogo[Forças]
3. Idade[Tempo]
4. Azar[Destino]); if(x3==0){

(
5. Pergunte para o porteiro
);} else {

(
5. Ir até a fonte[Primordio]
6. Ir até a montanha[Espaco]
7. Ir até o vale[Mente]
8. Invocar o espírito[Espirito]);}  

(

); scanf(%i, &a);  if (a==1){ //Vida  system(cls);  awake[1]=3;  awake[2]=3;  ok=1; 

(Você vai até uma das pilhas de caveiras, e procura uma que t enha morrido devido a doença. De alguma forma você sabe com o cada uma dessas pessoas morreu, então escolhe um crânio a propriado. Uma peça antiga, já bem amarelada, aparentemente  feminina, peste negra, tão jovem... Você esmaga o crânio n as mãos, um pó negro e fino sai dos ossos e flutua, suspens o como névoa. Você inspira profundamente.

Os sintomas te  atingem assim que você solta seu fólego. Você sente inchaç os pelo seu corpo e manchas azuladas e escuras crescem ao l ongo da sua pele. Você começa a suar intensamente, embora s eus sentidos tenham se perdido ao longo da estrada você ima gina que sentiria um frio febril nesse momento, seu corpo c omeça a tremer, confirmando sua teoria. A infecção logo se  espalha para o resto do corpo, você pode sentir as bactéria s se multiplicando e se espalhando dentro de você, espantad o, você percebe que elas são a única coisa viva em todo ess e deserto desolado.

As colônias prosperam nos seus outros  orgãos, eles se contorcem e minam sangue. Seus pulmões se c ontraem e derramam uma porção de sangue escuro em suas mãos  trêmulas e suadas.

Alguns minutos depois seus orgãos pa ram, você se dirige até os portões, mas a sombra pede que v ocê aguarde.

"Nenhuma alma viva." Ele diz. Você compreen de, e espera até que a última célula da peste pereça dentro  do seu corpo sem vida.

A sombra então abre os portões.);}  if (a==2){ //Forças  system(cls);  awake[1]=2;  awake[2]=2;  ok=1;

(Você vai até uma das pilhas de caveiras que iluminam a estra da. Você escala as ossadas, se apoiando em crânios e fêmure s, derrubando tíbias e quebrando algumas peças mais antigas . No topo, você alcança um pequeno crânio amarelado, sujo d e cera e com a luz trêmula de uma vela escorrendo das órbit as vazias. Você deixa a chama tocar os seus dedos e ela log o se espalha para o seu braço. Seu sentidos ainda estão ceg os, e você não sente calor ou dor, o fogo apenas come sua c arne e regurgita fumaça e cinza, você observa a ação do fog o como mais uma transformação do seu corpo, assim como ele  cresce ou cicatriza ele queima . Você retorna aos portões ); if(gen){

(morta e cremada);  } else{

(morto e cremado);  } 

(, a sombra permite que você entre.); }  if (a==3){ //Tempo  system(cls);  awake[1]=9;  awake[2]=9;  ok=1; 

(Você senta no chão e aguarda, não tem por que se esforçar, n ada mais certo que a morte, não é mesmo? Cruzando suas pern as você deixa o tempo passar, seus cabelos logo crescem, e  sua pele enrruga, seus pêlos desbotam e suas costas se curv am, seus órgãos então lentamente reclamam, desaceleram, inc ham, rompem ou param. Seu coração continua, porém lento, se us pulmões apitam e se arrastam ao trabalhar. Deve estar pe rto agora, suas mãos estão manchadas e sua pele solta, suas  unhas amareladas e longas, você se distrai, quando foi a ú ltima vez que seu coração bateu? A sombra abre os portões);}  if (a==4){ //Sorte  system(cls);  awake[1]=1;  awake[2]=1;  ok=1; 

(Você pondera sobre a morte por alguns intantes, não como uma  grande parte do ciclo do universo, ou um processo de evolu ção espiritual. Apenas um acontecimento, um motorista que r ecebe uma mensagem de texto no momento errado, um maníaco q ue vira a esquerda e uma vítima que decide ir pelo caminho  mais longo pois a lua estava particularmente linda aquela n oite, um raio que cai duas vezes no mesmo lugar. Apenas doi s de paus e olhos de cobra no jogo do destino.

Jogo...

 Você tem uma ideia. Antes que você pudesse dizer qualquer c oisa o porteiro sorri, de sua massa sombria ele tira um rev olver, novo e brilhante, como uma peça de exposição que nun ca foi usada. Ele estende a arma apontando-a para baixo e e xpondo o cilindro, então então joga uma única bala dourada  no tambor, que cai com exatidão no compartimento.

Ele es tende a arma para você. "Boa sorte".

Você tenta lembra r de todos os pequenos rituais de boa sorte que conhece e e xecuta todos antes de girar o tambor. Você encosta o cano d a arma na têmpora, e puxa o gatilho. O barulho do disparo é  abafado pelo ranger dos portões se abrindo.);}  if (a==5 && x3==1){ //Prime  system(cls);  awake[1]=6;  awake[2]=6;  ok=1; 

(Você encontra a fonte, uma torre prateada com três pratos e  uma grande bacia na base. A água que flui da estrutura que t em o tamanho de uma casa é completamente transparen te, mas parece radiar uma leve luz azulada. Você junta as m ãos em concha e deixa o líquido frio se acumular entre os d edos, você leva as mãos a boca e bebe devagar, gole por gol e. Inicialmente você não sente nada, então do fundo do seu  ser você percebe, uma formigação, quase imperceptível, uma  sensação que cresce até você identificar como poder, puro e  imaculado, o absoluto sentido da palavra, a essência de ca pacidade e potencial prenche sua alma. Talvez você seja just); if(gen){

(a);  } else{

(o);  } 

(, você não precisa mais morrer, você pode conseguir o que qu iser, você pode fazer o que quuiser.

Quanto mais o poder  cresce, mais possibilidaes existem, ambos, se expandem. As  possibilidades são infinitas, mas você só pode suportar ta nto poder, enquanto existem possibilidades sua alma expande  e queima tentando conter todas elas. Eventualemente você c ede, uma implosão e o som de um vácuo sendo fechado.

Voc ê consegue salvar apenas o bastante da sua alma para contin uar a existir.

Um pouco mais humilde você retorna aos po rtões, eles ejá estão abertos, tamanha a certeza do porteir o no seu fracasso.);  }  if (a==6 && x3==1){ //Espaço  system(cls);  awake[1]=7;  awake[2]=7;  ok=1; 

(Você segue na direção que a sombra apontou, não demora para  encontrar a montanha. Um aclive imenso de ossadas empilhada s e diversas armas e peças militares, se elevando até onde  seus olhos podem ver. Você começa a escalar, se apoiando em  caveiras, espadas e baionetas, ossos, rifles e bombas.

 A subida contina pelo que parecem horas e o final continua  tão longe do seu alcance como quando você começou. Você olh a para baixo, o chão está a um passo dos seus pés, você não  subiu um metro sequer.

Frustrado você percebe que realm ente nunca esteve tentando chegar ao topo, cada passo que v ocê dava mirava apenas em dar um próximo, um passo em uma m ontanha que nunca para de crescer não significa nada.

Vo cê visualiza o topo, apenas ele, nada mais em seu caminho,  apoiando em uma armadura ensanguentada e no cano chamuscado  de um tanque você joga seu corpo para cima.

Você abre o s olhos e está no topo, ao seu redor mais corpos caem do cé u, sempre elevando o cume da montanha lúgubre. Você vai na  direção de um longo canhão enferrujado que se propele da la teral da massa de corpos, andando sobre ele como uma pranch a, é impossível ver o chão dessa altura, porém você pula.
 
Seu corpo ganha velocidade até estar completamente imerso  na sensação de queda livre, caindo como se sem peso, você  ainda está desprovido de audição, mas pode sentir o vento s e arrastando nos seus ouvidos. Vários segundos passam até q ue você lembra que assim como a subida a descida é infinita . Você visualiza o chão, e repentinamente seu corpo para. 

Você levanta, mort); if(gen){

(a);  }  else{

(o);  }  

(, e em um passo retorna aos portões  do cemitério, que a sombra cordialmente abre para você. Emb ora você agora acerdita que provavelmente poderia chegar do  outro lado com um passo se quisesse.); }  if (a==7 && x3==1){ //Mente  system(cls);  awake[1]=5;  awake[2]=5;  ok=1; 

(Você segue na direção que a sombra apontou. Algum tempo depo is você percebe uma única mudança no relevo, uma decida íng rime que termina em um vale. Dentro do vale você percebe mo vimento, vários seres de forma humana vagam a esmo, seguran do o que parecem ser grandes bolas de vidro escuro.

Você s e aproxima, eles parecem andar sem direção ou propósito carr egando com as duas mãos as orbes de vidro escuro e esfumaça do, as vezes se esbarram ou derrubam suas esferas, alguns l entamente se abaixam pra recupera-las, tateando como cegos.  Outros as abandonam e continuam andando. Nenhum deles pare ce reconhecer sua presença ali, você aproveita para estuda- los de perto.

Seus corpos estão quase como vivos, eles s e movem e agem, a carne a pesar de pálida, não parece espec ialmente podre ou decomposta. As esferas estão empoeiradas,  algumas trincadas por terem sido derrubadas algumas vezes,  observando de perto é óbvio para você agora, eles carregam  cascas vazias do que já foi sua consciência, o ar funebre  decompôs a mente dos seres do vale como a carne daqueles fo ra dele.

Você pega do chão um dos orbes abandonados e le ntamente, despeja sua mente no receptáculo vazio. Com cuida do, antes de depositar a última gota, você deixa para trás  suas memórias do caminho de volta, apenas torcendo que bast e para que seu corpo vazio encontre os portões.

Tudo fica  escuro, você sente apenas sua cosnciência flutuando sem dir eção, lentamente balançando de um lado para ou outro nas mã os do seu corpo físico. Quando você retorna a si, os portõe s estão abertos, e você está do outro lado deles, de corpo  e mente. Você se sente primeiro aliviad);  if(gen){

(a, e depois levemente orgulhosa);  }  else{  

(o, e depois levemente orgulhoso);  } 

(por seu plano ter funcionado, você enganou a morte?
A sombr a vira lentamente a cabeça na sua direção e abre um sorriso  cínico através das grades.

Não, mas você aparentemente  a impressionou.);  }  if (a==8 && x3==1){ //Espírito  system(cls);  awake[1]=8;  awake[2]=8;  ok=1; 

(Você pensa em invocar o espírito da morte e ele surge ao seu  lado. Coberto por um capuz preto e rasgado ele flutua sobre  uma pesada névoa escura que escorre do seu torso, ele apar enta não ter pernas. Inicialmente você acha que ele é um es queleto, como as muitas ossadas pelas qual passou, observan do mais de perto ele tem pele, pele pálida e coberta por ci catrizes, colada diretamente ao osso, mesmo sem músculos el e consegue manter uma expressão profundamente deprimida, du as linhas escuras marcam seu rosto, como se tivesse chorado  tinta.

Ao mesmo tempo que ele indubitavelmente represen ta a morte ele parece estranhamente deslocado ali, simplesm ente sua essência dá uma ideia de que não está morto, não e xatamente vivo... porém não morto. Talvez por isso sejam tã o raros. Quando você percebe ele se foi, o porteiro já abri u os portões, ele te matou? Sim, você não tem certeza como,  talvez bastasse sua presença, talvez você estivesse mais d istraíd); if(gen){

(a);  }  else{

(o);  } 

( do que pensou.);}if (a==5 && x3==0){ //Falar com a morte  system(cls);  x3=1;  ok=0; 

(Você pergunta a sombra como morrer. Ela abre um sorriso larg o, você não tem certeza sobre olhos, mas a morte tem dentes .

Naquela direção, existe uma montanha... dos ossos de t odos os que morrem em guerras sem propósito... ela é... alt a. Salte dela.

A sua fala é pausada, e as pausas preench idas por nada além do silêncio absoluto dos mortos e espect ativa. Naquela direção... existe um vale de almas cujo os c orpos ainda vagam, mas suas mentes... morreram.

Naquela  direção... uma fonte, que promete poder absoluto a alma jus ta que beber dela... e morte as outras... não se preocupe,  sua alma não é justa... elas nunca são.

E finalmente, em bora seja... raro, você pode invocar um espírito da morte,  porém eles sao... tão... poucos.);  } }while(ok!=1);

(
1.Continuar...
);scanf(%i);//Dentro do cemitériosystem(cls);

(Além dos portões você se encontra no cemitério. Túmulos de toda f  orma e cultura cobrem o chão até onde seus olhos podem ver. Lápi  des, urnas, sarcófagos, algumas covas sem demarcação e até barco  s vikings inteiros, todos perfeitamente ordenados e alinhados.);

(

No que você acredita ser o centro, voce avista uma enorme torreque te atrai como um imã. Coberta de uma infinidade de metais epedras preciosas. E alta como um arranhacéu. Você entra, dentroda torre mais sepulturas, igualmente diversas, porém mais disti  ntas de certa forma, urnas mais elaboradas, sarcófagos que poder  iam pertencer a faraós, estátuas de anjos e cruzes cristãs molda  das por exímios escultores. Você continua a subir, qualquer cois  a que lhe atrai está no topo. Andar após andar você passa pelos mortos.); 

(

1.Continuar...

); scanf(%i);  system(cls);  do{

(Você termina um lance de escadas e não encontra o próximo, o topo  . Nesse andar apenas uma humilde lápide de pedra no centro. Em f  rente a ela uma enorme figura esquelética trabalha sem parar, co  m dezenas de braços de cada lado do corpo ela parece processar u  ma torrente de mortos que tira do centro escuro das suas costela  s. As mãos a direita separam o corpo da alma, enterram o corpo n  o solo e libertam a alma como um fio de fumaça de incenso, branc  o e fino, deixando para trás um resíduo preto que é coletado emum cálice.

);

(As mãos da esquerda coletam bens materiais, recolhem jóias, carro  s e casas inteiras, esmagam e moem tudo em um fino po dourado po  rém opaco. Que se torna líquido ao cair no cálice a esquerda);

(

Você repara na lápide, o objeto que tão fortemente te atraiu at  é aqui. Ela é sua, porém está sem nome.);

(

1.Assinar com o resíduo das almas[Morte+]
2.Assinar com a tinta dourada[Materia+]);

(

);scanf(%i, &a);if(a==1){ //Morte ok=1; awake[0]=0;  system(cls); 

(Você pega a longa pena preta apoiada na lateral do cálice, mergulha a ponta na tinta viscosa turva.);}else if(a==2){ //Matéria ok=1; awake[0]=4;  system(cls); 

(Apoiada no cálice da esquerda você encontra uma elegante caneta tinteiro, completamente preta e com uma gema vermelha como sangue fresco decorando a ponta. Usando a pequena alavanca na lateral você enche a caneta de tinta dourada.);}else{ ok=0; } }while(ok!=1);

(E se inclina para escrever seu nome.

);return awake;}