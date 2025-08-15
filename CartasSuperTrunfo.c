#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //Banner
    printf("+-----------------------------------+\n");
    printf("|  Cadastro de Cartas Super Trunfo  |\n");
    printf("+-----------------------------------+\n");
    
    // Pegar informações da Carta 1
    char estadoCarta1; // letra de 'A' a 'H'
    char codigoCarta1[3]; // {estado} + numero de 01 a 04
    char nomeCidadeCarta1[60];
    unsigned long int populacaoCarta1;
    float areaCarta1; // em km²
    float PIBCarta1;
    int numeroPontosTuristicosCarta1;

    printf("\nPor favor insira as informações da Carta 1\n");
    
    printf("Digite o codigo da carta (uma letra de 'A' a 'H'):\n");
    scanf(" %c", &estadoCarta1);

    printf("Digite o codigo da carta (de 01 a 04):\n");
    scanf("%s", &codigoCarta1);

    scanf("%c"); // remove \n do buffer
    printf("Digite o nome da cidade:\n");
    fgets(nomeCidadeCarta1, 60, stdin);
    nomeCidadeCarta1[strcspn(nomeCidadeCarta1, "\n")] = 0; // remove o \n da string

    printf("Digite o numero de habitantes da cidade:\n");
    scanf("%i", &populacaoCarta1);

    printf("Digite a área da cidade em km² (não digite 'Km²'):\n");
    scanf("%f", &areaCarta1);

    printf("Digite o PIB da cidade (em bilhões de reais):\n");
    scanf("%f", &PIBCarta1);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%i", &numeroPontosTuristicosCarta1);

    float desidadePopulacionalCarta1 = (float) populacaoCarta1 / areaCarta1; // hab/km²
    float PIBPerCapitaCarta1 = (float) PIBCarta1 * 1000000000 / populacaoCarta1;
    float superPoderCarta1 =  (float) populacaoCarta1 + areaCarta1 + (PIBCarta1 * 1000000000) + numeroPontosTuristicosCarta1 + PIBPerCapitaCarta1 + (1/desidadePopulacionalCarta1);


    // divisor
    printf("\n-------------------------------------------------------------------\n");

    // Pegar informações da Carta 2
    char estadoCarta2; // letra de 'A' a 'H'
    char codigoCarta2[3]; // {estado} + numero de 01 a 04
    char nomeCidadeCarta2[60];
    unsigned long int populacaoCarta2;
    float areaCarta2; // em km²
    float PIBCarta2;
    int numeroPontosTuristicosCarta2;

    printf("\nPor favor insira as informações da Carta 2\n");
    
    printf("Digite o codigo da carta (uma letra de 'A' a 'H'):\n");
    scanf(" %c", &estadoCarta2);

    printf("Digite o codigo da carta (de 01 a 04):\n");
    scanf("%s", &codigoCarta2);

    scanf("%c"); // remove \n do buffer
    printf("Digite o nome da cidade:\n");
    fgets(nomeCidadeCarta2, 60, stdin);
    nomeCidadeCarta2[strcspn(nomeCidadeCarta2, "\n")] = 0; // remove o \n da string

    printf("Digite o numero de habitantes da cidade:\n");
    scanf("%i", &populacaoCarta2);

    printf("Digite a área da cidade em km² (não digite 'Km²'):\n");
    scanf("%f", &areaCarta2);

    printf("Digite o PIB da cidade (em bilhões de reais):\n");
    scanf("%f", &PIBCarta2);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%i", &numeroPontosTuristicosCarta2);

    float desidadePopulacionalCarta2 = (float) populacaoCarta2 / areaCarta2; // hab/km²
    float PIBPerCapitaCarta2 = (float) PIBCarta2 * 1000000000 / populacaoCarta2;
    float superPoderCarta2 =  (float) populacaoCarta2 + areaCarta2 + (PIBCarta2 * 1000000000) + numeroPontosTuristicosCarta2 + PIBPerCapitaCarta2 + (1/desidadePopulacionalCarta2);


    //exibir informaçõse das cartas
    printf("\n+-----------------------------------+\n");
    printf("|          Suas Cartas São          |\n");
    printf("+-----------------------------------+\n");

    printf("\n[ Carta 1 ]\n");
    printf("Estado: %c\n", estadoCarta1);
    printf("Codigo da Carta: %c%s\n", estadoCarta1, codigoCarta1);
    printf("Nome da cidade: %s\n", nomeCidadeCarta1);
    printf("População: %lu habitantes\n", populacaoCarta1);
    printf("Área: %.2f Km²\n", areaCarta1);
    printf("PIB: %.2f bilhões de reais\n", PIBCarta1);
    printf("Número de pontos turísticos: %i\n", numeroPontosTuristicosCarta1);
    printf("Densidade populacional: %.2f\n", desidadePopulacionalCarta1);
    printf("PIB per capita: R$ %.2f\n", PIBPerCapitaCarta1);
    
    printf("\n\n[ Carta 2 ]\n");
    printf("Estado: %c\n", estadoCarta2);
    printf("Codigo da Carta: %c%s\n", estadoCarta2, codigoCarta2);
    printf("Nome da cidade: %s\n", nomeCidadeCarta2);
    printf("População: %lu habitantes\n", populacaoCarta2);
    printf("Área: %.2f Km²\n", areaCarta2);
    printf("PIB: %.2f bilhões de reais\n", PIBCarta2);
    printf("Número de pontos turísticos: %i\n", numeroPontosTuristicosCarta2);
    printf("Densidade populacional: %.2f\n", desidadePopulacionalCarta2);
    printf("PIB per capita: R$ %.2f\n", PIBPerCapitaCarta2);

    // Comparacao de cartas
    printf("\n+-----------------------------------+\n");
    printf("|         Carta vencedora           |\n");
    printf("+-----------------------------------+\n\n");

    printf("1 significa Carta 1 Venceu | 0 significa carta 2 Venceu");
    printf("População: %d\n", populacaoCarta1 > populacaoCarta2);
    printf("Área: %d\n", areaCarta1 > areaCarta2);
    printf("PIB: %d\n", PIBCarta1 > PIBCarta2);
    printf("Número de pontos turísticos: %d\n", numeroPontosTuristicosCarta1 > numeroPontosTuristicosCarta2);
    printf("Densidade populacional: %d\n", desidadePopulacionalCarta1 < desidadePopulacionalCarta2);
    printf("PIB per capita: %d\n", PIBPerCapitaCarta1 > PIBPerCapitaCarta2);
    printf("Super Poder: %d\n", superPoderCarta1 > superPoderCarta2);

    printf("\n-------------------------------------\n\n"); // fim da tela

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
