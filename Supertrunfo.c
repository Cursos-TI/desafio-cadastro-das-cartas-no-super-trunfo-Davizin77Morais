#include <stdio.h>

int main() {
    char estado[20];
    char codigoCarta[20];
    char nomeCidade[10];
    unsigned long int populacao;
    float area;
    float pib;
    int numPontosTuristicos;


    printf("=== Cadastro de Cidade 1 ===\n");

    // Estado
    printf("Informe o Estado (letra de A a H): \n");
    scanf(" %s", &estado);

    // Código da Carta
    printf("Informe o Código da Carta (ex: A01): \n");
    scanf("%s", codigoCarta);

    // Nome da Cidade
    printf("Informe o Nome da Cidade:  \n");
    scanf(" %s", nomeCidade);

    // População
    printf("Informe a População: \n");
    scanf("%lu", &populacao);

    // Área
    printf("Informe a Área: \n");
    scanf("%f", &area);

    //densidade demográfica
    float densidadeDemografica = (float)populacao / area;
    printf("A densidade demográfica é: %.2f\n", densidadeDemografica);

    // PIB
    printf("Informe o PIB: ");
    scanf("%f", &pib);

    //pib per capita
    float pibPerCapita = pib / populacao;
    printf("O PIB per capita é: %.2f\n", pibPerCapita);

    // Número de Pontos Turísticos
    printf("Informe o Número de Pontos Turísticos: \n");
    scanf("%d", &numPontosTuristicos);

    //super poder
    printf("o super poder é: %f\n", (float) populacao + (float) area + (float) pib + (float) numPontosTuristicos);

    // Cadastro da segunda cidade
    char estado2[20];
    char codigoCarta2[20]; 
    char nomeCidade2[30];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int numPontosTuristicos2;


    printf("=== Cadastro de Cidade 2 ===\n");

    // Estado
    printf("Informe o Estado (letra de A a H): \n");
    scanf(" %s", &estado2);

    // Código da Carta
    printf("Informe o Código da Carta (ex: A01): \n");
    scanf("%s", codigoCarta2);

    // Nome da Cidade
    printf("Informe o Nome da Cidade:  \n");
    scanf(" %s", nomeCidade2);

    // População
    printf("Informe a População: \n");
    scanf("%lu", &populacao2);

    // Área
    printf("Informe a Área: \n");
    scanf("%f", &area2);

    //densidade demográfica
    float densidadeDemografica2 = (float) populacao2 / area2;
    printf("A densidade demográfica é: %.2f\n", densidadeDemografica2);

    // PIB
    printf("Informe o PIB: \n");
    scanf("%f", &pib2);

    //pib per capita
    float pibPerCapita2 = pib2 / populacao2;
    printf("O PIB per capita é: %.2f\n", pibPerCapita2);

    // Número de Pontos Turísticos
    printf("Informe o Número de Pontos Turísticos: \n");
    scanf("%d", &numPontosTuristicos2);

    //super poder
    printf("o super poder é: %f\n", (float) populacao2 + (float) area2 + (float) pib2 + (float) numPontosTuristicos2);

    // Comparação das cartas
    printf("=== Comparação das Cartas ===\n");
    printf("=== caso exibir 1, a cidade 1 venceu ===\n");
    printf("exibe 1 se a polulação da cidade 1 for maior: %d\n",populacao > populacao2);
    printf("exibe 1 se a area da cidade 1 for maior: %d\n",area > area2);
    printf("exibe 1 se o pib da cidade 1 for maior: %d\n",pib > pib2);
    printf("exibe 1 se o pib per capita da cidade 1 for maior: %d\n",pibPerCapita > pibPerCapita2);
    printf("exibe 1 se a densidade demografica da cidade 1 for menor (vence quem tiver a menor densidade): %d\n",densidadeDemografica < densidadeDemografica2);
    printf("exibe 1 se o super poder da cidade 1 for maior: %d\n",populacao + area + pib + numPontosTuristicos > populacao2 + area2 + pib2 + numPontosTuristicos2);
    printf("exibe 1 se o numero de pontos turisticos da cidade 1 for maior: %d\n",numPontosTuristicos > numPontosTuristicos2);

    return 0;



}

