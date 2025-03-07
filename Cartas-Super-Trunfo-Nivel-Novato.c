#include <stdio.h>

int main() {
    // Variáveis da carta 1
    char estado1;
    char codigo1[20];
    char cidade1[20];
    int pontosTuristicos1, populacao1;
    float area1, pib1;

    // Variáveis da carta 2
    char estado2;
    char codigo2[20];
    char cidade2[20];
    int pontosTuristicos2, populacao2;
    float area2, pib2;

    // Leitura de dados da carta 1
    printf("------------------DIGITE OS DADOS DA CARTA 1---------------------\n");
    printf("Informe o estado:\n");
    scanf("%c", &estado1);
    printf("informe o código:\n");
    scanf("%s", codigo1);
    getchar();
    printf("Informe a cidade:\n");
    fgets(cidade1, 20, stdin);
    printf("Informe quantos pontos turísticos tem na cidade:\n");
    scanf("%d", &pontosTuristicos1);
    printf("Informe o numero de habitantes da cidade:\n");
    scanf("%d", &populacao1);
    printf("Informe a área da cidade:\n");
    scanf("%f", &area1);
    printf("Informe o pib da cidade:\n");
    scanf("%f", &pib1);

    // Leitura de dados da carta 2
    printf("------------------DIGITE OS DADOS DA CARTA 2---------------------\n");
    getchar();
    printf("Informe o estado:\n");
    scanf("%c", &estado2);
    printf("informe o código:\n");
    scanf("%s", codigo2);
    getchar();
    printf("Informe a cidade:\n");
    fgets(cidade2, 20, stdin);
    printf("Informe quantos pontos turísticos tem na cidade:\n");
    scanf("%d", &pontosTuristicos2);
    printf("Informe o numero de habitantes da cidade:\n");
    scanf("%d", &populacao2);
    printf("Informe a área da cidade:\n");
    scanf("%f", &area2);
    printf("Informe o pib da cidade:\n");
    scanf("%f", &pib2);

    // Dados da CARTA 1
    printf("\n--------------------CARTA 1---------------------- \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %f km² \n", area1);
    printf("PIB: %f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos1); 
    
    // Dados da CARTA 2
    printf("\n--------------------CARTA 2----------------------\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f km² \n", area2);+
    printf("PIB: %f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos2);

    return 0;
}