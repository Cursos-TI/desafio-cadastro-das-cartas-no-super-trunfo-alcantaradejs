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
    int populacaoCarta1;
    float areaCarta1; // em km²
    float PIBCarta1;
    int numeroPontosTuristicosCarta1;

    /*printf("\nPor favor insira as informações da Carta 1\n");
    
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
    scanf("%i", &numeroPontosTuristicosCarta1);*/

    printf("Digite o numero de habitantes da cidade:\n");
    scanf("%i", &populacaoCarta1);

    printf("Digite a área da cidade em km² (não digite 'Km²'):\n");
    scanf("%f", &areaCarta1);

    printf("Digite o PIB da cidade (em bilhões de reais):\n");
    scanf("%f", &PIBCarta1);
    
    float desidadePopulacionalCarta1 = (float) populacaoCarta1 / areaCarta1; // hab/km²
    float PIBPerCapitaCarta1 =  PIBCarta1*1000000000 / (float) populacaoCarta1;

    //exibir informaçõse das cartas
    printf("\n+-----------------------------------+\n");
    printf("|          Suas Cartas São          |\n");
    printf("+-----------------------------------+\n");

    //printf("\n[ Carta 1 ]\n");
    //printf("Estado: %c\n", estadoCarta1);
    //printf("Codigo da Carta: %c%s\n", estadoCarta1, codigoCarta1);
    //printf("Nome da cidade: %s\n", nomeCidadeCarta1);
    printf("População: %i habitantes\n", populacaoCarta1);
    printf("Área: %.2f Km²\n", areaCarta1);
    printf("PIB: %.2f bilhões de reais\n", PIBCarta1);
    //printf("Número de pontos turísticos: %i\n", numeroPontosTuristicosCarta1);
    printf("Densidade populacional: %.2f\n", desidadePopulacionalCarta1);
    printf("PIB per capita: %.2f\n", PIBPerCapitaCarta1);

    return 0;
}
