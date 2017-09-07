INCLUDE thyrsus
INCLUDE acanthus
INCLUDE mastigos
INCLUDE obrimos
INCLUDE moros
INCLUDE go_yoonir
INCLUDE go_janus



VAR nomeCompleto = "nome"
VAR nomeCurto = "nom"
VAR nomeDasSombras = "shadow"

VAR gen  = 2

VAR path = 0
    CONST ACANTHUS = 0
    CONST MASTIGOS = 1
    CONST MOROS    = 2
    CONST OBRIMOS  = 3
    CONST THYRSUS  = 4

VAR dano    = 1
VAR danoDox = 0
VAR mana    = 5
VAR paradoxoAcumulado = 0

VAR paradoxoStep = 15
VAR danoStep = 10

VAR rollResult = 0

VAR DEATH  = 0
VAR FATE   = 0
VAR FORCES = 0
VAR LIFE   = 0
VAR MATTER = 0
VAR MIND   = 0
VAR PRIME  = 0
VAR SPACE  = 0
VAR SPIRIT = 0
VAR TIME   = 0

VAR donoDaPedra = 0
    CONST NINGUEM = 0
    CONST EU      = 1
    CONST JANUS   = 2
    CONST YOONIR  = 3
    
VAR ondeEstava = 0
    CONST ALI      = 0
    CONST CHEGANDO = 1
    
VAR auraVision = 0
    CONST OFF = 0
    CONST ON = 1

VAR viuOGato = 0
    CONST TUDO = 2

VAR nomeEasterEgg = 0
VAR conversaSobre = 0
VAR viuOOlho = 0
VAR yoonirAtingido = 0
VAR armaRoubada = 0
VAR terminouComAPedra = 0
VAR fogoNoCarro = ON
VAR lanche = 0
    CONST NADA = 0
    CONST AGUA = 1
    CONST CAFE = 2
    CONST COXINHA = 3
VAR posicao = 0
    CONST MUDEIDEIDEIA = 2
    CONST CONCORDO = 1
    CONST NAOQUERO = 0
VAR ultimaVisao = 0
    CONST VISAOF = 1
    CONST VISAOS = 2

VAR amigo = 0


->intro_Genero

==== intro_Genero ====
Qual gênero você prefere que seja usado para se referir ao seu personagem?

* [Masculino]
    ~gen=0
* [Feminino]
     ~gen=1
     
- -> intro_Explicacao

== intro_Explicacao ==

Você está prestes a se tornar um Mago. As decisões que sua alma tomar agora irão definir quais aspectos da realidade você será capaz de controlar.

*[Continuar...]

-Morte representa o poder de influenciar fantasmas e mortos-vivos, também de degradar e decompor aquilo a sua volta.

-Destino te dá o poder de ter sorte extraordinária e amaldiçoar outros com azar, de ler e até criar profecias e pragas.

-Matéria representa a habilidade de alterar e compreender substâncias, líquidos, sólidos e gases, molda-los e transforma-los.

-Mente é a capacidade de telepatia, alterar memórias, ler auras e até controlar mentes.

-Forças influência as forças físicas da realidade, calor, fogo, som, luz, a habilidade de manipular ou criar esses elementos.

**[Continuar...]

--Primórdio simboliza o poder de controlar magia e mana, a energia usada pelos magos. Manipulando-a para formar ilusões ou nulificando os feitiços de outros.

--Vida representa a influência sobre seres vivos e seus corpos, cura, mudança de forma e influenciar animais, todas habilidades de magos experientes em Vida.

--Espaço representa a manipulação da distância e da posição de seres e objetos, o poder da vidência e para magos poderosos o teletransporte.

--Espírito controla e influencia espíritos (não fantasmas), seres elementais que representam conceitos, animais ou emoções do nosso mundo.

--Tempo inicialmente lhe permite ver o passado e ter alguns curtos vislumbres do futuro. Mas um mago poderoso pode acelerar o tempo ou voltar alguns segundos para corrigir erros.

***[Continuar...]

---Cada um desses aspectos pode ser separado em 3 níveis de aptidão, o primeiro deles permitindo sutis influências na realidade, o terceiro completo controle sobre tal aspecto, sendo capaz de completamente destruir ou criar elementos por pura força de vontade. 

---Quando sua alma retornar vai estar controlando 3 desses aspectos, dois deles devem ser escolhidos juntos,e desses dois um deles você controlará de forma mais completa.

---A primeira decisão é a mais importante, siga seus instintos ao escolher, deixe sua alma dizer qual caminho seguir até a ascensão.

****[Continuar...]

----E boa sorte...

*****[Continuar...]

----- ->encruzilhada

==== encruzilhada ====
Você abre os olhos e se encontra em uma encruzilhada, ao seu redor estão 5 estradas. A primeira tem um caminho de ouro e leva até um cemitério. A segunda tem um caminho de terra e leva até uma floresta. A terceira é calçada com mármore e leva até um castelo. A quarta é feita de ferro e leva até uma mansão. A quinta é uma estrada de prata, que termina em um jardim.

Qual caminho sua alma segue?

*[moros_A estrada de ouro, que promete morte e riqueza (Morte/Matéria)]
    -- ~ path = MOROS
    -- ~ DEATH++
    -- ~ MATTER++
    -- ->awaken_moros->


    
*[thyrsus_A estrada de terra, que promete sabedoria e vigor (Vida/Espirito)]
    -- ~ path = THYRSUS
    -- ~ LIFE++
    -- ~ SPIRIT++
    -- ->awaken_thyrsus->


*[obrimos_A estrada de mármore, que promete força e glória (Forças/Primordio)]
    -- ~ path = OBRIMOS
    -- ~ PRIME++
    -- ~ FORCES++
    -- ->awaken_obrimos->

*[mastigos_A estrada de ferro, que promete controle e soberania (Espaco/Mente)]
    -- ~ path = MASTIGOS
    -- ~ MIND++
    -- ~ SPACE++
    -- ->awaken_mastigos->

*[acanthus_A estrada de prata, que promete descoberta e liberdade(Tempo/Destino)]
    -- ~ path = ACANTHUS
    -- ~ TIME++
    -- ~ FATE++
    -- ->awaken_acanthus->

- ->continue->



Você desperta, porém não abre os olhos ainda, você não se lembra de nada que aconteceu. Lembra apenas do sonho incrívelmente real que acabou de ter. Seu corpo e sua cabeça doem{LIFE>0:, você fraturou uma costela e a tíbia esquerda, e teve cortes e contusões leves no torso e nos braços}{TIME>0:, é de noite, exatamente 1:53, embora você não faça ideia de como tem certeza disso sem nem conseguir enxergar nada}.

{DEATH>0 or FORCES>0 or LIFE>0 or MATTER>1:Alguma coisa pesada lhe esmaga as pernas, impedindo que você se mova.}

*[Abrir os olhos]

Você lentamente abre os olhos, tudo está um pouco embaçado ainda, {TIME==0:é noite e }o ar parece estar coberto por uma fumaça escura.

{MIND>0 or SPACE>0 or SPIRIT>0:->ve_algo->}

Se adaptando melhor a escuridão e a fumaça você consegue observar seus arredores com mais calma. Aparentemente você estave em um acidente de carro, o automóvel batido e em chamas a alguns metros deixa pouca dúvida. Na verdade, você provavelmente teve muita sorte de de sair viv{oa()}.

{PRIME>0 and FATE>0:
Vindo do carro, além das chamas, outra coisa chama sua atenção. Uma luz, uma aura iradiando de algo no banco de trás. Você sente uma estranha conexão com essa energia, ela te atrai sutilmente naquela direção, como um elástico levemente tensionado entre você e a fonte dessa aura.

->continue->
}
{PRIME==0 and FATE>0:
Vindo do carro, além das chamas, outra coisa chama sua atenção,você sente uma estranha conexão, algo te atrai sutilmente naquela direção, como um elástico levemente tensionado entre você e o banco do carro.

->continue->
}
{PRIME>0 and FATE==0:
Vindo do carro, além das chamas, outra coisa chama sua atenção. Uma luz, uma aura {path==MOROS:estranhamente familiar }iradiando de algo no banco de trás.

->continue->
}

{TIME>0:
Você tenta se lembrar do que ocorreu, sua memória está completamente perdida, mas você consegue abrir os olhos e encarar diretamente o passado. Você se vê dirigindo, a estrada vazia eescura, é difícil se concentrar na visão e elaparece turva em vários pedaços, como uma janela embaçada. Algo te distrai na estrada, parece haver algum tipo de falha mecânica, você bate o veículo e a visão desaparece. 
->continue->
}

{DEATH>0 or FORCES>0 or LIFE>0 or MATTER>1:
    ->cena_do_tronco->levantar->
}

-(levantei_opcoes)
{SPIRIT>0 and SPACE==0 and !persegue_o_gato:
    {MIND>0:Você procura pela consciência que sentiu anteriormente.} Quando olha para trás você encontra uma pequena criatura que te observava.
    
    ->ve_o_gato->
    
    Ele inclina a cabeça para a direita, curioso, como se não entendesse por que você olha na direção dele. Só então o espírito percebe que você consegue vê-lo, e dispara correndo na direção das árvores.
    
    ->continue->
}

{SPIRIT>0 and SPACE>0:
    {!persegue_o_gato:O espírito que você tinha visto antes ainda está atrás de você,ele te observa com atenção, e parece não ter percebido que você sabe que ele está ali.|O espírito que você viu antes já desapareceu entre as árvores.}
}

-{PRIME>0 or FATE>0:
    Dentro do carro acidentado, no que parece ser o banco de trás,{PRIME>0: a curiosa aura ainda chama sua atenção, é bastante intensa {path==MOROS:e de certa forma lhe faz lembrar do seu sonho}}{FATE>0 and PRIME==0:alguma força ainda te compele naquela direção}, mas pode ser perigoso se aproximar do carro em chamas.
}

{((SPIRIT>0) or (PRIME>0 or FATE>0)):
    Talvez não seja uma boa ideia ir a lugar nenhum, ferid{oa()} da forma que você está.
    
    -else:
    Você levanta com alguma dificuldade, bastante ferid{oa()} devido ao acidente.
}

{LIFE>0:<> Mas depois desse sonho, você acredita que pode fazer algo quanto a isso.}

*{SPIRIT>0 and SPACE>0}[Ir na direção do espírito]
    -- ->persegue_o_gato
*{SPIRIT>0 and !SPACE>0}[roll{((SPIRIT-1)*10)+60-(dano+danoDox)*danoStep}_Perseguir o espírito]
    -- ->persegue_o_gato
*{PRIME>0 or FATE>0}[Investigar o carro]
    -- ->investiga_o_carro
*{LIFE>0}[life_mana{path!=THYRSUS:2|1}_Cuidar dos seus ferimentos]
    -- ->cura
*[Procurar ajuda]
    --->procura_ajuda



==== pegando_o_olho_com_Janus ====

->continue->

Embora pareça um tanto difícil de alcançar, considerando que a porta não parece estar abrindo e o metal está quente de mais para se apoiar sobre.
"Eu acho que tive uma ideia. Considere seu primeiro exemplo prático de magia."
Ele esfrega as mãos e agita os braços como um ginasta prestes a se apresentar, depois de uma combinação de gestos exagerados que você imagina serem mais uma tentativa de te impressionar do que realmente relacionados a magia, você consegue realmente sentir algo acontecendo.
Metade do corpo do mago começa a irradiar um suave brilho prateado, e a outra metade parece sutilmente descolorida, como uma foto saturada dada vida. Ondas brancas de energia luminosa fluem ao longo dos braços de Janus até se acumularem em uma nuvem reluzente entre suas mãos. Dos braços estendidos duas sombras emergem, uma prateada, outra opaca, as duas rapidamente dão forma a nuvem de mana e tudo imediatamente desaparece, deixando Janus segurando um par de longas pinças metálicas.
Ele olha na sua direção com um olhar ansioso, esperando sua reação.

*"Isso foi incrível! Eu também posso fazer isso?"
    --"Talvez, isso na verdade é o que nós chamamos de taça, mana da da forma sólida, as vezes elas se formam naturalmente como frutas ou pedras em lugares especiais. Mas criar um dessa forma é uma magia de Primórdio um pouco avançada."
*"Uau... Pinças, os pobres mortais devem tremer sob seus pés
    --"Ei! Não desmereça minha magia, é bem difícil modelar mana em coisas desse tipo. Pedras, caixas, vasos, fácil. Mas coisas com partes móveis?"
    Ele abre e fecha os pegadores para ilustrar ocomentário.
    "Outro nível, requer muito mais habilidade"
*"Eu acho que aprendi nada. O que foi tudo isso? Exatamente?"
    --"Bem, eu canalizei mana para fora do meu corpo e dei a ela for ma física. É o que nós chamamos de taça, elas se formam natura lmente em alguns lugares especiais. Mas o que eu acabei de fazer é uma magia de Primódio."

-"De qualquer forma as pinças são mais uma ilusão do que reais, elas se desfazem em alguns minutos, e não são tão resistentes quanto metal de verdade. Então se me dá licença"

-Se colocando ao lado da porta do carro ele consegue facilmente pescar o cristal.
-~donoDaPedra = JANUS
-->continue->

"Geralmente o melhor a fazer é absorver essa mana de novo antes que ela se dissipe no ar.

{(PRIME>0 and mana<5):
    <> Mas aqui, por que não fica pra você?"
    *[prime_Aceitar]
        Segurando a pinça você consegue facilmente sentir como é falsa, feita de mana, não metal. Como alguém que desfia um suéter puxando um fio solto você rapidamente retona ela a sua matéria prima, armazenando a mana dentro de você.
        ~mana++
    *[Recusar]
        "Quanta educação!"
        Ele franze o queixo em uma expressão debochada "Mas mana pode ser mais difícil de conseguir por aí do que parece"
        Ele dobra os pegadores como se fosse quebra-los ao meio, o falso metal se desfaz na mesma energia branca que você viu antes, que é canalizada para o peito de Janus.
    -else:
         Ele dobra os pegadores como se fosse quebra-los ao meio, o falso metal se desfaz na mesma energia branca que você viu antes, que é canalizada para o peito de Janus.
}

-- 

{viuOOlho==OFF:
    ->continue->
    Você pede para ver a pedra, já que ainda não teve a chance de vê-la de perto, Janus abre a palma da mão para você examina-la, mas não te entrega.
    Ela parece ser feita de três "camadas", a mais externa completamente transparente como vidro, dentro dela, uma esfera menor,também transparente, mas tingida de púrpura, e no centro uma pedra ainda menor, opaca e brilhante, e completamente negra.
    Ela parece ter sido feita com a intenção de se assemelhar a um olho.
}

->continue->
->you_are_the_chosen_one

->DONE



==== encontra_Janus ====

->continue->

{ondeEstava==CHEGANDO:
    Voltando da parte mais fechada do trecho de mata ao redor da estrada você encontra alguém no local do acidente. Uma silueta masculina contra as chamas, de pé ao lado do seu carro em chamas, olhando ao redor e dentro do carro como se procurasse por algo. Uma motocicleta parada a certa distância do local explica de onde ele surgiu.
    
    -else:
    No fim da estrada você percebe alguma coisa se aproximando, apenas um farol, uma moto, o único veículo que você vê passar desde que acordou. Ela para no acostamento, alguns metros antes do acidente, o motorista desce, a viseira do capacete cobre todo o seu rosto, mas aparentemente é um homem.
}

{PRIME>0 or MIND>0:
    ->leitura_de_aura->
}

->continue->

{(ondeEstava==CHEGANDO):
        ->interacao_janus_longe->
    -else:
        Assim que te vê próximo ao carro, em meio a cena do acidente, ele guarda o capacete na moto e acena, indo na sua direção. Ele é jovem, tem os cabelos loiros despenteados e olhos claros, usa uma jaqueta escura e uma calça jeans bastante desbotada. {auraVision==ON:As cores vibrantes ao redor dele esmaecem e dão espaço a um tom fechado de azul que sugere desconfiança.} 
}

->continue->

"Ei! Tudo bem com você?"

Ele tem olhos grandes e sorridentes, estatura mediana, e mãos que não parecem acostumadas a trabalho físico, embora ele não aparente estar fora de forma, ou ao menos não parece especialmente gordo ou franzino.

"... é o seu carro? Você se machucou?"

*"Claro que sim! Você viu o estado do meu carro?"
    --"Wow! Desculpa por ter perguntado. Considerando o estado do carro eu to surpreso que alguém tenha saído vivo de lá. Bem... não muito surpreso"
*{dano>0}"Um pouco, eu acho que tive sorte na verdade..."
    --"Sorte!" Ele sorri e faz aspas com as mãos quando fala. "Sei bem como é"
*{dano==0}"Não, eu acho que já dei jeito nisso na verdade"
    --"Ah! Entendi, bom pra você, eu não ia poder te curar. Não que eunão queira nem nada, eu só não sei mesmo"
*{ondeEstava==CHEGANDO}"O que você quer com o meu carro?"
    --"Hum... Eu..."
    Ele coloca a mão na nuca e vira o rosto para os lados evitando seu olhar.
    "Eu meio que esqueci uma coisa no seu carro"
*{ondeEstava==ALI}"Um pouco, obrigado por parar para ajudar"
    --"Não que eu não fosse parar para ajudar alguém em um acidente,mas para ser sincero eu já estava procurando por você"
    
-*"Como assim?"

-"Quer dizer..." Ele para, te encarando de forma especialmente confusa. {auraVision==ON:A aura ao redor dele muda para um tom mais calmo e menos escuro, você pode ver a dúvida dele na forma de pequenos pontos coloridos que rapidamente surgem quando ele pergunta.}
 
-"Ei, mas qual seu nome?"

*"{nomeCompleto}, e o seu?"
*"{nomeCurto}, mas pare de mudar de assunto!"

-"Mas, esse é seu nome de verdade?! Como assim? Você acabou de despertar por acaso?!"

*"Hun? Do que você está falando?"
    --"Você não sabe mesmo!"
*"Claro que é meu nome de verdade, o que você esperava?"
    --"Qualquer coisa menos seu nome de verdade. Hahahaha!"
*"Despertar? Você quer dizer o sonho..."
    --"Sim! Sim!"

-Ele aponta para você e começa a falar rápido em um tom entusiasmado e agitando os braços, você tem a impressão queele está se contendo para não lhe segurar e te sacudir no ar.{auraVision==ON:Ondas de vermelho e amarelo se alternam rapidamente em um padrão frenético, a aura refletindo a animação dele.}

-"Logo depois desse acidente provavelmente. Você teve um sonho muito real, e desde que ele acabou você vê as coisas de forma diferente. Consegue fazer coisas que não deveriam fazer sentido, mas que parecem perfeitamente naturais para você, mesmo que você não saiba explicar?"

*"Sim... exatamente isso"

-"Ah! Eu sempre quis ser o primeiro a contar pra alguém" Ele dá um passo para trás e abre os braços como se jatos de confete e efeitos pirotécnicos fossem surgir atrás dele.

-"Você é um{gen==1:a} mag{oa()}!!!"

*"Tipo com varinhas e chapéis pontudos e caldeirões?"
    --"Não! Claro que não!"
    --"Quer dizer... as varinhas sim, mas são opcionais. Na verdade eu já ouvi falar de algumas pessoas que usam caldeirões... Mas definitivamente sem chapéis pontudos!"
*"E é por isso que eu não me lembro de nada?"
    --"Você perdeu a memória? Não, eu acho que você só bateu a cabeça mesmo. Mas eu tenho uma amiga que talvez possa te ajudar com isso."
*"Ok, mas falando sério agora..."
    --"Sempre tem um cético não é mesmo?" Ele rola os olhos, sarcástico. 
    --Você não está vendo o mundo de forma diferente? Não fez nada que não consiga explicar desde que acordou? Sua alma não se sente livre deuma âncora que te acompanhava a vida toda?! Eu estou literalmente olhando pra ela nesse momento. {gen==1:Moça, você é uma maga|Cara, você é um mago}."
    
-"Primeira lição sobre ser um mago. Nomes tem poder, evite contar seu nome verdadeiro para outros magos, mais fácil de te encontrarem, espionarem em você e coisas assim. Geralmente usamos nomes falsos entre nós, e mesmo esses ainda tem um pouco de poder, mas ia ser tipo, impossível, conviver sem chamar as pessoas de alguma coisa. Você pode me chamar de Janus falando nisso."

->continue->

{conversaSobre==ON:"Mas eu quase esqueço. Como eu dizia tem um motivo para eu ter te encontrado aqui. Seu carro, eu esqueci uma coisa dentro dele|Ele para um momento e dá um passo para trás como se te estudasse}.
{conversaSobre==OFF:"Eu acho que eu posso te contar de qualquer forma, eu não te encontrei por acaso passando pela estrada, eu deixei uma coisa no seu carro.}

{ ondeEstava==CHEGANDO:
     "Ficou ali atrás está vendo? Aquele cristalzinho roxo."
     
     Ele aponta para dentro do carro, você se aproxima para ver mais de perto, ele está largado no banco do passageiro perto do cinto.
     { (FATE>0 or PRIME>0) and (viuOOlho==OFF):
        Era, afinal, essa a fonte da {PRIME>0:aura que você viu|força que parecia te atrair nessa direção}.
     }
     { viuOOlho == ON:
        O mesmo cristal que você tinha avistado antes.
     }
     ->pegando_o_olho_com_Janus
    -else:
    Tipo um cristal, parece um olho. Ele é um artefato mágico, então talvez você tenha percebido ele.
    { donoDaPedra ==EU:
    *"Esse aqui?" [Mostrar o cristal]
        ->you_are_the_chosen_one
    
    -else:
        {   
            -viuOOlho==ON:
                Você reconhece como provavelmente sendo o que você viu mais cedo no banco de trás do seu carro. O pequeno cristal arredondado ainda está ali.
            - (PRIME>0 or FATE>0) :
                Isso provavelmente explica a {PRIME>0:aura que você viu vinda da direção do carro|atração que você estava sentindo por alguma coisa na direção do carro}. Uma observação rápida do banco de trás encontra uma pequena pedra arredondada, mas lapidada em várias faces.
            -else:
                Você explica que não percebeu nada desse gênero.
                "Eu me lembro de ter jogado pela janela, ainda deve estar aqui atrás" Ele vai na direção do carro e olha por dentro da janela quebrada.
                "Ali! no banco de trás"
                Largado ao lado do cinto você vê uma pequena pedra arredondada, mas lapidada em várias faces.
        }
        ->pegando_o_olho_com_Janus
    }
}




->DONE

= interacao_janus_longe 
Você não tem certeza do que ele está procurando, mas ele ainda não te viu. Você poderia usar a oportunidade a seu favor.Ou simplesmente se aproximar, ele pode estar procurando por sobreviventes. #roll

*[Ir até lá cumprimenta-lo]
    --Você vai na direção dele, acenando para chamar sua atenção "Ei!". Ele logo vira na sua direção, e você consegue vê-lo melhor. Ele é jovem, tem os cabelos loiros despenteados e olhos claros, usa uma jaqueta escura e uma calça jeans bastante desbotada. Quando te vê ele para o que estava fazendo e acena de volta, te chamando para se aproximar.{auraVision==ON: As cores vibrantes ao redor dele esmaecem e dão espaço a um tom fechado de azul que sugere desconfiança.}
*[{rollTag(60)}Se aproximar silenciosamente]
    {(rollResult <= calcRoll(60)):
        -Você se aproxima com cuidado, usando as sombras da folhagem e a iluminação imprecisa das chamas ao seu favor. Você consegue chegar perto o bastante para vê-lo melhor. Ele é jovem, tem os cabelos loiros despenteados e olhos claros, usa uma jaqueta escura e uma calça jeans bastante desbotada. Ele está com certeza procurando alguma coisa ao redor do seu carro. {((PRIME>0) or (FATE>0)):Você se lembra da {(PRIME>0):aura que viu vindo dessa direção.|sensação de atração que sentiu.}|Ele constantemente olha para alguma coisa no banco de trás do carro.}

    Ele xinga baixo sobre ter queimado os dedos e parece estar procurando ao redor por algo que o ajude a alcançar o banco. Você teria que se aproximar para ver o que ele está procurando, e de qualquer forma se está no seu carro provavelmente te pertence. 

    Você sai das sombras e vai na direção do carro. Ele acena assim que te vê, de forma amigável aparentemente.
    -else:
        Você se aproxima com cuidado, usando as sombras da folhagem e a iluminação imprecisa das chamas ao seu favor. Você consegue chegar perto o bastante para vê-lo melhor. Ele é jovem, tem os cabelos loiros despenteados e olhos claros, usa uma jaqueta escura e uma calça jeans bastante desbotada.
        
         Ele parece estar resmungando ou falando sozinho, chegando mais perto você poderia...

        CRACK!

        Um galho especialmente seco e barulhento quebra quando você dá mais um passo. O homem olha na sua direção, e acena, de forma amigável aparentemente, convidando você a se aproximar. {auraVision==ON: As cores vibrantes ao redor dele esmaecem e dão espaço a um tom fechado de azul que sugere desconfiança.}
    }
*{FORCES>0}[{arcanaTag("forces")}Se aproximar silenciosamente controlando o som]
    --Se concentrando nas vibrações do ar, você consegue enxergar a energia em forma de som emanando sutilmente da sua respiração, das folhas sacudidas pelo vento e do rapaz que parece estar falando sozinho enquanto procura por algo ao redor do seu carro. Tocando nos seus pés você imagina um vácuo ao redor de cada um deles, uma bolha suprimindo som, e impedindo que o ar se mova. Em perfeito silênciovocê consegue se aproximar.
    
    Ele é jovem, tem os cabelos loiros despenteados e olhos claros, usa uma jaqueta escura e uma calça jeans bastante desbotada. Ele fala sozinho, reclamando sobre como queimou os dedos tentando pegar "a droga do olho". {((PRIME>0) or (FATE>0)):Você se lembra da {(PRIME>0):aura que viu vindo dessa direção.|sensação de atração que sentiu.}}
    
    Independente do que se trate se está no seu carro provavelmente te pertence. Você não vai descobrir mais do que isso se escondendo, liberando os seus pés do vácuo que você criou você decide falar com ele.

    "Ei!"

    Ele vira na sua direção quando te ouve e acena de forma amigável, convidando você a se aproximar. {auraVision==ON:As cores vibrantes ao redor dele esmaecem e dão espaço a um tom fechado de azul que sugere desconfiança}
*{SPACE>0}[{arcanaTag("space")}Estender seus sentidos naquela direção]
    --Ele ainda não parece ter te visto, por sorte não existe necessidade de se aproximar. Você mentaliza seus sentidos, sua audição e sua visão, desligados dos seus orgãos ou do seu corpo, uma entidade maleável, móvel. Você gentilmente arrmessa sua percepção na direção do carro, observando o homem como se estivesse ao seu lado.

    Ele é jovem, tem os cabelos loiros despenteados e olhos claros, usa uma jaqueta escura e uma calça jeans bastante desbotada. Ele constantemente olha para dentro do carro, na direção do banco de trás. {PRIME>0 or FATE>0:Você logo se lembra da {PRIME>0:aura|sensação de atração} que vinha do carro.}
    
    Ajustando um pouco o ângulo dos seus setidos você consegue ver o que parece ser uma pedra preciosa ou um cristal, redondo, do tamanho de uma bola de gude caído próximo ao cinto de segurança. Independente do que seja, se está dentro do seu carro provavelmente te pertence, mas você não vai conseguir fazer muito mais do que observar de onde está.
    ~viuOOlho = ON

    Saindo do seu esconderijo o rapaz logo percebe sua aproximação e acena amigávelmente para que você se aproxime.

- ->->



= leitura_de_aura

Antes mesmo de conseguir enxerga-lo direito você tem a impressão de que pode ver algo, ao redor dele, 

{((PRIME>0 and path != OBRIMOS) or (MIND>0 and path != MASTIGOS)):
    <> mas vai ser necessário um pouco de esforço para realmente discernir o que é.
    
    -else:
    <> claro como o dia.
}


*{PRIME>0}[prime_{path!=OBRIMOS:mana1_}Ver a alma dele]
    --Você vê percebe a alma como uma silhueta de luz ao redor e dentro do corpo, mas você não consegue distinguir nada de útil. Exceto pelas pequenas faíscas de luz que parecem piscar ao redor dele parece uma alma "normal" até onde você pode dizer. Na verdade algumas faíscas piscam ao redor da sua também,algo te diz que isso tem a ver com seu sonho e as coisas estranhas que você tem visto e feito desde que levantou. Algo te diz que ele também pode ver e fazer coisas.
*{MIND>0}[mind_{path!=MASTIGOS:mana1_}Ler a aura dele]
    ~auraVision = ON
    --Você consegue distinguir uma aura turva de luz colorida ao redor dele  {ondeEstava==0:enquanto ele se aproxima|mesmo contra a luz das chamas, ela se sobrepõe}. A aura é principalmente de um tom forte de violeta, com feixes vermelhos surgindo momentáriamente e se dissipando. Felicidade, euforia, é surpreendentemente óbvio o que as cores significam. Alguém está bastante animado em ver um acidente de carro.
*{MIND>0 and PRIME>0}[prime_mind_mana1_Ver ambos]
    ~auraVision = ON
    --Você vê percebe a alma dele como uma silhueta de luz, tingida pelas cores da aura ao redor e dentro do corpo, você não consegue distinguir nada de útil da alma em siexceto pelas pequenas faíscas de luz que parecem piscar ao redor dele, ela parece uma alma "normal" até onde você pode dizer. Na verdade algumas faíscas piscam ao redor da sua também, algo te diz que isso tem a ver com seu sonho e ascoisas estranhas que você tem visto e feito desde que levantou. Algo te diz que ele também pode ver e fazer coisas.
    
    --A aura é principalmente de um tom forte de violeta, com feixes vermelhos surgindo momentáriamente e se dissipando. Felicidade, euforia, é surpreendentemente óbvio o que as cores significam. Alguém está bastante animado em ver um acidente de carro.
*[Ignorar a aura ao redor dele]
    --Seja lá o que for não vale a pena se distrair com isso no momento. Você dispersa a imagem que emana dele e se concentra na pessoa em si.

- ->->

==cena_do_tronco
O peso que você sentia sobre as pernas é na verdade um tronco de árvore que tombou sobre você.

{LIFE>0:
    De alguma forma você sabe que a madeira ainda está viva, morrendo, porém viva. Existe potencial nessa energia vital, você acha que pode se livrar da árvore dessa foma.
}
{FORCES>0:
    A alguns metros de distância você repara nas chamas ao redor do carro, se você conseguisse trazer elas até aqui de alguma forma, talvez pudesse queimar o tronco, sem se queimar com alguma sorte.
}
    
{DEATH>0:
 Talvez você consiga simplesmente quebrar a madeira, se houvesse uma forma de deixa-la mais frágil.
}
 
{MATTER>1:
<>Ou, talvez, parece difícil, mas você acredita ser capaz de moldar a madeira, achar uma forma de torna-la mais leve.
}

*{LIFE>0} [dox{30+paradoxoAcumulado}_life_{path!=THYRSUS:mana1_}Transformar o tronco]
    -- -(tronco_vida)
    -- ~paradoxoAcumulado += paradoxoStep
    --Você coloca as mãos sobre a madeira, observando com calma, sentindo a energia vital que te chamou a atenção, você percebe o quão simples ela é, básico como um único acorde ou uma frase solta. Simples o bastante para compreender completamente sem esforço, simples o bastante para alterar uma letra e formar outra palavra.#roll

    --Você imagina algo vivo, porém menor, mas a árvore é grande, você tem matéria prima para muitos seres menores. Algo simples, algo leve, uma frase de poucas letras, uma imagem de poucas formas. O corpo, reto, magro. Dois círculos, finos como se de papel, leves, por que não coloridos? Pernas, antenas, orgãos e outros detalhes. Você cria uma imagem perfeita na sua mente, sua imaginação se acumulando como um músculo tensionado. Com uma figura perfeitamente clara em mente você arremessa sua vontade sobre o tronco, {rollResult<=30+paradoxoAcumulado:mas algo dá errado|e a realidade cede}.
    
    -- ->continue->
    
    --{rollResult<=(calcDox(30)):
        -A imagem que você criara se deforma na sua frente, as asas da borboleta encolhem e endurecem, ficam escuras e grudam no corpo como uma carapaça. A transformação começa e o tronco começa a tomar forma. Em pequenas lascas, partes do tronco criam pernas e se desgrudam, a madeira então cria cabeça, antenas e a carapaça brilhante, e as baratas correm ou voam para longe, algumas passando sobre suas pernas ou voando rente ao seu rosto. Cada vez mais delas rastejando sobre você, até um grande enxame ter se formado sobre todo seu corpo, te arranhando e mordendo antes de desaparecerem na escuridão [-1 Saúde]. Todas finalmente saem, e você pode se levantar. ~danoDox++
    -else:
        Em peque nas lascas, partes do tronco criam pernas e se desgrudam. Em seguida criam grandes asas coloridas, e voam para longe, inicialmente uma por uma, logo mais e mais, até que estão saindo as dezenas de cima de você. Em um pequeno turbilhão de cores e centenas de asas batendo as últimas borboletas levantam voo, levando o que restava do tronco com elas.
    }
*{FORCES>0} [{arcanaTag("forces")}Usar o fogo]
    -- -(tronco_forces)
    --Alguns metros a sua direita um carro (provavelmente seu carro) se encontra com o parachoque ao redor de um poste de luz, o capô aparentemente voou juto com você e está em algum canto escuro da beira da estrada, toda a parte da frente do carro está em chamas. Não está próximo o bastante para que você sinta miuta coisa além de uma ocasional onda de calor quando o vento bate. Curiosamente você sente as ondas de calor de forma diferente, o calor tem textura e cor, se você se concetrar pode ver ao redor das chamas ele se dissipando no ar frio da noite. Como corante em um vidro de água, subindo em ondas, sendo dispersado pelo vento.

    --O fogo poderia te ajudar, queimar esse tronco para que você pudesse se mover. Você poderia traze-lo a té aqui, você estica o braço na direção das chamas, muito longe com certeza, mas um vento mais forte bate, o calor é empurrado na sua direção e você agarra um punhado, uma onda de calor, segura na sua mão como uma porção de areia. Você abre a mão e ele se dispersa no ar, não bastaria de qualquer forma, você precisa do fogo.

    --Na sua mente você vê, uma corda, um laço, um conduite para as chamas, para traze-las até aqui, você imagina e refina a ideia até ser um conceito perfeito na sua mente, então arrmessando o braço na direção do fogo você impõe sua vontade sobre a realidade. Como em um show pirotécnico uma labareda voa pelo ar e cai sobre o tronco. Ali você pode cuidadosamente guiar a chama e o calor por entre os veios da madeira e concentrar a chama o bastante para que você possa quebrar o tronco em alguns minutos. Depois de controlar o próprio fogo foi simples o bastante não se queimar no processo, mas não foi possível fazer nada quanto a fumaça e cinza cobrindo seu corpo.
*{DEATH>0} [death_{path!=MOROS:mana1_}Destruir o tronco]
    --Mesmo sendo um tronco de bom tamanho você imagina que poderia tira-lo dali se fosse mais secos e oco, como uma árvore morta. {LIFE>0:Ela ainda parece estar viva na verdade|Você sabe que ela ainda está viva}, bastante ferida porém viva. Você passa as mãos ao longo do tronco, imaginando como sair dali, mas acidentalmente causa um corte, abre um pequeno buraco. Como que por um rasgo invisível você sente o pouco que restava de vida naquele tronco escorrendo sobre suas mãos. Em pouco tempo você tem certeza que ele está morto, porém continua tão pesado quanto.
    
    -- ->continue->

    --Ignorando por um momento as consequências morais de ter matado uma planta você foca sua atenção no cadáver sobre você. Qual era mesmo seu objetivo? Que a madeira apodrecesse e inchasse, depois se tornass e ressacada e esbranquiçada, oca e frágil, um esqueleto da árvore que foi. Privado da proteção da vida o vácuo da morte corroendo-o até que se tornasse nada.

    --Tudo isso está acontecendo, você sente. Porém muito mais devagar do que precisaria ser, impaciente você toma a morte nas próprias mãos,você lixa e maretela o tronco, esculpindo em madeira e decadência a perfeita imagem da árvore morta que você imaginou.

    --Você observa sua obra concluída, qualquer um diria que aquela árvore caíra a anos atrás, o casco branco e trincado, o interior oco e apodrecendo. Sem muito esforço você joga-o para o lado, vendo-se livre para levantar.
*{MATTER>1} [dox{30+paradoxoAcumulado}_matter_Moldar o tronco]
    -- -(tronco_materia)
    --~paradoxoAcumulado +=paradoxoStep
    --Com as mãos sobre a árvore você se põe a analisar a madeira, procurar por um ponto falho ou espaço onde pudesse conseguir um ponto de apoio melhor. Frustrado na tentativa de procurar a solução na superfície, o interior do tronco parece mais promissor, não o centro de madeira sólida, mas sua composição. Você vê na sua frente, claro como um livro tudo o que a madeira é, como ela age e reage. #roll

    --Você desfaz aquela informação, quebra tudo em pedaços como se recortasse letra por letra do livro, para então, com todo o alfabeto disponível, reescrever a história. Ponto por ponto você faz o tronco menos madeira, até que forma uma imagem mental perfeita de como você deseja que ele se torne. Com a imagem perfeitamente em ordem, como uma planta construída de recortes dos planos para outra casa, você impõe sua vontade sobre a realidade.
    
    -- ->continue->
    
    --{rollResult<=30+paradoxoAcumulado:
        Porém algo dá errado, você sente algo tentar interferir nos planos que você escreveu, como se uma mão fria, muito fria tocasse seu ombro antes que você possa terminar de transformar o tronco. Como se ele quisesse os planos que você escreveu para ele.

        O porteiro! Do seu sonho, ele te seguiu até aqui, você deveria estar morto certo? E aqui você, está tentando fazer... O que exatamente é isso?

        Você se move assustado, alguma coisa dentro de você doi. Dor de mais para alguém que deveria estar morto, mortos não sentem dor, você se lembra muito bem. Foi apenas uma dose de paranóia, respirando fundo e se concentrando você não tem problemas em transformar o tronco em um grande cilindro de isopor que é empurrado para o lado com facilidade.

        Embora você não tenha certeza se o hematoma no seu ombro estava ali quando você acordou. [-1 Saúde]
        
        -else:
        Respirando fundo e se concentrando você não tem problemas em transformar o tronco em um grande cilindro de isopor que é empurrado para o lado com facilidade.
    }

- ->->

== ve_algo ==
Além da escuridão da noite e da fumaça você tem a impressão de ter sua visão encoberta por algo mais, como um véu ou filtro que te limita os sentidos.

*[{MIND>0:mind_}{SPACE>0:space_}{SPIRIT>0:spirit_}{(MIND>0 and path!=MASTIGOS) or (SPACE>0 and path!=MASTIGOS) or (SPIRIT>0 and path!=THYRSUS):mana1_}Realmente abrir os olhos]
    - {SPACE>0:
    Sua visão se distorce por um segundo se esticando como um elástico tensionado ao redor da sua cabeça, sua visão periférica se expandindo aos poucos até chegar a sua nuca, e com um flash de luz tudo entra em foco. Você enxerga tudo ao seu redor,como se seus olhos tirassem uma perfeita foto panorâmica de 360 graus.
    {MIND>0: 
    Quando você se adapta a sua nova visão você sente potencial para mais. Você expande sua percepção além do que jamais poderia ter imaginado antes. Além de ver e ouvir você realmente sente, alguém, alguma coisa, ali com você. Uma consciência, porém não completamente humana. Parece estar atrás de você.
    }
    {SPIRIT>0:
    Algo mais impede sua visão, você tem o potencial para ver algo invisível, algo como o que você viu no seu sonho. Você remove esse véu da mesma forma que o anterior. Agora de olhos realmente abertos você {MIND>0:vê o dono da consciência que chamou sua atenção.|vê algo que simplesmente não estava ali um segundo antes.} ->continue->ve_o_gato->
    }
    {SPIRIT==0 and MIND>0:
    Mas mesmo sendo capaz de enxergar em todas as direção ao mesmo tempo, você não encontra nada ali.
    }
    }
    
    - {SPACE==0 and MIND>0:
    Você expande sua percepção além do que jamais poderia ter imaginado antes. Além de ver e ouvir você realmente sente, alguém, alguma coisa,ali com você. Uma consciência, porém não completamente humana. {SPACE==0:Mas você não vê mais nada ali com você.}
    }
    
    -{SPACE==0 and MIND ==0:
    Você sabe que existe potencial para algo mais nos seus sentidos, algo que foi invisível a sua vida toda mas não mais, algo que você tem a impressão de estar por aqui{DEATH>0 or FORCES>0 or LIFE>0 or MATTER>1:, mas que não pode ver da posiçao que está}.
    }
    ->continue->
//ve_algo END
->->

== ve_o_gato
~viuOGato = ON
Qualquer outro o chamaria de um monstro, mas algo dentro de você sabe que se trata de um espírito. Idêntico a um gato doméstico comum, porém com duas caudas, duas bocas e quatro olhos, de pelo todo branco execeto por uma das caudas e uma das patas, pretos. Os dois pares de olhos estão fixos em você, sem iris ou pupila, quatro orbes negros te observam com atenção. O gato não parece notar que foi descoberto, só agora você percebe que ele está atras de você e não parece ter se dado conta de como você expandiu seu dom da visão
->->

== persegue_o_gato

~ temp catbonus = 0
{SPIRIT>1:
    ~catbonus+=10    
}

{SPACE>0 and SPIRIT>0:
    ->surpreende_o_gato
    
    -else:
    ->corre_atras
}

=surpreende_o_gato
~catbonus += 10
Você se vira e vai na direção do espírito, você questiona por um se gundo se deveria tentar falar com ele ou só chama-lo com assobios como um gato. Antes que você pudesse decidir ele se vira e foge, disparando entre as árvores.

*[roll{catbonus+60-(dano+danoDox)*danoStep}_Perseguir o espirito]->corre_atras
*[Desistir e voltar]->encruzilhada.levantei_opcoes

=corre_atras
~ondeEstava = CHEGANDO
O gato corre e salta por entre as árvores, mas você consegue acompanha-lo de perto. Porém ele é rápido de mais para realmente alcançar.#roll

{rollResult<=(catbonus+60-(dano+danoDox)*danoStep):
//sucesso
    {SPIRIT>1:Um galho baixo te impede a passagem e te atrasa, você começa a perde-lo na escuridão, instintivamente vocêgrita "Pare!". E ele para, obedecendo seu comando, o espírito subtamente para de fugir e senta no chão, te olhando como se esperasse outra ordem.|Sempre próximo porém nunca realmente parando-o, você chega até uma parede de pedra, encurralando o espírito. Você poderia pega-lo agora. Ele vira para te encarar e senta,como se te desafiasse a se aproximar.}
    
    Mas antes que você possa responder de qualquer forma você sente um calafrio na base da espinha. Uma pedra ao lado do gato começa a brilhar com uma suave luz dourada{SPACE>0:, você pode sentir o espaço se distorcendo ao redor daquele ponto}. O feixo de luz se abre, e forma o limiar de um portal, conectando a floresta a uma sala de estar bem mobiliada, como se simplesmente houvesse um apartamento dentro da rocha. Do outro lado, uma jovem, em torno dos seus vinte anos, de cabelos loiros presos em um rabo de cavalo e olhos verdes. "Fortuna!"ela chama{SPIRIT>1:, tirando a gata do transe}. O espírito então se vira e salta portal a dentro, caindo nos braços da sua... dona?
    
    ->continue->
    
    A passagem imediatamente se fecha ea luz desaparece{SPACE>0:, você pode ver que ainda existe uma tênue conexão entre os dois pontos que o portal ligava, mas você é incapaz de determinar de onde a gata veio}
    
//fail    
    -else:
    Um galho baixo te impede a passagem e te atrasa, você começa a perde-lo na escuridão, quando se recupera ainda pode ouvir ele correndo mais adentro na mata fechada e corre para alcança-lo.

    O som subtamente para, e você acelera. A única trilha acaba em um parede de pedra, mas o espírito parece ter conseguido te despistar

}

<>. Você decide voltar até seu carro.
//ve o gato end
->encontra_Janus

== cura ==

Você se concentra no seu corpo, nos seus ferimentos, nas suas células, cada corte e contusão é clara como um farol para você. Com a destreza de uma tecelã, você liga músculos e emenda pele, absorve hematomas e solda ossos. Você restaura seu corpo a imagem de saúde perfeita que é possível a um ser humano.{danoDox>0: Execeto pelo{cena_do_tronco.tronco_vida:s arranhões e mordidas nas suas pernas. Aquelas baratas de alguma forma feriram mais do que o seu corpo, rasgando e cortando partes do seu ser fundamental.| hematoma no seu ombro. A mancha escura é um ferimento bem alémdo seu corpo, tendo ferido seu ser fundamental.}}

{danoDox>0:Você não consegue se curar pois a forma {cena_do_tronco.tronco_vida:das suas pernas saudáveis e intactas|do seu ombro saudável e intacto} deixou de exisir. Temporáriamente claro... você tem quase certeza.}
~dano--
~ondeEstava = ALI
->encontra_Janus

== investiga_o_carro ==

O incêndio parece estar de certa forma contido a parte da frente do carro, mas mesmo assim você se aproxima com cuidado, isso com certeza não é de forma alguma seguro.

{PRIME>0:A aura com vem do banco de trás, mais que uma luz colorida você a percebe com todos os seus sentidos. Ela irradia uma energia fria e rígida, que lembra metal ao tato, mas cheira a algo como incenso, com certeza tem um tipo de presença poderosa {path==MOROS:, você não consegue deixar de pensar o quanto tudo te faz lembrar do cemitério e das sombras do seu sonho}.}

Se arriscando um pouco mais de perto, você pode ver {PRIME>0:a origem do brilho.|o objeto que te atraiu até o carro.}
 Largado do lado do cinto de segurança, uma pedra arroxeada, do tamanho de uma bola de gude. Você precisaria pega-la para enxergar mais do que isso, a porta parece trancada, porém o vidro quebrou no acidente, de forma que talvez seja possível alcançar o interior, mas você corre o risco de se queimar.#roll
 ~viuOOlho = ON
 
*[{rollTag(70)}_Arriscar e pegar a pedra pela janela]
    --->carro_pegar->
*[Deixar a pedra como está]
    --->carro_ignorar->
*{FORCES>0}[forces_{path!=OBRIMOS:mana1_}Reduzir as chamas]
    --->carro_forces->
*{DEATH>0}[death_{path!=MOROS:mana1_}Sufocar as chamas]
    --->carro_death->
*{MATTER>0}[matter_{path!=MOROS:mana1_}Destrancar a porta]
    --->carro_matter->

- ->final

=carro_ignorar
Seja lá o que for não vale o risco de se machucar mais ainda, nem de passar tanto tempo ao lado de um motor em chamas.
->->

=carro_pegar
{rollResult<=70-((dano+danoDox)*danoStep):
    Você provavelmente vai se queimar feio se encostar no carro. O metal deve estar quente o bastante para deixar bolhas,mas o plástico nem tanto. Apoiad{oa()} em um detalhe opaco de plástico na lateral da porta você consegue se debruçar janela a dentro e agarrar a pedra. Você teme que ela também esteja quente, mas na verdade é quase gelada ao toque.
    
    -else:
    Você tem certeza que não deve tocar no metal, mas a pedra está de certa forma fora do seu alcance. Meio sem jeito e com medo de se queimar você tenta se debruçar janela a dentro.As pontas dos seus dedos tocam a pedra, se esticando um pouco mais você consegue coloca-la entre dois dedos, quando você tenta levanta-la ela escorrega e rola ao longo do banco,ameçando cair no chão e ficar completamente fora de alcance.Você rapidamente se apoia na porta do carro e agarra o cristal, a queimadura no abdomem dói, mas você vai viver.
    ~dano++
}
~donoDaPedra = EU
->->

=carro_forces
Você consegue sentir o calor emanando do metal e das chamas, uma aura avermelhada e palpável que você consegue moldar.

 Sem nenhuma dificuldade você comprime e diminui as chamas, até se extinguirem. Então cuidadosamente tocando no metal você dissipa o calor que cobria a porta do carro. Tornando perfeitamente seguro se apoiar nela para alcançar a pedra.
~donoDaPedra = EU
~fogoNoCarro = OFF
->->

=carro_death
Você consegue sentir o calor emanando do metal e das chamas, simples energia como qualquer outra, que você pode suprimir.

 Sem nenhuma dificuldade você comprime e diminui as chamas, até se extinguirem. Então cuidadosamente tocando no metal você consome o calor que cobria a porta do carro. Tornando perfeitamente seguro se apoiar nela para alcançar a pedra.
~donoDaPedra = EU
~fogoNoCarro = OFF
->->

=carro_matter
A tranca da porta parece ter sido danificada no acidente, na ve rdade você tem certeza que foi. Você consegue sentir as peças de metal intercaladas, ver todos os mecanismos complexos além da lataria do carro, como se o projeto do carro fosse colocado na sua frente. Se concentrando na porta você rapidamente encontra o problema, prontamente imaginando aquelas peças reparadas você consegue destrancar a porta, e com cuidado abri-la sem se queimar. Quem sabe com tempo o bastante você possa até recuperar esse carro.
~donoDaPedra = EU
->->

=final
{donoDaPedra==EU:
    ->continue-> 
    Com a pedra em mãos você consegue observa-la mais de perto. Ela parece ser feita de três "camadas", a mais externa completamente transparente como vidro, dentro dela, uma esfera menor, também transparente, mas tingida de púrpura, e no centro uma pedra ainda menor, opaca e brilhante, e completamente negra.

    Ela parece ter sido feita com a intenção de se assemelhar a um olho.
}
//END CARRO
~ondeEstava = ALI
->encontra_Janus

== procura_ajuda ==
~ondeEstava = CHEGANDO
A estrada se encontra completamente vazia, no escuro você não consegue ver nenhum ponto de referência no horizonte. Você instintivamente apalpa seus bolsos, você tinha um celular com certeza, provavelmente ele foi lançado com o impacto, talvez ele tenha tido a mesma sorte que você. Procurando ao redor do local em que você acordou e eventualmente um pouco além das árvores, você encontra várias migalhas de plástico e metal ao pé de uma árvore. Antes ele que a sua cabeça, você pensa.
->encontra_Janus


==== you_are_the_chosen_one ====
Assim que {donoDaPedra==EU:você mostra o cristal|você vê o cristal} {FATE>0:a sensação de atração que você sentia se intensifica. Alguma força parece agir não só sobre você e o cristal, mas sobre Janus também, ele parece perceber a mesma coisa, pois começa a sorrir descontroladamente. |Janus começa a sorrir descontroladamente, olhando para você depois para o cristal, e para você de novo.}

"Você é {gen==1:a terceira|o terceiro}!? Hahahaha! Esse dia só fica melhor"

*"Como assim? Do que você está falando?"
    --{gen==1:"Você é o cara que nós estávamos procurando! A mulher no caso..."|"De você! E desse olho!" {donoDaPedra==EU:Ele aponta pro cristal na sua mão.|Ele te mostra novamente o cristal, quase esfregando-o na sua cara.}}
*{FATE>0}"Você quer dizer essa força que eu sinto...?"
    --"Ah você sente também! ótimo, vai ser mais fácil de explciar"
*{FATE==0}Acho que você está vendo alguma coisa que eu não estou
    --"Você não sente? Talvez por que eu sou treinado em Destino, mas a aura parece tão forte em você quanto em mim, com certeza"
*"Você está realmente me assustando agora..."
    --"Desculpa! Desculpa! É que... longa história"

- Ele para para respirar por um segundo, tentando se acalmar. {auraVision==ON:Você consegue ver as cores na aura dele se tornando mais amenas.}

-"Eu tenho uma irmã, maga também. Quando despertamos nós descobrimos que tinhamos nascido sob uma profecia, mas ela também mencionava um "terceiro, de outro sangue". Alguém que não fosse da nossa família. Na verdade..." Ele olha ao redor apreensivo.

- "Eu te conto no caminho, é melhor sairmos daqui. Mais ninguém te viu, certo?"

*{viuOGato==ON or viuOGato == TUDO}"Eu vi um gato..."
    --"Era uma gata meio estranha? Quatro olhos, dois rabos, na verdade um espírito?"
    --Você confirma
    --"Merda! Era a Fortuna, o familiar da minha irmã, ela já deve saber que o olho está aqui, mas talvez ainda não saiba quem é você"
    -- {viuOGato==TUDO:
        "Na verdade..." Você acrescenta "Sua irmã é loira? Olhos verdes como os seus?"
        "Sim... como você sabe"
        "Eu segui a gata, vi quando ela abriu um portal e pulou nos braços da sua irmã"
        "Isso é pior ainda, quer dizer que ela..."
        }
*{viuOGato==OFF and MIND>0}"Eu achei ter sentido uma presença..."
    --"Presença? Como uma consciência? Você sabe Mente então, certo? Pode ter sido só um animal ou algo assim, mas é melhor..."
*{viuOGato==OFF and MIND==0}"Não você é a primeira pessoa que passa"
    --"Ótimo, talvez ela ainda não..."
    
-Janus para de falar de repente. Você sente um calafrio na base da espinha{viuOGato==TUDO: a mesma sensação de quando viu o portal sendo aberto}.

-{SPACE>0:
Sua visão continua estendida, passando atrás de você, por entre as árvores você consegue ver um vulto, passando rápido de mais para identificar. 
}
-{MIND>0:
    {SPACE>0:
        Além disso v
    -else:
        V
    }
    <>ocê sente mais uma consciência além da sua e de Janus, mais duas na verdade, diferentes entre si e diferentes da que você sentiu quando acordou.
}

-Janus puxa do bolso uma moeda de prata, grande como o que você veria em um filme de piratas, mas marcada com um pentagrama em um dos lados, e dois rostos virados em direções opostas do outro. Ele começa a move-la entre os dedos, e você tem a impressão que ele se concentra para conjurar algum tipo de magia.

->continue->

Você ouve um farfalhar entre as folhas e um bater de asas, algo passa ao seu lado, rápido de mais para identificar

{
-donoDaPedra==EU:
    Você sente uma dor aguda nas costas da mão, dois cortes profundos fazem você derrubar o cristal no chão. Em um segundo rasante, tão rápido quanto, o falcão que te atacou recolhe o artefato do chão e levanta voo. Janus se desconcentra, seja lá o que tentava fazer parece ter falhado.
    ~dano++
-donoDaPedra==JANUS:
    A sombra vai na direção de Janus, ele sufoca um grito de dor, mas deixa cair o cristal, ele para qualquer magia que estivesse tentando para tentar estancar os dois cortes profundos nas costas da mão. Logo em seguida o falcão que o atacou dá um segundo rasante, recolhendo o artefato e levantando voo.
}

De trás de uma das árvores um homem aparece, ele chama o animal, que pousa diligentemente sobre seu braço e lhe entrega o olho de cristal.
"Merda!" Janus xinga. "Parece que alguém te viu"
O recém-chegado é um homem negro, aparentando ser um pouco mais velho que o outro mago, um palmo mais alto e de compleição forte. Ele usa um casaco de frio pesado e tem os cabelos em dreadlocks curtos e bem cuidados. Ele agita o braço e a ave voa para uma árvore próxima.
"Janus! Sua irmã pediu que eu lhe avisasse que isso já foi longe de mais. Entregue os artefatos que você tem, e pare de procurar pelo rei. Não vale a pena o risco!"

->continue->

"Ah, claro Yoonir. Estávamos 2 a 1, eu finalmente ia conseguir empatar a pontuação com o olho. Você tem que adimitir que largar ele em um carro aleatório para despistar vocês foi genial. Nós temos uma profecia para cumprir, parar de competir agora simplesmente não é justo com o destino"
Enquanto fala Janus casualmente coloca as mãos atrás do corpo, assim que termina a frase saca uma pistola que tinha escondida nas costas. Apontando-a para Yoonir. Antes que ele possa atirar, o outro mago age mais rápido, ele faz um movimento com as mãos, você sente uma onda de calor seca e intensa emanando dele, um conjunto de runas radiantes surge sobre os braços de Janus, que começam a subtamente se contrair em espasmos descordenados. Ele dispara uma vez, e erra.
Yoonir então vira na sua direção.
"Você! Você é {gen==1:a terceira|o terceiro}, de outro sangue não é?! Janus é um lunático, você precisa vir comigo!"
"Lunático? Que exagero, nós dois sabemos que um tiro não ia te matar, eu só precisava te distrair enquanto você se cura"

{auraVision==ON:
    Você ainda consegue ver a aura de ambos, mas a magia parece estar se dissipando. A aura de Yoonir tem um tom fechado de azul e alguns tons ocilantes de verde, indicando desconfiança. A aura de Janus é tomada por tons escuros de verde e marrom, emoções negativas, inveja talvez, mas nada que indique agressividade, ou violência. O efeito acaba e sua visão volta ao normal.
}

*Ir com Yoonir
    ->ir_com_yoonir->
*Ajudar Janus
    ->ajudar_janus->
    
- ->continue->

{(dano+danoDox>=5):{amigo==YOONIR:->ferido_yoonir|->ferido_janus}}
{armaRoubada==ON:->shot_back->}
{amigo==YOONIR:->pos_combate_yoonir}
{amigo==JANUS:->pos_combate_janus}
- 
->DONE

== posto_de_gasolina
Ele entra em um posto de gasolina na beira da estrada, estacionando ao lado da loja de conveniência.
"Vamos entrar, podemos conversar com mais calma, e eu preciso comer alguma coisa"
->continue->

A loja de conveniência não tem nada de extraordinário, provavelmente algo bom com tudo que tem acontecido. Uma pequena lanchonete, alguns biscoitos e doces com o típico preço inflacionado desse tipo de lugar. Já é de manhã, o sol começou a nascer a pouco tempo, a loja está vazia exceto por alguns poucos funcionários sonolentos.
"Quer alguma coisa?" {amigo==YOONIR:Yoonir|Janus} pergunta.
Você põe a mão no bolso, e se dá conta de que perdeu sua carteira no acidente.
"Não se preocupe {amigo==YOONIR: eu pago|<>,você me paga depois}."
*[Uma água]
    --Você pega uma garrafa de água em uma das geladeiras ao lado do balcão.
    --~lanche=AGUA
*[Um café]
    --Uma das funcionárias lhe serve uma xícara fumegante de espresso acompanhado de um biscoito
    --~lanche=CAFE
*[Algo para comer]
    --Você escolhe entre os salgados da vitrine o que parece estar mais fresco e recebe uma coxinha de galinha em um guardanapo de papel
    --~lanche=COXINHA
*[Recusar]
    --Você educadamente recusa a oferta, esperando {amigo==YOONIR:Yoonir|Janus} se servir.
    
- Ele pega {amigo==YOONIR:uma água e um sanduíche natural|um café e um pacote de biscoitos recheados} e vocês vão se sentar em uma das mesas mais afastadas.

- ->continue->

{CheckForEggs()}

{amigo==YOONIR:->yoonir_pergunta_seu_nome->|->janus_pergunta_seu_nome->}

->continue->
{amigo==YOONIR:Ele dá uma mordida no sanduíche. |Ele abre um dos biscoitos, comendo o recheio antes do resto.}
{
    -lanche==NADA:
        Você percebe que talvez esteja com mais fome do que pensou.
    -lanche==AGUA:
        Você toma um gole de água, suas mãos ainda sujas de terra {cena_do_tronco.tronco_forces:e das cinzas do tronco }mancham o rótulo da garrafa.
    -lanche==CAFE:
        Você meche um pouco o café e prova para ter certeza de que não vai se queimar. {FORCES>0: Você ainda pode se queimar? Provavelmente não. Você tem a impressão de que poderia fazer essa xícara ferver ou congelar se quisesse.}{(MATTER>0): O café não é dos melhores, você pensa brincando se poderia resolver isso com magia. Mas na verdade você sabe que sim,que esse café poderia ser água, vinho ou mercúrio se você desejasse.}
    -lanche==COXINHA:
        Você dá uma mordida na coxinha, é boa o bastante para alguém com fome,melhor do que você esperava de uma loja de conveniência.
}

"Só mais um detalhe, {amigo==YOONIR: antes de te explicar a situação da profecia. Eu gostaria de saber qual é sua torre.| só para matar uma curiosidade minha, eu já te explico toda a situação da minha irmã e da profecia. Mas antes eu queria saber qual a sua torre.}"
Antes que você possa perguntar ele lembra que você é nov{oa()} nessa coisa de magia, e explica o que quis dizer.
"Ser um mago quer dizer que você despertou, sua alma foi até os planos astrais e você assinou seu nome em uma das cinco torres. E agora você pode canalizar a influência da sua torre para alterar esse mundo. Cada torre favorece influências diferentes, que nós chamamos de Arcanas, mas com trinamento qualquer mago pode dominar todos eles.

{amigo==YOONIR:Eu por exemplo sou um Thyrsus, eu naturalmente já domino os Arcanas de Espírito e Vida, mas também sou versado em Espaço.|Eu por exemplo sou um Acanthus, eu naturalmente já domino Destino e Tempo, mas também sei Primórdio e um pouco de Espírito.}
->continue->

"Então? Como foi seu despertar?"

{
    -path==ACANTHUS:
        *"Eu segui uma estrada de prata até uma festa..."
        *"Eu lembro de um baile de máscaras ou algo do tipo"
        *"Eu lembro de alguém roubando meu rosto"
    -path==MASTIGOS:
        *"Havia um trem e uma estrada de ferro que me acompanhava"
        *"Foi tudo como um grande pesadelo, como um sonho dentro do meu despertar"
        *"Eu lembro de demônios, um com chifres, um meio nojento"
    -path==MOROS:
        *"Eu lembro de ter morrido"
        *"Eu lembro da estrada de ouro, decorada com caveiras"
        *"Tinha um porteiro, em frente a portões de chumbo"
    -path==OBRIMOS:
        *"Eu lembro do dragão, me fizeram encarar um dragão"
        *"Havia um rei feito de fogo, e uma rainha coberta de magia"
        *"Eu segui por uma estrada de mármore, montad{oa()} em um cavalo branco, cercad{oa()} de querubins"
    -path==THYRSUS:
        *"Eu me lembro de vários espíritos, querendo falar comigo"
        *"Eu me lembro do lobo, um enorme lobo em uma árvore"
        *"Era uma floresta, tudo estava vivo e lutando para sobreviver"
}

-{amigo==YOONIR:
{
    -path==ACANTHUS:
         "Provavelmente um{gen==1:a} Acanthus, assim como o Janus e a irmã. Parece que além de controlar o destino vocês atraem ele"
    -path==MASTIGOS:
    "Provavelmente um{gen==1:a} Mastigos, {gen==1:uma bruxa|um bruxo}"
    Ele fica sério por um momento.
    "Ei. Não leve para o lado pessoal,mas um conselho, não é por que você pode ler a mente das pessoasque você deva, ok? Desculpe, é que eu já tive... deixa pra lá"
    -path==MOROS:
         Moros, um{gen==1:a} necromante. Não é nada pessoal, mas eu agradeço se você tentar manter zumbis e fantasmas afastados de mim. Eu acho que é por eu estar mais acostumado com magias de Vida, mas os mortos-vivos me incomodam"
    -path==OBRIMOS:
        "Isso soa como um Obrimos, torre dos taumaturgos. Eu vou te apresentar o Hélio, outro mago que está nos ajudando, ele também é um Obrimos, pode te aconcelhar até você ter um controle melhor da sua magia. Quando vocês não estão lançando fogo e trovões estão controlando mana, todo cuidado é pouco"
    -path==THYRSUS:
        Xamã, com certeza. Tudo parecia tentar te matar, e ao mesmo tempo você nunca se sentiu tão viv{gen==1:a? Você é uma|o? Você é um} Thyrsus, como eu. Talvez eu possa te ensinar alguma coisa quando tivermos mais tempo"
}
}

-{amigo==JANUS:
{
    -path==ACANTHUS:
    "Parece que temos mais um{gen==1:a} Acanthus nessa profecia, é a mesma torre que eu e minha irmã. Bom e velho reino astral de Arcadia. Deve ser essa ligação com o destino sabe, atrai profecias para a gente.
    -path==MASTIGOS:
    "Se as leis da física não faziam sentido ou você achou que estava no inferno provavelmente você é um{gen==1:a bruxa, uma| bruxo, um} Mastigos. Eu vou te apresentar a Psiquê, outra maga da mesma torre que você que está me ajudando com toda essa coisa da profecia."
    -path==MOROS:"Parece que você visitou Stygia então. Muitos mortos, muito ouro e chumbo? Você é um{gen==1:a} Moros, ou necromante. Você vai se dar bem com a Magpie, é outra maga da mesma torre que você que está me ajudando com toda essa coisa da profecia."
    -path==OBRIMOS:"Eu posso estar errado, mas Obrimos eu acho. Eu não trocaria sorte e poder voltar no tempo por nada, mas controlar raios e trovões é tipo, o segundo melhor."
    -path==THYRSUS:
        "Provavelmente Thyrsus. Um{gen==1:a} xamã como nosso bom amigo Yoonir. Além de iluminação espiritual e harmonia com todas as coisas vivas você nunca mais vai ter uma ressaca, talvez o uso mais nobre dos poderes que o destino nos concedeu."
}
}

->continue->  //{amigo==YOONIR:

{amigo==YOONIR:Yoonir da mais uma mordida no sanduíche, e toma um gole de água.|Janus toma apenas um gole do café e passa a molhar os biscoitos nele antes de come-los.}

{amigo==YOONIR:->papo_serio_yoonir->|->papo_serio_janus->}

->continue->

{terminouComAPedra==ON:{amigo==YOONIR:->analisa_o_olho_yoonir->|->analisa_o_olho_janus->}->continue->}

{amigo==YOONIR:
    Ele termina o sanduíche e joga a embalagem e a garrafa de água vazias em uma lixeira próxima.
    {
        -posicao == CONCORDO:
            "Então? Vamos? O pessoal vai ficar feliz em ver que você está do nosso lado. Principalmente a Moira"
        -posicao == MUDEIDEIDEIA:
            "Então? Você vem comigo ou realmente concorda com Janus? Não se preocupe, eu não vou te largar aqui no meio da estrada se disser que não, te deixo em algum lugar antes de voltar para o meu grupo. Quem sabe você não muda de ideia no caminho"
        -posicao == NAOQUERO:
            "Então? Vem comigo? Eu posso te deixar em algum lugar se realmente não quiser nos ajudar, mas seria ótimo se você pensasse no assunto"
    }
}
{amigo==JANUS:
    Ele termina o café, já um tanto frio em um só gole, e rudimentarmente fecha o pacote de biscoitos com um pedaço daprópria embalagem e coloca-o no bolso.
    {
    -posicao==CONCORDO:
        "Então você vem comigo né? Vai se juntar ao team Janus?"
    -posicao==MUDEIDEIDEIA:
        "Vamos? Eu te dou uma carona até algum lugar, se você ainda quiser se juntar ao Yoonir eu até ligo para ele para vocês se encontrarem"
    -posicao==NAOQUERO:
        "Vamos? Eu te dou uma carona até algum lugar, se você quiser mesmo tentar fugir do seu destino. Ou você pode se juntar a nós de uma vez."
    }
}

Antes que você possa responder de qualquer forma, você sente uma dor aguda perna direita. Como se todos os seus nervos disparessem ao mesmo tempo de uma vez só e então parassem. Mas você ainda sente uma estranha pressão acima do joelho.

"O que houve?!"

{amigo==YOONIR:Yoonir|Janus} pergunta preocupado. Ele olha para você e para sua perna, mas não parece haver nada de errado. Você vê ele fazendo um curto gesto próximo dos olhos, alguma magia de visão provavelmente.

"Wow! Você consegue ver isso?"

**{FATE>0}[{arcanaTag("fate")}Usar a visão mágica]
    ---~ultimaVisao=VISAOF
    ---Você esfrega seus olhos, e se concentra em tentar enchergar os fios do destino ao seu redor 
**{SPACE>0}[{arcanaTag("space")}Usar a visão mágica]
    ---~ultimaVisao = VISAOS
    ---Você abre os olhos, tentando enxergar as conexões ao redor de você além dos conceitos de proximidade e distância
**{(FATE==0 and SPACE==0)}"Não"
    ---"Você não deve ter o arcana. Aqui!"
    ---Ele toca sua testa {amigo==JANUS:com a moeda }. Você sente a magia recaindo sobre a sua visão, {amigo==YOONIR:você enxerga as conexões além das distâncias entre entre as coisas. Como um mago hábil no arcana de Espaço faria|você enxerga os fios do destino ao seu redor}.

-Ao redor da sua perna, você consegue ver um emaranhado de fios dourados, presos a matriz da sua alma mágica, mas também presos especificamente a sua perna. Os fios se estendem além do posto de gasolina, atravessando vários quilómetros em uma linha reta incorpórea que desaparece no horizonte.

{amigo==YOONIR:
    Yoonir se vira para você<>
    {
        -posicao == CONCORDO:
            , sorrindo.
            "Acho que eu vou ficar te devendo a carona. Eu vou ligarpara a Moira e avisar que {terminouComAPedra==ON:vamos ter um olho e uma perna para entregar a ela|não conseguimos o olho, mas vamos voltar para casa com a perna"}
        -posicao == MUDEIDEIDEIA:
            , sério.
            "Desculpe, mas agora eu vou ter que insistir que você trabalhe conosco."
        -posicao == NAOQUERO:
            .
            "Eu sei que você já fez bastante por mim, mas acho que vou precisar da sua ajuda mais uma vez."
    }
}

{amigo==JANUS:
    Janus se vira para você<>
    {
    -posicao == CONCORDO:
    , sorrindo.
    "Se precisar ir ao banheiro vai agora! Por que eu pretendo seguir essa linha até o meu próximo pedaço de Rei!"
    -posicao == MUDEIDEIDEIA:
    .
    "Mudança de planos. Você não precisa me ajudar, mas eu com certeza não vou te entregar para minha irmã tão fácil assim"
    -posicao == NAOQUERO:
    , sorrindo.
    "O que foi que eu disse? Como você pretende fugir disso? Seu destino está literalmente amarrado a sua perna"
    }
}

- FIIIIIIIIIM
-->END

=analisa_o_olho_yoonir
~PRIME=1
{amigo==YOONIR:Yoonir tira o cristal do bolso do casaco e começa a examina-lo sobre a mesa.}

*"Mas... ele faz alguma coisa?"
    --"Não tenho certeza. O Hélio geralmente verifica os que nós conseguimos para saber se são encantados de alguma forma
*"Vocês quase se mataram por um pedaço redondo de vidro?"
    --"Além de ser uma parte do tirano que pode destruir toda nossa civilização. Eles geralmente são artefatos poderosos por si só. Hélio vai saber dizer que habilidades ele tem

-{(PRIME>0 and posicao!=MUDEIDEIDEIA):
    <>, se você tiver habilidade com o Arcana de Primórdio talvez consiga, quer tentar?
    *[prime_Tentar]
        Ele te entrega o cristal, você segura ele e observa com muita atenção a aura mágica ao seu redor. A mesma que você conseguia ver no banco de trás do seu carro, porém vendo de perto e com calma você consegue ler a magia como um livro.
        Parecem dois encantamentos, ambos associados a visão, o que parece adequado, você pensa. Um é estruturado de tal forma que sugere ampliação, como se permitisse enchergar em várias direções ao mesmo tempo, você tem a impressão de que é uma magia de Espaço. O outro parece tratar de ver algo que geralmente é invisível, você tem a impressão de que é uma magia do arcana Morte, mas é sóo que você consegue descobrir.
        Você devolve o olho e conta o que conseguiu entender para Yoonir, ele te esclarece sobre a segunda magia.
        "Provavelmente um encantamento para ver fantasmas. Ah, sim , fantasmas existem também, vá se acostumando a esse tipo de surpresa, é saudável manter uma mente aberta a partir de agora"
    *[Não tentar]
        "Ok então. Hélio sempre gosta de explicar os artefatos de qualquer forma."
    -else:
        ->->
}
- ->->

=analisa_o_olho_janus

Janus então tira o olho de cristal do bolso e começa a estuda-lo contra a luz.
*"Mas... ele faz alguma coisa?"
    --"É o que eu estou vendo agora, todos os que nós achamos até agora faziam..."
*"Vocês quase se mataram por um pedaço redondo de vidro?"
    --"É, mas todo artefato também vem com poderes, esse aqui por exemplo..."

-  Parece que te dá o poder de ver fantasmas, {DEATH>0: não é muito útil para {gen==1:uma|um} necromante como você. Vocês já fazem isso.| falando nisso fantasmas existem. Dizem que vampiros e lobisomens também, mas sei lá, eu nunca vi.}
-   Hum, acho que também te dá aquele poder do arcana de Espaço, de enxergar em 360 graus. Eu sei que nós precisamos de todos eles, mas eu já vi melhores."
->->


=papo_serio_yoonir

"Bem... agora sobre a profecia."

 Ele termina a garrafa de água em um grande gole antes de começar.

 "Você conheceu Janus certo? Ele tem uma irmã gêmea, Moira. Desde que eram crianças, antes mesmo de despertarem eles tem sonhos sobre esse mesmo Rei. O antigo Rei de Atlantis, líder de uma cidade antiga, repleta de magos. Quando eram menores ambos sonhavam que estavam passeando pelas ruas da cidade, ouvindo seus discursos, ou que eram concelheiros em sua corte."
 
->continue->

"Os sonhos continuaram até eles despertarem, ao mesmo tempo, adolecentes ainda. Quando despertaram puderam ver seu destino. Eles, junto de uma terceira alma, de outro sangue, iriam trazer o Rei de volta a vida. Foi revelado a eles que o corpo do rei foi espalhado pelos cinco planos astrais, e as partes retornaram ao nosso plano imbuídas de magia. Então os dois se juntaram para procurar pelas partes, usando bibliotecas arcanas e pesquisando livros antigos eles começarama encontra-las, foi aí que nós nos conhecemos, quando eles ainda estavam juntos, éramos seis procurando os artefatos."

->continue->

"Até que os sonhos voltaram, novamente, os dois voltaram a sonhar com o Rei, mas onde antes eles viam o passado, eles passaram a ver o futuro. De acordo com Janus o retorno do Rei iria despertar toda a humanidade, e todos teriam a chance de se tornar magos. Mas Moira tinha pesadelos, ela via o Rei cercado apenas dos magos mais poderosos, magias de poder inimaginável selavam os reinos astrais além do alcance de qualquer um que não jurasse sua alma a ele. Os magos do seu concílio eram os únicos que tinham permissão para praticar magia e nenhum novo despertar jamais ocorreu"

->continue->

"Eles discutiram, brigaram, e se separaram. Hélio, Moira e eu pretendemos juntar as partes do Rei para invocar seu espírito e destruí-lo. Janus, Magpie e Psiquê querem trazê-lo de volta a vida."

->continue->

"Então? Agora que ouviu tudo, entendeu o que está acontecendo? Você está queit{oa()}, o que você acha?" 

*"Eu concordo com vocês, Janus é insano"
    --~posicao=CONCORDO
    --"Ele com certeza não é equilibrado, mas ele era uma boa pessoacom certeza. Mas hoje em dia... eu não sei. {yoonirAtingido==ON:Ele atirou em mim|Ele apontou uma arma para mim}, eu sei que aquela pistola dele está encantada para não matar, mas mesmo assim. Ele poderia desencantar ela quando quiser, eu acho que não confio mais nele, sabe?"
*"Mas o que acontece se Janus tiver razão?"
    --~posicao=MUDEIDEIDEIA
    --"Eu não sei, mas se ele estiver errado a humanidade toda sai perdendo. Se você preferir ajuda-lo fique a vontade. Não vamos te forçar a ficar do nosso lado{armaRoubada==TUDO:, mas depois daquilo? Eu vi que você tentou atirar nele, boa sorte voltando}
    --{terminouComAPedra==ON:. O olho do Rei fica comigo de qualquer forma, obrigado por me ajudar, mas eu não posso simplesmente te entrega-lo}.
*"Eu prefiro não me envolver sabe..."
    --~posicao=NAOQUERO
    --"Não se preocupe, não vamos te obrigar a escolher um lado nessa disputa. Eu aprecio toda a ajuda e confiança que você me ofereceu até agora."
- ->->

=papo_serio_janus

"Agora, vamos a parte importante."

 "Como já eu disse eu tenho uma irmã. Moira o nome dela. Desde que éramos crianças, sonhamos com esse cara, um Rei de uma cidade chamada Atlantis. Uma cidade muito antiga e feita para magos, eu lembro até hoje, era incrível, eles podiam fazer magia quando quisessem, não existiam paradoxos, e qualquer um podia se despertar se tentasse. Claro que na época eu não sabia o que era magia, magia de verdade, eu só acháva que nós éramos irmãos tendo sonhos iguais, o que já era legal o bastante pra mim."
 
->continue->

"Os sonhos duraram até nós despertarmos, ao mesmo tempo, como bons gêmeos. No nosso despertar nós conseguimos ver a profecia. Dizia que nós dois, junto com você, uma terceira alma de outro sangue, nas palavras da profecia, estávamos destinados a trazer o Rei de volta a vida. Nós descobrimos que o corpo do rei foi espalhado pelos cinco planos astrais, e as partes então retornaram ao nosso mundo como artefatos mágicos. Nós nos juntamos e começamos a procura-las com a ajuda de alguns outros magos que nós conhecíamos, inclusive o Yoonir, nós trabalhávamos juntos a alguns meses atrás, bons tempos."
->continue->

"O problema foi que enquanto nós e a nossa gangue do Scooby Doo recolhíamos artefatos mágicos eu e minha irmã voltamos a sonhar com o Rei. Mas ao invés de sonhar com o passado nós sonhávamos com ele retornando. Eu vi ele tornando nosso mundo a nova Atlantis, todos podiam praticar magia e todos tinham uma chance de despertar, as pessoas podiam usar magia para resolver crises ambientais e questões de guerra. Era utópico mesmo sabe, no nível individual ainda haviam tantos magos ruins quanto existem pessoas ruins, mas numa escala global eu tinha a impressão do mundo ser um lugar melhor. Mas minha irmã tinha pesadelos, ela viu o Rei escravizando as pessoas, selando os reinos astrais para que nenhum despertar jamais ocorresse"
->continue->

"Nós discutimos, nos separamos, o time se dividiu. Eu, Magpie e Psiquê queremos trazer o rei de volta a vida. Yoonir, minha irmã e Helio estão tentando destruir o rei, mas acho que eles precisam de todos os artefatos pra isso."
->continue->

"Agora que você ouviu tudo? O que você acha? Eu sei que eu devo parecer meio maluco. Mas depois de despertar eu só comecei a aceitar os riscos sabe? Se você pode controlar as variáveis aseu favor, vale a pena. Minha arma por exemplo, eu nunca tentaria matar o Yoonir, mas minha arma é encantada para nunca matar alguém. Você pode apontar ela pra sua cabeça e puxar o gatilho se quiser,ela vai travar ou alguém vai aparecer para tirar ela da sua mão, ela talvez até exploda, mas alguma coisa sempre acontece que impeça ela de matar. O lado ruim é que a mira dela é péssima mesmo para tiros não letais"
 "Da forma que eu vejo, se eu ganho nós alcançamos uma utopia mágica,se minha irmã ganha nada acontece."
 
 *"Na verdade eu acho que você está certo"
    --~posicao=CONCORDO
    --"Ei, obrigado! Eu acho que esse deveria ser o objetivo sabe? De todos nós, de todo mago. Conseguir despertar o resto do mundo, levar para eles o que nós temos. Até onde eu sei o Rei é a única coisa que já teve alguma chance de conseguir isso, pode ser a única chance que a humanidade vai ter de despertar."
 *"Sinceramente? Acho que deveria ter ido com o Yoonir"
    --~posicao=MUDEIDEIDEIA
    --"Eu não te culpo, o lado deles é a opção segura mesmo, pode ir para o lado deles se quiser.{yoonirAtingido==ON:Eu só não sei como ele vai lidar com toda a situação de nós termos atirado nele, boa sorte com isso.}{terminouComAPedra==ON: Mas o olho fica comigo, Obrigado por me ajudar a conseguir, mas eu não vou simplesmente entregar ele.}
 *"Eu prefiro não me envolver sabe..."
    --~posicao=NAOQUERO
    --"Hun? Sério?" Ele dá um sorriso debochado "É seu destino, meio difícil de não se envolver com ele {path==ACANTHUS:um{gen==1:a} Acanthus deveria saber disso. Mas você é nov{oa()}, eu entendo.|{FATE>0:você também viu não foi? A força que te impulsiona na direção dos artefatos?}}.
    --É claro que eu não vou te obrigar a nada, mas eu duvido que você não vá encontrar mais artefatos 'surgindo' no seu carro"
- ->->

=yoonir_pergunta_seu_nome
"Então... eu ainda não sei seu nome"
*["{nomeCompleto}"]
    --{nomeEasterEgg==ON:"{nomeCurto}? Hum..." Ele para pensativo por um momento. "Você tem o mesmo nome que {gen==1:uma heroína|um herói}  do mundo mágico, sabia? Mais uma lenda pra falar a verdade, ninguém tem certeza se aconteceu mesmo..."->continue->}
    --"Nomes são coisas poderosas entre Magos, tome nota e tome cuidado com quem sabe o seu, mas não se preocupe, você pode confiar em mim."
*["Eu prefiro não dizer"]
    --"Oh!" Ele parece um pouco envergonhado em ter perguntado. "Desculpe, eu não quis dizer desse jeito. Eu diria que você pode confiar em mim com seu nome verdadeiro, mas acabamos de nos conhecer, seria tolo da sua parte acreditar em mim"
    
Ele abre a garrafa de água e toma um gole.
-(nomeDasSombrasInY)

"Você precisa de um nome das sombras. Magos tem um segundo nome para usar entre nós, Yoonir não está na minha certidão de nascimento sabe? Tem algo em mente?"

#input
#nomeDasSombras
->continue->
{nomeDasSombras==nomeCurto:
    Seu nome das sombras deve ser diferente do seu nome real.
    ->nomeDasSombrasInY
}
    
{(CheckForShadowEggs()==ON):
    {(nomeEasterEgg==ON):
        "{nomeDasSombras}? Sério? Curioso você escolher esse nome, também tem relação com aquela lenda que eu comentei"
        -else:
        "{nomeDasSombras}? Bom nome, engraçado que também é o nome de {gen==1:uma heroína|um herói} de uma certa lenda contada entre Magos"
    }
    -else:
    "{nomeDasSombras}? Bom nome. Posso me referir a você de forma adequada para {gen==1:uma maga|um mago} agora"
}
->->

=janus_pergunta_seu_nome
{nomeEasterEgg==ON:
    "Então, {nomeCurto}..." Ele dá um sorriso "Você tem o mesmo nome que {gen==1:uma heroína|um herói} do mundo mágico, sabia? Mais uma lenda pra falar a verdade, ninguém tem certeza se aconteceu mesmo..."
    ->continue->
}
-(nomeDasSombrasInJ)
"{nomeCompleto}! Você precisa de um nome de mag{oa()}. Seu nome de verdade tem poder, principalmente poder para os outros te espionarem. Você precisa escolher um nome das sombras, um nome de mago. Tem algo em mente?"
#input
#nomeDasSombras
->continue->

{nomeDasSombras==nomeCurto:
    Seu nome das sombras deve ser diferente do seu nome real
    ->nomeDasSombrasInJ
}
    
{(CheckForShadowEggs()==ON):
    {(nomeEasterEgg==ON):
        "{nomeDasSombras}? Sério? Engraçado você escolher esse nome, também tem a ver com aquela lenda que eu falei"
        -else:
        "{nomeDasSombras}? Bom nome, engraçado que também é o nome de {gen==1:uma heroína|um herói} de uma lenda entre Magos"
    }
    -else:
    "{nomeDasSombras}? Legal. Já posso falar com você como {gen==1:uma maga|um mago} de verdade agora"
}

->->


== morto
{(amigo==YOONIR):
    Seu corpo todo dói, mas com alguma dificuldade você consegue acompanhar Yoonir, mesmo ferid{oa()} e mancando. Ele se vira na sua direção, sem parar de correr mas desacelerando ao notar sua condição.
    "Você está bem? Pare um segundo eu posso te curar se..."
    Tudo fica escuro, você consegue apenas sentir seu corpo cair antes de perder completamente sua consciência.
    -else:
    Yoonir escapa{(terminouComAPedra==OFF): com o artefato}, você olha para Janus como quem diz "E agora?", mas derrepente todo seu corpo dói. A adrenalina estava te distraindo dos seus ferimentos, mas você rapidamente sente sua cabeça girar, tudo fica escuro e você perde completamente a consciência.
}

->continue->

->DONE

== shot_back ==
Yoonir fugiu por entre as árvores, e lhe chama para segui-lo.Mas Janus está desarmado na sua frente, você com a pistola dele em mãos. Ele talvez continue a perseguir vocês, se ele é realmente um lunático, mas nas verdade ele não parecia tão perigoso assim antes do outro mago chegar.
*[Disparar contra Janus]
    -- ~armaRoubada = TUDO
    --Você aponta a arma para Janus, a expressão dele muda de frustração para legítima surpresa.
    --"Wow! Wow! Wow! Vamos com calma aí. Eu não sou um xamã quenem aquele cara, eu estou sozinho aqui e não tenho como me curar"
    **[Mirar na perna]
        ---Você não responde, simplesmente aponta a arma para as pernas dele e puxa o gatilho.
        ---{FATE>0:Você ouve um soar de cordas, osfios do destino se tensionam como uma guitarra desafinadapara protege-lo.}
        ---O tiro acerta-o na coxa, você ouve um som metálico, e não vê sangue. Ele tranquilamente põe a mão no bolso e tira um isqueiro zippo amassado.
        ---"Wow, que sorte a minha não é?" Ele diz sarcástico "Já é o quarto isqueiro que desvia uma bala. Falando nisso eu só tinha uma bala, então..."
        ---Ele começa a calmamente seguir de volta para sua motocicleta.
        ---"Só vai logo com ele, manda um abraço pra minha irmã."
    **[Mirar na cabeça]
        ---Você não responde, simplesmente aponta a arma para testa dele e puxa o gatilho. A arma emperra.
        ---"Você acabou de tentar me matar!? Nossa, quando você acha que conhece as pessoas... Eu disse, essa arma não mata, ela é encantada pra isso."
        ---Ele começa a calmamente seguir de volta para sua motocicleta.
        ---"Só vai logo com ele, manda um abraço pra minha irmã."
*[Dar as costas e acompanhar Yoonir]
    --Guardando a pistola na cintura assim como o mago havia feito para esconde-la, você dá as costas e corre para entre as árvores.
- ->continue->
- ->->

== tutorial_mana ==
->continue->
Existem duas situações em que você utiliza mana, algumas magias mais poderosas sempre vão precisar de um ou mais pontos de mana para serem utilizadas. E qualquer magia que não seja dos seus arcanas principais, que no seu caso são {path==ACANTHUS:Destino e Tempo}{path==MOROS:Morte e Matéria}{path==MASTIGOS:Mente e Espaço}{path==OBRIMOS:Forças e Primórdio}{path==THYRSUS:Vida e Espírito}, custa um ponto de mana a mais para ser usada.

->continue->
->->

== tutorial_paradoxo ==
As vezes, distorcer a realidade pode ter consequências graves. Usar magia de forma que poderia ser confundida com sorte, coincidência, ou algum fenômeno estranho porém sutil é geralmente inofensivo. Porém feitos realmente impossíveis que desafiem as leis naturais podem resultar em paradoxos. A realidade resiste a ser alterada, podendo fazer sua magia falhar, agir de forma inesperada ou te ferir de alguma forma. Dano causado por paradoxo não pode ser curado com magia e é indicado por um X na sua barra de saúde. Opções que tenham risco de paradoxo vão estar indicadas por um (P), seguido da chance do efeito ser bem sucedido e o paradoxo NãO acontecer. Forçar a realidade repetidamente é perigoso, cada vez que você arrisca causar pardoxo (ele ocorrendo ou não) as chances de controlar os próximos diminuem.

->continue->
->->


== tutorial_risco ==
Algumas situações arriscadas, difíceis ou perigosas vão ter uma chance de falhar, essas opções vão estar indicadas por um (C), seguido da chance da ação dar certo. O principal fator que influencia suas chances é sua saúde, mas suas escolhas ao longo do jogo também podem facilitar ou dificultar certas ações. Falhar em uma ação nunca significa o fim do jogo, apenas pode trazer consequências desagradáveis ao longo da história.

->continue->
->->

== continue ==
+[Continuar...]
->->

== levantar ==
+[Levantar-se...]
->->

== function oa() ==
{gen == 0:
    ~return "o"
    
-else:
    ~return "a"
}

== function rollTag(baseValue)
    ~temp a =baseValue-((dano+danoDox)*danoStep)
    ~return "roll" + a + "_"

== function calcRoll(baseValue)
    ~return (baseValue-((dano+danoDox)*danoStep))

== function doxTag(baseValue)
    ~temp a=baseValue + paradoxoAcumulado
    ~ return "dox"+a+"_"

== function calcDox(baseValue)
    ~return (baseValue + paradoxoAcumulado)

== function arcanaTag(arcana) ==
{ 
-arcana == "death":
    {
        -path == MOROS:
            ~return "death_"
        -else:
            ~return "death_mana1_"
    }
-arcana == "fate":
    {
        -path == ACANTHUS:
            ~return "fate_"
        -else:
            ~return "fate_mana1_"
    }
-arcana == "forces":
    {
        -path == OBRIMOS:
            ~return "forces_"
        -else:
            ~return "forces_mana1_"
    }
-arcana == "life":
    {
        -path == THYRSUS:
            ~return "life_"
        -else:
            ~return "life_mana1_"
    }
-arcana == "matter":
    {
        -path == MOROS:
            ~return "matter_"
        -else:
            ~return "matter_mana1_"
    }
-arcana == "mind":
    {
        -path == MASTIGOS:
            ~return "mind_"
        -else:
            ~return "mind_mana1_"
    }
-arcana == "prime":
    {
        -path == OBRIMOS:
            ~return "prime_"
        -else:
            ~return "prime_mana1_"
    }
-arcana == "space":
    {
        -path == MASTIGOS:
            ~return "space_"
        -else:
            ~return "space_mana1_"
    }
-arcana == "spirit":
    {
        -path == THYRSUS:
            ~return "spirit_"
        -else:
            ~return "spirit_mana1_"
    }
-arcana == "time":
    {
        -path == ACANTHUS:
            ~return "time_"
        -else:
            ~return "time_mana1_"
    }

 -else:
    ~return "0"
}

== function CheckForEggs() ==
{(nomeCurto == "Farinha" or nomeCurto == "Tupucã" or nomeCurto == "Tupuca" or nomeCurto == "Pierre" or nomeCurto == "Ares" or nomeCurto == "Jacob" or nomeCurto == "Corvo" or nomeCurto == "Pandora" or nomeCurto == "Elizabeth" or nomeCurto == "Mano"):
    ~nomeEasterEgg = ON
}

== function CheckForShadowEggs() ==
{(nomeDasSombras == "Farinha" or nomeDasSombras == "Tupucã" or nomeDasSombras == "Tupuca" or nomeDasSombras == "Pierre" or nomeDasSombras == "Ares" or nomeDasSombras == "Jacob" or nomeDasSombras == "Corvo" or nomeDasSombras == "Pandora" or nomeDasSombras == "Elizabeth" or nomeDasSombras == "Mano"):
        ~return ON
    -else:
        ~return OFF
}

