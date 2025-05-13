#include <stdio.h>

int main() {
    char estado[20];
    char codigoCarta[20];
    char nomeCidade[30];
    unsigned long int populacao;
    float area;
    float pib;
    int numPontosTuristicos;
    unsigned long int superPoder = populacao + area + pib + numPontosTuristicos;

    printf("=== Cadastro de Cidade 1 ===\n");

    // Estado
    printf("Informe o Estado (letra de A a H): \n");
    scanf(" %s", &estado);

    // Código da Carta
    printf("Informe o Código da Carta (ex: A01): \n");
    scanf("%s", &codigoCarta);

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
    printf("Informe o PIB: \n");
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
    unsigned long int superPoder2 = populacao2 + area2 + pib2 + numPontosTuristicos2;

    printf("=== Cadastro de Cidade 2 ===\n");

    // Estado
    printf("Informe o Estado (letra de A a H): \n");
    scanf(" %s", &estado2);

    // Código da Carta
    printf("Informe o Código da Carta (ex: A01): \n");
    scanf("%s", &codigoCarta2);

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

   
    
    //quem venceu
    printf("=== Comparação entre as Cidades ===\n");
    printf("escolha qual atributo você quer comparar: \n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");

    int opcao;
    scanf("%d", &opcao);

    int resultado;
    switch (opcao) {
case 1:
    resultado = populacao > populacao2 ? 1 : 2;
    printf("você escolheu o atributo população.\n");
case 2:
    resultado = area > area2 ? 1 : 2;
    printf("você escolheu o atributo área.\n");
case 3:
    resultado = pib > pib2 ? 1 : 2;
    printf("você escolheu o atributo pib.\n");
case 4:
    resultado = numPontosTuristicos > numPontosTuristicos2 ? 1 : 2;
    printf("você escolheu o atributo número de pontos turísticos.\n");
case 5:
    resultado = densidadeDemografica < densidadeDemografica2 ? 1 : 2;
    printf("você escolheu o atributo densidade demográfica.\n");
case 6:
    resultado = pibPerCapita > pibPerCapita2 ? 1 : 2;
    printf("você escolheu o atributo pib per capita.\n");
case 7:
    resultado = superPoder > superPoder2 ? 1 : 2;
    printf("você escolheu o atributo super poder.\n");
default:
    printf("Opção inválida.\n");
    break;
}

int opcao2;
printf("escolha o segunda atributo que você quer comparar: \n");
    if (opcao == opcao2) {
        printf("você escolheu o mesmo atributo.\n");
    }

printf("1 - População\n");
printf("2 - Área\n");
printf("3 - PIB\n");
printf("4 - Número de Pontos Turísticos\n");
printf("5 - Densidade Demográfica\n");
printf("6 - PIB per capita\n");
printf("7 - Super Poder\n");


int resultado2;


scanf("%d", &opcao2);

switch (opcao2) {
case 1:
    resultado2 = populacao > populacao2 ? 1 : 2;
    printf("você escolheu o atributo população.\n");
case 2:
    resultado2 = area > area2 ? 1 : 2;
    printf("você escolheu o atributo área.\n");
case 3:
    resultado2 = pib > pib2 ? 1 : 2;
    printf("você escolheu o atributo pib.\n");
case 4:
    resultado2 = numPontosTuristicos > numPontosTuristicos2 ? 1 : 2;
    printf("você escolheu o atributo número de pontos turísticos.\n");
case 5:
    resultado2 = densidadeDemografica < densidadeDemografica2 ? 1 : 2;
    printf("você escolheu o atributo densidade demográfica.\n");
case 6:
    resultado2 = pibPerCapita > pibPerCapita2 ? 1 : 2;
    printf("você escolheu o atributo pib per capita.\n");
case 7:
    resultado2 = superPoder > superPoder2 ? 1 : 2;
    printf("você escolheu o atributo super poder.\n");
default:
    printf("Opção inválida.\n");
    break;
}

if(resultado == 1 && resultado2 == 1){
    printf("A cidade %s venceu a cidade %s\n", nomeCidade, nomeCidade2);
}else if(resultado != resultado2){
    printf("Ocorereu um empate entre as cidades %s e %s\n", nomeCidade, nomeCidade2);
}else{
    printf("A cidade %s venceu a cidade %s\n", nomeCidade2, nomeCidade);
}

    return 0;
}
    
        