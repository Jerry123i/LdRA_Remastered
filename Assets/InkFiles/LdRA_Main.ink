INCLUDE thyrsus
INCLUDE acanthus
INCLUDE mastigos
INCLUDE obrimos
INCLUDE moros

VAR nomeCompleto = "nome"
VAR nomeCurto = "nom"

VAR gen  = 2

VAR path = 0
    CONST ACANTHUS = 0
    CONST MASTIGOS = 1
    CONST MOROS    = 2
    CONST OBRIMOS  = 3
    CONST THYRSUS  = 4

VAR dano    = 0
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
    
VAR ondeEstava = 0
    CONST ALI      = 0
    CONST CHEGANDO = 1



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

Se adaptando melhor a escuridão e a fumaça você consegue observar seus arredores com mais calma. Aparentemente você estave em um acidente de carro, o automóvel batido e em chamas a alguns metros deixa pouca dúvida. Na verdade, você provavelmente teve muita sorte de sair viv{oa()}

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

*{SPIRIT>0 and SPACE>0}[Ir na direção do espírito]->persegue_o_gato->
*{SPIRIT>0 and !SPACE>0}[roll{((SPIRIT-1)*10)+60-(dano+danoDox)*danoStep}_Perseguir o espírito]->persegue_o_gato->
*{PRIME>0 or FATE>0}[Investigar o carro] ->investiga_o_carro->
*{LIFE>0}[life_mana{path!=THYRSUS:2|1}_Cuidar dos seus ferimentos]->cura->
*[Procurar ajuda]->procura_ajuda->







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

->DONE

= leitura_de_aura

Antes mesmo de conseguir enxerga-lo direito você tem a impressão de que pode ver algo, ao redor dele, .

*{PRIME>0}[prime_{path!=OBRIMOS:mana1_}Ver a alma dele]

*{MIND>0}[mind_{path!=MASTIGOS:mana1_}Ler a aura dele]

*{MIND>0 and PRIME>0}[prime_mind_mana1_Ver ambos]

*[Ignorar a aura ao redor dele]

->->

==cena_do_tronco
O peso que você sentia sobre as pernas é na verdade um tronco de á rvore que tombou sobre você.

{LIFE>0:
    De alguma forma você sabe que a madeira ainda está viva, morrendo, porém viva. Existe potencial nessa energia vital, você acha que pode se livrar da árvore dessa foma.
}
{FORCES>0:
    A alguns metros de distância você repara nas chamas ao redor do carro, se você conseguisse trazer elas até aqui de alguma forma, talvez pudesse queimar o tronco, sem se queimar com alguma sorte.
}
    
{DEATH>0:
 Talvez você consiga simplesmente quebrar a madeira, se houvesseuma forma de deixa-la mais frágil.
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
    
    --{rollResult<=30+paradoxoAcumulado:
        -A imagem que você criara se deforma na sua frente, as asas da borboleta encolhem e endurecem, ficam escuras e grudam no corpo como uma carapaça. A transformação começa e o tronco começa a tomar forma. Em pequenas lascas, partes do tronco criam pernas e se desgrudam, a madeira então cria cabeça, antenas e a carapaça brilhante, e as baratas correm ou voam para longe, algumas passando sobre suas pernas ou voando rente ao seu rosto. Cada vez mais delas rastejando sobre você, até um grande enxame ter se formado sobre todo seu corpo, te arranhando e mordendo antes de desaparecerem na escuridão [-1 Saúde]. Todas finalmente saem, e você pode se levantar.
    
    -else:
        Em peque nas lascas, partes do tronco criam pernas e se desgrudam. Em seguida criam grandes asas coloridas, e voam para longe, inicialmente uma por uma, logo mais e mais, até que estão saindo as dezenas de cima de você. Em um pequeno turbilhão de cores e centenas de asas batendo as últimas borboletas levantam voo, levando o que restava do tronco com elas.
    }
*{FORCES>0} [forces_{path!=OBRIMOS:mana1_}Usar o fogo]
    --Alguns metros a sua direita um carro (provavelmente seu carro) se encontra com o parachoque ao redor de um poste de luz, o capô aparentemente voou juto com você e está em algum canto escuro da beira da estrada, toda a parte da frente do carro está em chamas. Não está próximo o bastante para que você sinta miuta coisa além de uma ocasional onda de calor quando o vento bate. Curiosamente você sente as ondas de calor de forma diferente, o calor tem textura e cor, se você se concetrar pode ver ao redor das chamas ele se dissipando no ar frio da noite. Como corante em um vidro de água, subindo em ondas, sendo dispersado pelo vento.

    --O fogo poderia te ajudar, queimar esse tronco para que você pudesse se mover. Você poderia traze-lo a té aqui, você estica o braço na direção das chamas, muito longe com certeza, mas um vento mais forte bate, o calor é empurrado na sua direção e você agarra um punhado, uma onda de calor, segura na sua mão como uma porção de areia. Você abre a mão e ele se dispersa no ar, não bastaria de qualquer forma, você precisa do fogo.

    --Na sua mente você vê, uma corda, um laço, um conduite para as chamas, para traze-las até aqui, você imagina e refina a ideia até ser um conceito perfeito na sua mente, então arrmessando o braço na direção do fogo você impõe sua vontade sobre a realidade. Como em um show pirotécnico uma labareda voa pelo ar e cai sobre o tronco. Ali você pode cuidadosamente guiar a chama e o calor por entre os veios da madeira e concentrar a chama o bastante para que você possa quebrar o tronco em alguns minutos. Depois de controlar o próprio fogo foi simples o bastante não se queimar no processo, mas não foi possível fazer nada quanto a fumaça e cinza cobrindo seu corpo.
*{DEATH>0} [death_{path!=MOROS:mana1_}Destruir o tronco]
    --Mesmo sendo um tronco de bom tamanho você imagina que poderia tira-lo dali se fosse mais secos e oco, como uma árvore morta. {LIFE>0:Ela ainda parece estar viva na verdade|Você sabe que ela ainda está viva}, bastante ferida porém viva. Você passa as mãos ao longo do tronco, imaginando como sair dali, mas acidentalmente causa um corte, abre um pequeno buraco. Como que por um rasgo invisível você sente o pouco que restava de vida naquele tronco escorrendo sobre suas mãos. Em pouco tempo você tem certeza que ele está morto, porém continua tão pesado quanto.
    
    -- ->continue->

    --Ignorando por ummomento as consequências morais de ter matado um vegetal você foca sua atenção no cadáver sobre você. Qual era mesmo seu objetivo? Que a madeira apodrecesse e inchasse, depois se tornass e ressacada e esbranquiçada, oca e frágil, um esqueleto da árvore que foi. Privado da proteção da vida o vácuo da morte corroendo-o até que se tornasse nada.

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

{danoDox>0:Você não consegue se curar pois a forma {cena_do_tronco.tronco_vida:das suas pernas saudáveis e intactas|do seu ombro saudável e intacto}} deixou de exisir. Temporáriamente claro... você tem quase certeza.

->encontra_Janus

== investiga_o_carro ==

O incêndio parece estar de certa forma contido a parte da frente do carro, mas mesmo assim você se aproxima com cuidado, isso com certeza não é de forma alguma seguro.

{PRIME>0:A aura com vem do banco de trás, mais que uma luz colorida você a percebe com todos os seus sentidos. Ela irradia uma energia fria e rígida, que lembra metal ao tato, mas cheira a algo como incenso, com certeza tem um tipo de presença poderosa {path==MOROS:, você não consegue deixar de pensar o quanto tudo te faz lembrar do cemitério e das sombras do seu sonho}.}

Se arriscando um pouco mais de perto, você pode ver {PRIME>0:a origem do brilho.|o objeto que te atraiu até o carro.}
 Largado do lado do cinto de segurança, uma pedra arroxeada, do tamanho de uma bola de gude. Você precisaria pega-la para enxergar mais do que isso, a porta parece trancada, porém o vidro quebrou no acidente, de forma que talvez seja possível alcançar o interior, mas você corre o risco de se queimar.#roll
 
*[roll{70-((dano+danoDox)*danoStep)}_Arriscar e pegar a pedra pela janela]->carro_pegar->
*[Deixar a pedra como está]->carro_ignorar->
*{FORCES>0}[forces_{path!=OBRIMOS:mana1_}Reduzir as chamas]->carro_forces->
*{DEATH>0}[death_{path!=MOROS:mana1}Sufocar as chamas]->carro_death->
*{MATTER>0}[matter_{path!=MOROS:mana1}Destrancar a porta]->carro_matter->

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
->->

=carro_death
Você consegue sentir o calor emanando do metal e das chamas, simples energia como qualquer outra, que você pode suprimir.

 Sem nenhuma dificuldade você comprime e diminui as chamas, até se extinguirem. Então cuidadosamente tocando no metal você consome o calor que cobria a porta do carro. Tornando perfeitamente seguro se apoiar nela para alcançar a pedra.
~donoDaPedra = EU
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
->encontra_Janus

== procura_ajuda ==
~ondeEstava = CHEGANDO
A estrada se encontra completamente vazia, no escuro você não consegue ver nenhum ponto de referência no horizonte. Você instintivamente apalpa seus bolsos, você tinha um celular com certeza, provavelmente ele foi lançado com o impacto, talvez ele tenha tido a mesma sorte que você. Procurando ao redor do local em que você acordou e eventualmente um pouco além das árvores, você encontra várias migalhas de plástico e metal ao pé de uma árvore. Antes ele que a sua cabeça, você pensa.
->encontra_Janus




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

== function mana_check(baseCost, torreCorreta) ==
{path!=torreCorreta:
~baseCost++
}
{baseCost==0:
    ~return ""
-else:
    ~return "({baseCost} Mana)"
}

