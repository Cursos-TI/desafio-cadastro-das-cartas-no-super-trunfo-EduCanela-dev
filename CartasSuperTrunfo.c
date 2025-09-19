#include <stdio.h>  
#include <stdlib.h> 
#include <time.h>

int main(){

    //carta 1
    int populacao1 = 12325000;           
    float area1 = 1521.11;                     
    float PIB1 = 699.28;                         
    int pontosT1 = 50;                       
    float densidadeP1 = 8102.47;         
    float PIBperCapita1 = 56724.32;    
    
    //carta 2
    int populacao2 = 6748000;   
    float area2 = 1200.25;                             
    float PIB2 = 300.50;                               
    int pontosT2 = 30;                                  
    float densidadeP2 = 5622.24;                       
    float PIBperCapita2 = 44532.91;                    

    //variaveis gerais
    int escolhaMenu;
    int escolhaImPa, numImPaJogador, numImPaComputador,somaImPa, resultadoImPa;
    int determinar;
    int PCescolheCarta, JogadorEscolheCarta;
    int primeiroAtributoPC, segundoAtributoPC; 
    int primeiroAtributo, segundoAtributo;
    int resultado1, resultado2;
   
    //codigos gerais
    srand(time(0));
    numImPaComputador = rand() % 100;
    


    //inicio Jogo
    printf("        Bem-vindo(a) ao jogo super trunfo!\n\n");
    printf("Por favor, escolha uma opção\n");
    printf("1. Iniciar jogo\n");
    printf("2. Regras\n");
    printf("3. Sair\n");
    printf("    AGUARDANDO... : ");
    scanf("%d", &escolhaMenu);

    switch (escolhaMenu)
        {case 1: //Iniciar jogo. No primeiro momento Impar ou Par para determinar quem começa
            printf("Buscando oponente...\n");
            printf("Oponente encontrado\n");
            printf("Conectando...\n");
            printf("Partida iniciada. Bom jogo e boa sorte\n\n");
            printf("Quem da as cartas? Decidam no ímpar ou par\n");
            printf("Você quer ímpar ou par?\n");
            printf("1. Ímpar\n");
            printf("2. Par\n");
            printf("    AGUARDANDO... : ");
            scanf("%d", &escolhaImPa);

            //escolha impar ou par
            if (escolhaImPa == 1) 
            {   
                printf("\nVocê escolheu ímpar.\n");
                printf("Oponente ficou com par.\n");    
                } 
                else if (escolhaImPa == 2) 
                {
                printf("\nVocê escolheu par.\n");
                printf("Oponente ficou com ímpar\n"); 
                } 
                else 
                {
                printf("inválido\n"); 
            }

            //disputa impar ou par
            printf("\nDigite um número inteiro de 0 a 99\n");
            printf("    AGUARDANDO... : ");
            scanf("%d", &numImPaJogador);
            printf("\nVocê escolheu o número: %d\n", numImPaJogador);
            printf("Seu oponente escolheu o número: %d\n", numImPaComputador);

                somaImPa = numImPaComputador + numImPaJogador; //soma dos numeros
                resultadoImPa = somaImPa % 2; //buscando resto divisão

            printf("    Soma total: %d\n", somaImPa);

            //determinando se é ímpar ou par
            resultadoImPa == 0 ? printf("O número %d é par.\n", somaImPa) : printf("O número %d é ímpar.\n", somaImPa);

            //vitória ou derrota no ímpar ou par
            if (escolhaImPa == 1 && resultadoImPa == 0) 
            {   
                printf("\n  Você perdeu! O oponente escolhe a carta.\n"); 
                    determinar = 8;
                }
                else if 
                ((escolhaImPa == 2 && resultadoImPa != 0) ||
                (escolhaImPa ==1 && resultadoImPa != 0)) 
                {   
                printf("\n  Você ganhou! Você escolhe a carta.\n"); 
                    determinar = 9;
            }
    } //switch "escolhaMenu"

    if (determinar == 9)
    {   
        printf("Escolha sua carta\n");
        printf("1. Carta 1 (Cidade: SP)\n");
        printf("2. Carta 2 (Cidade: RJ\n");
        printf("    AGUARDANDO... : ");
        scanf("%d", &JogadorEscolheCarta);
        JogadorEscolheCarta == 1 ? printf("Oponente ficou com carta 2\n") : printf("Oponente ficou com carta 1\n");
    }
   
    
    if (determinar == 8)
    {
        PCescolheCarta = rand() % 2 + 1;
        PCescolheCarta == 1 ? printf("Oponente escolheu carta 1\n") : printf("Oponente escolheu carta 2\n");
    }
    

    switch (PCescolheCarta)
    {
    case 1: //carta 1
    case 2: //carta 2

        primeiroAtributoPC = rand() % 6 + 1;
        segundoAtributoPC = rand() % 6 + 1;
        primeiroAtributo = primeiroAtributoPC;
        segundoAtributo = segundoAtributoPC;

       
        printf("Atributos:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per Capita\n");
        printf("Oponente escolheu atributos:\n");
        printf("    %d\n", primeiroAtributoPC);
        printf("    %d\n", segundoAtributoPC);

        //comparar valores dos atributos
            switch (primeiroAtributoPC)
            {   
                case 1: resultado1 = populacao1 > populacao2 ? 1 : 0;   break;
                case 2: resultado1 = area1 > area2 ? 1 : 0;   break;
                case 3: resultado1 = PIB1 > PIB2 ? 1 : 0;   break;
                case 4: resultado1 = pontosT1 > pontosT2 ? 1 : 0;   break;
                case 5: resultado1 = densidadeP1 > densidadeP2 ? 0 : 1;   break;
                case 6: resultado1 = PIBperCapita1 > PIBperCapita2 ? 1 : 0;   break;
            }

            switch (segundoAtributoPC)
            {   
                case 1: resultado2 = populacao1 > populacao2 ? 1 : 0;   break;
                case 2: resultado2 = area1 > area2 ? 1 : 0;   break;
                case 3: resultado2 = PIB1 > PIB2 ? 1 : 0;   break;
                case 4: resultado2 = pontosT1 > pontosT2 ? 1 : 0;   break;
                case 5: resultado2 = densidadeP1 > densidadeP2 ? 0 : 1;   break;
                case 6: resultado2 = PIBperCapita1 > PIBperCapita2 ? 1 : 0;   break;   
                break;
            }

            if (resultado1 && resultado2)
            {
                printf("Você ganhou!\n");
                }
                else if (resultado1 != resultado2)
                {
                printf("Empate!\n");
                }
                else 
                {
                printf("Você perdeu!\n");
            }
    break; //"case 1"/"PCescolheCarta"/"carta 1"

   
    
    default:
        break;
    } //fim "switch"/"PCescolheCarta"
    

    switch (JogadorEscolheCarta)
    {
        case 1://carta 1
            //escolha primeiro atributo
            printf("\nVocê escolheu carta 1.\n");
            printf("Atributos:\n");
            printf("1. População: 12325000\n");
            printf("2. Área: 1521.11 km²\n");
            printf("3. PIB: 699.28 bilhões de reais\n");
            printf("4. Número de Pontos Turísticos: 50\n");
            printf("5. Densidade Populacional: 8102.47 hab/km²\n");
            printf("6. PIB per Capita: 56724.32 reais\n");
            printf("Escolha um atributo\n");
            printf("    AGUARDANDO... : ");
            scanf("%d", &primeiroAtributo);

            //escolha segundo atributo
            printf("\nEscolha mais um atributo diferente do primeiro\n");
            printf("1. População: 12325000\n");
            printf("2. Área: 1521.11 km²\n");
            printf("3. PIB: 699.28 bilhões de reais\n");
            printf("4. Número de Pontos Turísticos: 50\n");
            printf("5. Densidade Populacional: 8102.47 hab/km²\n");
            printf("6. PIB per Capita: 56724.32 reais\n");
            printf("Escolha um atributo\n");
            printf("    AGUARDANDO... : ");
            scanf("%d", &segundoAtributo);

            //Conferindo se os atributos são iguais
            if (segundoAtributo == primeiroAtributo)
            {
                printf("Entrada invalida.\n");
            }

            //comparar valores dos atributos
            switch (primeiroAtributo)
            {   
                case 1: resultado1 = populacao1 > populacao2 ? 1 : 0;   break;
                case 2: resultado1 = area1 > area2 ? 1 : 0;   break;
                case 3: resultado1 = PIB1 > PIB2 ? 1 : 0;   break;
                case 4: resultado1 = pontosT1 > pontosT2 ? 1 : 0;   break;
                case 5: resultado1 = densidadeP1 > densidadeP2 ? 0 : 1;   break;
                case 6: resultado1 = PIBperCapita1 > PIBperCapita2 ? 1 : 0;   break;
                default: printf("Escolha inválida\n");    break;
            }

            switch (segundoAtributo)
            {   
                case 1: resultado2 = populacao1 > populacao2 ? 1 : 0;   break;
                case 2: resultado2 = area1 > area2 ? 1 : 0;   break;
                case 3: resultado2 = PIB1 > PIB2 ? 1 : 0;   break;
                case 4: resultado2 = pontosT1 > pontosT2 ? 1 : 0;   break;
                case 5: resultado2 = densidadeP1 > densidadeP2 ? 0 : 1;   break;
                case 6: resultado2 = PIBperCapita1 > PIBperCapita2 ? 1 : 0;   break;
                default: printf("Escolha inválida\n");    
                break;
            }

            if (resultado1 && resultado2)
            {
                printf("Você ganhou!\n");
                }
                else if (resultado1 != resultado2)
                {
                printf("Empate!\n");
                }
                else 
                {
                printf("Você perdeu!\n");
            }
        break;//"case 1"/"carta 1"

        case 2://carta 2
            printf("\nVocê escolheu carta 2.\n");
            printf("Atributos:\n");
            printf("1.População: 6748000\n");
            printf("2.Área: 1200.25 km²\n");
            printf("3. PIB: 300.50 bilhões de reais\n");
            printf("4. Número de Pontos Turísticos: 30\n");
            printf("5. Densidade Populacional: 5622.24 hab/km²\n");
            printf("6. PIB per Capita: 44532.91 reais\n");
            printf("Escolha um atributo\n");
            printf("    AGUARDANDO... : ");
            scanf("%d", &primeiroAtributo);

            printf("\nEscolha mais um atributo diferente do primeiro\n");
                printf("1.População: 6748000\n");
                printf("2.Área: 1200.25 km²\n");
                printf("3. PIB: 300.50 bilhões de reais\n");
                printf("4. Número de Pontos Turísticos: 30\n");
                printf("5. Densidade Populacional: 5622.24 hab/km²\n");
                printf("6. PIB per Capita: 44532.91 reais\n");
                printf("Escolha um atributo\n");
                printf("    AGUARDANDO... : ");
                scanf("%d", &segundoAtributo);

            //Conferindo se os atributos são iguais
            if (segundoAtributo == primeiroAtributo)
            {
                printf("Entrada invalida.\n");
            }

            //comparar valores dos atributos
            switch (primeiroAtributo)
            {   
                case 1: resultado1 = populacao1 > populacao2 ? 1 : 0;   break;
                case 2: resultado1 = area1 > area2 ? 1 : 0;   break;
                case 3: resultado1 = PIB1 > PIB2 ? 1 : 0;   break;
                case 4: resultado1 = pontosT1 > pontosT2 ? 1 : 0;   break;
                case 5: resultado1 = densidadeP1 > densidadeP2 ? 0 : 1;   break;
                case 6: resultado1 = PIBperCapita1 > PIBperCapita2 ? 1 : 0;   break;
                default: printf("Escolha inválida\n");    break;
            }

            switch (segundoAtributo)
            {   
                case 1: resultado2 = populacao1 > populacao2 ? 1 : 0;   break;
                case 2: resultado2 = area1 > area2 ? 1 : 0;   break;
                case 3: resultado2 = PIB1 > PIB2 ? 1 : 0;   break;
                case 4: resultado2 = pontosT1 > pontosT2 ? 1 : 0;   break;
                case 5: resultado2 = densidadeP1 > densidadeP2 ? 0 : 1;   break;
                case 6: resultado2 = PIBperCapita1 > PIBperCapita2 ? 1 : 0;   break;
                default: printf("Escolha inválida\n");    
                break;
            }

            //declarando vencedor
            if (resultado1 && resultado2)
            {
                printf("Você ganhou!\n");
                }
                else if (resultado1 != resultado2)
                {
                printf("Empate!\n");
                }
                else 
                {
                printf("Você perdeu!\n");
            }
        break;//"case 2"/"carta 2"
    
    }//fim "switch"/"JogadorEscolheCarta"

    switch (escolhaMenu)
    {
    case 2:
        printf("    Regras\n");
        printf("1. A carta com maior valor vence, exceto a densidade populacional;\n");
        printf("2. Ao encontrar partida será iniciado um jogo de impa ou par para decidir quem escolhe a carta;\n");
        printf("3. Quem escolhe a carta também escolhe os atributos a serem comparados;\n");
        printf("4. Se divita!\n");
    break;

    case 3:
        printf("Saindo...\n");
    
    default:
        break;
    }

    


}//FINAL "int main"