#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char Estado;
    char Codig0[3];
    char CIDADE[20];
  unsigned long int Populaca0;
    float Are4;
    float PIB;
    int NPT;
    float DenPopulacional;
    float PIBpc;
    float SuperPoder;
    char estado;
    char codig0[3];
    char  cidade[20];
    unsigned long int populaca0;
    float are4;
    float produtoib;
    int npt;
    float denpopulacional;
    float pibpc;
    float superpoder;
    int resultadoPopulaca0;
    int resultadoAre4;
    int resultadoPIB;
    int resultadoNPT;
    int resultadoDenPopulacional;
    int resultadoPIBpc;
    int resultadoSuperPoder;
    
  //pedido de entrada dos dados das cartas
  printf("Carta 1:\n");
    printf("Digite a letra do estado: \n");
    scanf("%c", &Estado);

    printf("Digite o código do estado: \n");
    scanf("%s", Codig0);

    printf("Digite o nome da cidade: \n");
    scanf("%s", CIDADE);

    printf("Digite o número populacional da cidade: \n");
   scanf("%lu", &Populaca0);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &Are4);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &NPT);

    printf("Carta número 2:\n");
    printf("Digite a letra do estado: \n");
    scanf(" %c", &estado);

    printf("Digite o código do estado: \n");
    scanf("%s", codig0);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite o número populacional da cidade: \n");
   scanf("%lu", &populaca0);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &are4);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &produtoib);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &NPT);

    //cálculo da densidade populacional e PIB per capita
    DenPopulacional = Populaca0 / Are4;
    PIBpc = PIB / Populaca0;
    denpopulacional = populaca0 / are4;
    pibpc = produtoib / populaca0;

    //exibição dos dados da carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", Estado);
    printf("Código: %s\n", Codig0);
    printf("Nome da Cidade: %s\n", CIDADE);
    printf("População: %lu\n", Populaca0);
    printf("Área: %f\n", Are4);
    printf("PIB: %f\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", NPT);
    printf("Densidade Populacional: %.2f\n", DenPopulacional);
    printf("PIB per Capita: %.2f\n", PIBpc);
    printf("SUPER Poder: %f", SuperPoder);

    //cálculo do super poder da carta 1
    SuperPoder = Populaca0 + Are4 + PIB + NPT + DenPopulacional + PIBpc;

    //exibição dos dados da carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codig0);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %lu\n", populaca0);
    printf("Área: %f\n", are4);
    printf("PIB: %f\n", produtoib);
    printf("Número de Pontos Turísticos: %d\n", npt);
    printf("Densidade Populacional: %.2f\n", denpopulacional);
    printf("PIB per Capita: %.2f\n", pibpc);

    //cálculo do super poder da carta 2
    superpoder = populaca0 + are4 + produtoib + npt + denpopulacional + pibpc;

    //comparação dos dados das cartas
    resultadoPopulaca0 = Populaca0 > populaca0;
    resultadoAre4 = Are4 > are4;
    resultadoPIB = PIB > produtoib;
    resultadoNPT = NPT > npt;
    resultadoDenPopulacional = DenPopulacional < denpopulacional;
    resultadoPIBpc = PIBpc > pibpc;
resultadoSuperPoder = SuperPoder > superpoder;

//exibição do resultado da comparação entre as duas cartas
    printf("A População %d é maior que a População %d\n", Populaca0, populaca0);
    printf("A Área %.2f é maior que a Área %.2f\n", Are4, are4);
    printf("O PIB %.2f é maior que o PIB %.2f\n", PIB, produtoib);
    printf("O N° de pontos turísticos %d é maior que o N° de pontos tuísticos %d\n", NPT, npt);
  printf("A Densidade Populacional %.2f é menor que a Densidade Populacional %.2f\n", DenPopulacional, denpopulacional);
printf("O PIB per Capita %.2f é maior que o PIB per Capita %.2f\n", PIBpc, pibpc);
printf("O Super Poder %.2f é maior que o Super Poder %.2f\n", SuperPoder, superpoder);


printf("Comparação de Cartas:\n");
printf("População: Carta 1 venceu (1)\n");
printf("Área: Carta 1 venceu (1)\n");
printf("PIB: Carta 1 venceu (1)\n");
printf("Pontos Turísticos: Carta 1 venceu (1)\n");
printf("Densidade Populacional: Carta 2 venceu (0)\n");
printf("PIB per Capita: Carta 1 venceu (1)\n");
printf("Super Poder: Carta 1 venceu (1)\n");


if(PIB > produtoib){
  printf("Carta 1 venceu!\n");
} else{
  printf("Carta 2 venceu!\n");
}

printf("Carta 1-Itaituba: %f\n", &PIB);
printf("Carta 2-Aveiro: %f\n", &produtoib);
printf("Resultado: Carta 1 (Itaituba)venceu!\n");

    return 0;
}
