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
    int Populaca0;
    float Are4;
    float PIB;
    int NPT;
    float DenPopulacional;
    float PIBpc;
    char estado;
    char codig0[3];
    char  cidade[20];
     int populaca0;
    float are4;
    float produtoib;
    int npt;
    float denpopulacional;
    float pibpc;


    printf("Carta 1:\n");
    printf("Digite a letra do estado: \n");
    scanf("%c", &Estado);

    printf("Digite o código do estado: \n");
    scanf("%s", Codig0);

    printf("Digite o nome da cidade: \n");
    scanf("%s", CIDADE);

    printf("Digite o número populacional da cidade: \n");
    scanf("%d", &Populaca0);

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
    scanf("%d", &populaca0);

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
    printf("População: %f\n", Populaca0);
    printf("Área: %f\n", Are4);
    printf("PIB: %f\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", NPT);
    printf("Densidade Populacional: %.2f\n", DenPopulacional);
    printf("PIB per Capita: %.2f\n", PIBpc);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codig0);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %f\n", populaca0);
    printf("Área: %f\n", are4);
    printf("PIB: %f\n", produtoib);
    printf("Número de Pontos Turísticos: %d\n", npt);
    printf("Densidade Populacional: %.2f\n", DenPopulacional);
    printf("PIB per Capita: %.2f\n", pibpc);

    





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
