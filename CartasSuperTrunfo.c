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

    DenPopulacional = Populaca0 / Are4;
    PIBpc = PIB / Populaca0;
    denpopulacional = populaca0 / are4;
    pibpc = produtoib / populaca0;

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

    SuperPoder = Populaca0 + Are4 + PIB + NPT + DenPopulacional + PIBpc;

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

    superpoder = populaca0 + are4 + produtoib + npt + denpopulacional + pibpc;

    resultadoPopulaca0 = Populaca0 > populaca0;
    resultadoAre4 = Are4 > are4;
    resultadoPIB = PIB > produtoib;
    resultadoNPT = NPT > npt;
    resultadoDenPopulacional = DenPopulacional < denpopulacional;
    resultadoPIBpc = PIBpc > pibpc;
resultadoSuperPoder = SuperPoder > superpoder;

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



    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
