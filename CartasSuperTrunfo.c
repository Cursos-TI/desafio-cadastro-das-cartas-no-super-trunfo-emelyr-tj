#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int codCidade1, codCidade2;
    char nome1[70], nome2[70];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int nPontosTuristicos1, nPontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Informe o código da cidade1: ");
    scanf("%d", &codCidade1);

    printf("Informe o nome da cidade1: ");
    scanf("%s", &nome1);

    printf("Informe a populacao da cidade1: ");
    scanf("%d", &populacao1);

    printf("Informe a área (km²) da cidade1: ");
    scanf("%f", &area1);

    printf("Informe o PIB (bilhões de R$) da cidade1: ");
    scanf("%f", &pib1);

    printf("Informe o Numero de pontos turisticos da cidade1: ");
    scanf("%d", &nPontosTuristicos1);
    
    printf("Informe o código da cidade2: ");
    scanf("%d", &codCidade2);

    printf("Informe o nome da cidade2: ");
    scanf("%s", &nome2);

    printf("Informe a populacao da cidade2: ");
    scanf("%d", &populacao2);

    printf("Informe a área (km²) da cidade2: ");
    scanf("%f", &area2);

    printf("Informe o PIB (bilhões de R$) da cidade2: ");
    scanf("%f", &pib2);

    printf("Informe o Numero de pontos turisticos da cidade2: ");
    scanf("%d", &nPontosTuristicos2);

    // Calcular a densidade populacional e o PIB per Capita.

    densidadePopulacional1 = populacao1 / area1; 
    densidadePopulacional2 = populacao2 / area2; 
    pibPerCapita1 = pib1 * 1000000000 / populacao1;
    pibPerCapita2 = pib2 * 1000000000 / populacao2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Mostrando dados da primeira carta cadastrada: \n");
    printf("Código da cidade1: %d\n", codCidade1);
    printf("Nome da cidade1: %s\n", nome1);
    printf("Populacao da cidade1: %d\n", populacao1);
    printf("Área (Km²) da cidade1: %.2f\n", area1);
    printf("PIB (bilhões R$) da cidade1: %.2f\n", pib1);
    printf("Quantidade de pontos turisticos da cidade1: %d\n", nPontosTuristicos1);
    printf("Densidade Populacional (pessoas/km²) da cidade1: %.2f\n", densidadePopulacional1);
    printf("PIB per Capita da cidade1: %.2f\n", pibPerCapita1);

    printf("Mostrando dados da segunda carta cadastrada: \n");
    printf("Código da cidade2: %d\n", codCidade2);
    printf("Nome da cidade2: %s\n", nome2);
    printf("Populacao da cidade2: %d\n", populacao2);
    printf("Área da cidade2: %.2f\n", area2);
    printf("PIB da cidade2: %.2f\n", pib2);
    printf("Quantidade de pontos turisticos da cidade2: %d\n", nPontosTuristicos2);
    printf("Densidade Populacional da cidade2: %.2f\n", densidadePopulacional2);
    printf("PIB per Capita da cidade2: %.2f\n", pibPerCapita2);

    return 0;
}
