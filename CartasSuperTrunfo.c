#include <stdio.h>

int main() {
    char inicial[20] = "a" "b";
    char codigo[20] = "01" "02";
    char cidade[20] = "betim" "PTB";
    int população = 20; 40;
    float area = 20000; 30000;
    float PIB = 3000; 4000;
    int pontos = 50; 60;
    
    

    printf("inicial: ");
    scanf("%s", inicial);

    printf("Código: ");
    scanf("%s", codigo);

    printf("Nome da cidade: ");
    scanf("%s", cidade);

    printf("população: ");
    scanf("%d", &população);

    printf("area: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &PIB);

    printf("pontos: ");
    scanf("%d", &pontos);



    printf("\n\ninicial: %s\n", inicial);
    printf("código: %s%s\n", inicial, codigo);
    printf("nome: %s\n", cidade);
    printf("população: %d\n", população);
    printf("área: %.0fkm2\n", area);
    printf("PIB: %.0fmilhões de reais\n", PIB);
    printf("Número de pontos turisticos: %d\n", pontos);

    

    
        
}