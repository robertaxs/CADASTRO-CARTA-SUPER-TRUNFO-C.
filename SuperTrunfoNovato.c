#include <stdio.h>

int main () {
   
    // dados carta 1

    char estado1[20];
    char codigo_da_carta1[4];
    char nome_da_cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int numero_de_pontos_turisticos1; 

    // dados carta 2

    char estado2[20];
    char codigo_da_carta2[4];
    char nome_da_cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int numero_de_pontos_turisticos2;

    // carta 1
    
    printf("\n --- dados carta 1: ---\n");
    
    printf("digite o nome do estado: \n");
    scanf(" %s", estado1);

    printf("digite o código da carta: \n");
    scanf(" %s", codigo_da_carta1);

    printf("digite o nome da cidade: \n");
    scanf(" %s", nome_da_cidade1);

    printf("digite a populacao: \n");
    scanf("%d", &populacao1);

    printf("digite a area em (km²): \n");
    scanf("%f", &area1);

    printf("digite o PIB em (bilhoes de reais): \n");
    scanf("%f", &pib1);

    printf("digite o numero de pontos turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos1);
    
    // carta 2
    
    printf("\n --- dados carta 2: ---\n");
    
    printf("digite o nome do estado: \n");
    scanf(" %s", estado2);

    printf("digite o código da carta: \n");
    scanf(" %s", codigo_da_carta2);

    printf("digite o nome da cidade: \n");
    scanf(" %s", nome_da_cidade2);

    printf("digite a populacao: \n");
    scanf("%d", &populacao2);

    printf("digite a area em (km²): \n");
    scanf("%f", &area2);

    printf("digite o PIB em (bilhoes de reais): \n");
    scanf("%f", &pib2);

    printf("digite o numero de pontos turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos2);

    // conferindo dados carta 1
    printf("\n--- resultado carta 1: ---\n");
    
    printf("estado: %s\n", estado1);
    printf("codigo: %s\n", codigo_da_carta1);
    printf("cidade: %s\n", nome_da_cidade1);
    printf("populacao: %d\n", populacao1);
    printf("area (km²): %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("pontos turisticos: %d\n", numero_de_pontos_turisticos1);
    
    //conferindo dados carta 2
    printf("\n--- resultado carta 2: ---\n");
    
    printf("estado: %s\n", estado2);
    printf("codigo: %s\n", codigo_da_carta2);
    printf("cidade: %s\n", nome_da_cidade2);
    printf("populacao: %d\n", populacao2);
    printf("area (km²): %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("pontos turisticos: %d\n", numero_de_pontos_turisticos2);

  return 0;  
}
