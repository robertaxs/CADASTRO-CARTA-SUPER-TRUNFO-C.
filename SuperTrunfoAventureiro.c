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
    float densidade1;
    float pib_capita1;

    // dados carta 2

    char estado2[20];
    char codigo_da_carta2[4];
    char nome_da_cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int numero_de_pontos_turisticos2;
    float densidade2;
    float pib_capita2;

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

    printf("digite o PIB em (em reais): \n");
    scanf("%f", &pib1);

    printf("digite o numero de pontos turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos1);

   // Calculando densidade e PIB per capita 1


    densidade1 = populacao1 / area1;
    pib_capita1 = pib1 / populacao1;
  
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

    printf("digite o PIB em (em reais): \n");
    scanf("%f", &pib2);

    printf("digite o numero de pontos turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos2);

  

   // Calculando densidade e PIB per capita 2
 
    densidade2 = populacao2 / area2;
    pib_capita2 = pib2 / populacao2;

    //Saída carta 1
    printf("\n--- resultado carta 1: ---\n");
    
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo_da_carta1);
    printf("Cidade: %s\n", nome_da_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área (km²): %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", numero_de_pontos_turisticos1);
    printf("Densidade populacional: %f habitantes/km²\n", densidade1);
    printf("PIB per Capita: %f de Reais\n", pib_capita1);
    
    //Saída carta 2
    printf("\n--- resultado carta 2: ---\n");
    
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo_da_carta2);
    printf("Cidade: %s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área (km²): %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", numero_de_pontos_turisticos2);
    printf("Densidade populacional: %f habitantes/km²\n", densidade2);
    printf("PIB per Capita: %f reais\n", pib_capita2);

  return 0;  
}
