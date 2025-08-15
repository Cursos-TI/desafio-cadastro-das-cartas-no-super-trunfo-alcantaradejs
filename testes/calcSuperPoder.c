#include <stdio.h>

int main() {
    char estado = 'A'; // letra de 'A' a 'H'
    char codigo[3] = "01"; // {estado} + numero de 01 a 04
    char nomeCidade[60] = "São Paulo";
    unsigned long int populacao = 12325000;
    float area = 1521.11; // em km²
    float PIB = 699.28;
    int numeroPontosTuristicos = 50;

    float desidadePopulacional = (float) populacao / area; // hab/km²
    float PIBPerCapita = (float) PIB * 1000000000 / populacao;
    float superPoder =  (float) populacao + area + (PIB * 1000000000) + numeroPontosTuristicos + PIBPerCapita + (1/desidadePopulacional);

    // exibir cartas
    printf("\n+-----------------------------------+\n");
    printf("|               Carta               |\n");
    printf("+-----------------------------------+\n\n");

    printf("Estado: %c\n", estado);
    printf("Codigo da Carta: %c%s\n", estado, codigo);
    printf("Nome da cidade: %s\n", nomeCidade);
    printf("População: %lu habitantes\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de pontos turísticos: %i\n", numeroPontosTuristicos);
    printf("Densidade populacional: %.2f\n", desidadePopulacional);
    printf("PIB per capita: R$ %.2f\n", PIBPerCapita);
    printf("Super Poder: %f pontos\n", superPoder);

    printf("\n-------------------------------------\n\n");
}