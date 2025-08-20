//(estado, código da carta, nome da cidade, população, área, PIB e número de pontos turísticos)
/*
    %d: imprime um inteiro no formato decimal
    %i: equivalente a %d
    %f: imprime um numero de ponto flutuante no formato padrão
    %e: Imprime um número de ponto flutuante na notação científica.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres.
*/

#include <stdio.h>


int main (){
    char estado[20], estado2[20]; 
    char codigo[20], codigo2[20];
    char cidade[20], cidade2[20];
    unsigned long int populacao, populacao2;
    float area, area2;
    float PIB, PIB2;
    int pontosT, pontosT2;
    float densidadeP, densidadeP2;
    float PIBpercapita, PIBpercapita2;
    float SuperPoder, SuperPoder2;



//CADASTRO PRIMEIRA CARTA
    printf("digite seu estado: ");
    scanf("%s", estado);

    printf("Digite seu código: ");
    scanf("%s", codigo);

    printf("Digite o nome da sua cidade: ");
    scanf("%s", cidade);

    printf("Digite a população: ");
    scanf("%lu", &populacao);

    printf("Digite a área: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosT);

    printf("\n\n");


    //CADASTRO SEGUNDA CARTA
     printf("digite seu estado: ");
    scanf("%s", estado2);

    printf("Digite seu código: ");
    scanf("%s", codigo2);

    printf("Digite o nome da sua cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosT2);

    printf("\n\n\n");

    //CALCULOS
    //densidade populacional = população / área
    densidadeP = populacao / area;
    densidadeP2 = populacao2 / area2;
    //PIB per capita
    PIBpercapita = (PIB * 1e9) / populacao;
    PIBpercapita2 = (PIB2 * 1e9) / populacao2;
    //superpoder
    SuperPoder = (float) populacao + (float) area + (float) PIB + (float) pontosT + (float) PIBpercapita + (float) (1.0 / densidadeP);
    SuperPoder2 = (float) populacao2 + (float) area2 + (float) PIB2 + (float) pontosT2 + (float) PIBpercapita2 + (float) (1.0 / densidadeP2);


    //exibição CARTA1
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Sua carta é: %s%s\n", estado, codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2fkm^2\n", area);
    printf("O PIB é: %.2f bilhões de reias\n", PIB);
    printf("Números de pontos turisticos: %d\n", pontosT);
    printf("Densidade populacional: %.2f hab/km^2\n", densidadeP);
    printf("PIB per capita: %.2f reais\n\n", PIBpercapita);

    //exibição CARTA2
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Sua carta é: %s%s\n", estado2, codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2fkm^2\n", area2);
    printf("O PIB é: %.2f bilhões de reias\n", PIB2);
    printf("Números de pontos turisticos: %d\n", pontosT2);
    printf("Densidade populacional: %.2f hab/km^2\n", densidadeP2);
    printf("PIB per capita: %.2f reais\n", PIBpercapita2);

    printf("\n\n\n\n");
    printf("BATALHA DE CARTAS\n\n");
/*
Carta 1:
Estado: A
Código: A01
Nome da Cidade: SP
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50
Densidade Populacional: 8102.47 hab/km²
PIB per Capita: 56724.32 reais

Carta 2:
Estado: B
Código: B02
Nome da Cidade: RJ
População: 6748000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30
Densidade Populacional: 5622.24 hab/km²
PIB per Capita: 44532.91 reais
*/

            //coloquei esses espaços só para no terminal ficar alinhado cada um. :)
 //if-else população
    if (populacao > populacao2)
        {printf("Maior população                  :   Carta 1 venceu!\n");}
    else
        {printf("Maior população                  :   Carta 2 venceu!\n");}

 //if-else area
    if (area > area2)
        {printf("Maior área                       :   Carta 1 venceu!\n");}
    else
        {printf("Maior área                       :   Carta 2 venceu!\n");}

 //if-else PIB
    if (PIB > PIB2)
        {printf("Maior PIB                        :   Carta 1 venceu!\n");}
    else
        {printf("Maior PIB                        :   Carta 2 venceu!\n");}

 //if-else pontos turisticos
    if (pontosT > pontosT2)
        {printf("Maior número de pontos turisticos:   Carta 1 venceu!\n");}
    else
        {printf("Maior número de pontos turisticos:   Carta 2 venceu!\n");}

 //if-else densidade populacional
    if (densidadeP < densidadeP2)
        {printf("Menor densidade populacional     :   Carta 1 venceu!\n");}
    else
        {printf("Menor densidade populacional     :   Carta 2 venceu!\n");}

 //if-else PIB per capita
    if (PIBpercapita > PIBpercapita2)
        {printf("Maior PIB per capita             :   Carta 1 venceu!\n");}
    else
        {printf("Maior PIB per capita             :   Carta 2 venceu!\n");}

 //if-else Super Poder
    if (SuperPoder > SuperPoder2)
        {printf("Carta 1 leva para casa o título de mais forte!\n");}
    else
        {printf("Carta 2 leva para casa o título de mais forte!!\n");}

            printf("\n\n\n\n");

 //Duelo de comparação
    printf("REVANCHE SURPRESA!!!\n");
    printf("Carta %s%s(%s): %d pontos turisticos\n", estado, codigo, cidade, pontosT);
    printf("Carta %s%s(%s): %d pontos turisticos\n", estado2, codigo2, cidade2, pontosT2);

                printf("\n\n");
    if(pontosT > pontosT2)
        {printf("Carta 1 venceu!\n");}
    else
        {printf("Carta 2 venceu\n");}

 
    return 0;
}