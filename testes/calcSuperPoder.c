#include <stdio.h>

int main() {
    // carta 1
    char estadoCarta1 = 'A'; // letra de 'A' a 'H'
    char codigoCarta1[3] = "01"; // {estado} + numero de 01 a 04
    char nomeCidadeCarta1[60] = "São Paulo";
    unsigned long int populacaoCarta1 = 12325000;
    float areaCarta1 = 1521.11; // em km²
    float PIBCarta1 = 699.28;
    int numeroPontosTuristicosCarta1 = 50;

    float desidadePopulacionalCarta1 = (float) populacaoCarta1 / areaCarta1; // hab/km²
    float PIBPerCapitaCarta1 = (float) PIBCarta1 * 1000000000 / populacaoCarta1;
    float superPoderCarta1 =  (float) populacaoCarta1 + areaCarta1 + (PIBCarta1 * 1000000000) + numeroPontosTuristicosCarta1 + PIBPerCapitaCarta1 + (1/desidadePopulacionalCarta1);

    // exibir carta
    printf("\n+-----------------------------------+\n");
    printf("|              Carta 1              |\n");
    printf("+-----------------------------------+\n\n");

    printf("Estado: %c\n", estadoCarta1);
    printf("Codigo da Carta: %c%s\n", estadoCarta1, codigoCarta1);
    printf("Nome da cidade: %s\n", nomeCidadeCarta1);
    printf("População: %lu habitantes\n", populacaoCarta1);
    printf("Área: %.2f Km²\n", areaCarta1);
    printf("PIB: %.2f bilhões de reais\n", PIBCarta1);
    printf("Número de pontos turísticos: %i\n", numeroPontosTuristicosCarta1);
    printf("Densidade populacional: %.2f\n", desidadePopulacionalCarta1);
    printf("PIB per capita: R$ %.2f\n", PIBPerCapitaCarta1);
    printf("Super Poder: %.2f pontos\n", superPoderCarta1);

    // Carta 2
    char estadoCarta2 = 'B'; // letra de 'A' a 'H'
    char codigoCarta2[3] = "02"; // {estado} + numero de 01 a 04
    char nomeCidadeCarta2[60] = "Rio de Janeiro";
    unsigned long int populacaoCarta2 = 6748000;
    float areaCarta2 = 1200.25; // em km²
    float PIBCarta2 = 300.50;
    int numeroPontosTuristicosCarta2 = 30;

    float desidadePopulacionalCarta2 = (float) populacaoCarta2 / areaCarta2; // hab/km²
    float PIBPerCapitaCarta2 = (float) PIBCarta2 * 1000000000 / populacaoCarta2;
    float superPoderCarta2 =  (float) populacaoCarta2 + areaCarta2 + (PIBCarta2 * 1000000000) + numeroPontosTuristicosCarta2 + PIBPerCapitaCarta2 + (1/desidadePopulacionalCarta2);

    //exibir carta
    printf("\n+-----------------------------------+\n");
    printf("|              Carta 2              |\n");
    printf("+-----------------------------------+\n\n");

    printf("Estado: %c\n", estadoCarta2);
    printf("Codigo da Carta: %c%s\n", estadoCarta2, codigoCarta2);
    printf("Nome da cidade: %s\n", nomeCidadeCarta2);
    printf("População: %lu habitantes\n", populacaoCarta2);
    printf("Área: %.2f Km²\n", areaCarta2);
    printf("PIB: %.2f bilhões de reais\n", PIBCarta2);
    printf("Número de pontos turísticos: %i\n", numeroPontosTuristicosCarta2);
    printf("Densidade populacional: %.2f\n", desidadePopulacionalCarta2);
    printf("PIB per capita: R$ %.2f\n", PIBPerCapitaCarta2);
    printf("Super Poder: %.2f pontos\n", superPoderCarta2);

    //Fim
    printf("\n-------------------------------------\n\n");
}