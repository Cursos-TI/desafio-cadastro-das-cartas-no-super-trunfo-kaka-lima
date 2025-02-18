#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado, codigo_da_carta[3], nome_da_cidade;
    int numero_pontos_turisticos, populacao;
    float area, pib;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Informe o nome do estado \n");
    scanf("%s", &nome);
    Printf("informe o Código da carta \n");
    scanf("%d", &codigo_da_carta);
    printf("Informe o nome da cidade \n");
    scanf("%s", &nome);
    printf("Informe quantos pontos turísticos tem na cidade \n");
    scanf("%d", &numero_pontos_turisticos);
    printf("Informe o numero de habitantes da cidade \n");
    scanf("%d", &populacao);
    printf("Informe a área da cidade \n");
    scanf("%f", &area);
    printf("Informe o pib da cidade \n");
    scanf("%f", &pib);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Nome do estado: %s \n", nome);
    printf("Código da carta: %d \n", codigo_da_carta);
    printf("Nome da cidade: %s \n", nome);
    printf("Número de pontos turísticos: %d \n", numero_pontos_turisticos);
    printf("Quantidade de habitants: %d \n", populacao);
    printf("Área da cidade: %f \n", area);
    printf("Pib da cidade: %f \n", pib);

    return 0;
}
