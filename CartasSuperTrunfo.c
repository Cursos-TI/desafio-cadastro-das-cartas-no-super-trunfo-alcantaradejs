#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Carta 1
    char estadoCarta1; // letra de 'A' a 'H'
    char codigoCarta1[3]; // {estado} + numero de 01 a 04
    char nomeCidadeCarta1[60]; // não pode ser nome composto
    int populacaoCarta1;
    float areaCarta1; // em km²
    float PIBCarta1;
    int numeroPontosTuristicosCarta1;

    printf("-------------------------------------\n");
    printf("Por favor insira as informações da Carta 1\n\n");
    
    printf("Digite o codigo da carta (uma letra de 'A' a 'H'):\n");
    scanf(" %c", &estadoCarta1);

    printf("Digite o codigo da carta (de 01 a 04):\n");
    scanf("%s", &codigoCarta1);

    printf("Digite o nome da cidade (não utilize nome composto):\n");
    scanf("%s", &nomeCidadeCarta1);

    printf("Digite o numero de habitantes da cidade:\n");
    scanf("%i", &populacaoCarta1);

    printf("Digite a área da cidade em km² (não digite 'Km²'):\n");
    scanf("%f", &areaCarta1);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &PIBCarta1);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%i", &numeroPontosTuristicosCarta1);

    // carta 2
    char estadoCarta2; // letra de 'A' a 'H'
    char codigoCarta2[3]; // {estado} + numero de 01 a 04
    char nomeCidadeCarta2[60]; // não pode ser nome composto
    int populacaoCarta2;
    float areaCarta2; // em km²
    float PIBCarta2;
    int numeroPontosTuristicosCarta2;

    printf("-------------------------------------\n");
    printf("Por favor insira as informações da Carta 2\n\n");
    
    printf("Digite o codigo da carta (uma letra de 'A' a 'H'):\n");
    scanf(" %c", &estadoCarta2);

    printf("Digite o codigo da carta (de 01 a 04):\n");
    scanf("%s", &codigoCarta2);

    printf("Digite o nome da cidade (não utilize nome composto):\n");
    scanf("%s", &nomeCidadeCarta2);

    printf("Digite o numero de habitantes da cidade:\n");
    scanf("%i", &populacaoCarta2);

    printf("Digite a área da cidade em km² (não digite 'Km²'):\n");
    scanf("%f", &areaCarta2);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &PIBCarta2);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%i", &numeroPontosTuristicosCarta2);

    // exibir cartas
    printf("-----------------------------------------\n");
    printf("As cartas são:\n\n");

    printf("Carta 1\n");
    printf("Estado: %c\n", estadoCarta1);
    printf("Codigo da Carta: %c%s\n", estadoCarta1, codigoCarta1);
    printf("Nome da cidade: %s\n", nomeCidadeCarta1);
    printf("População: %i habitantes\n", populacaoCarta1);
    printf("Área: %.2f Km²\n", areaCarta1);
    printf("PIB: %.2f\n", PIBCarta1);
    printf("Número de pontos turísticos: %i\n", numeroPontosTuristicosCarta1);
    
    printf("\nCarta 2\n");
    printf("Estado: %c\n", estadoCarta1);
    printf("Codigo da Carta: %c%s\n", estadoCarta1, codigoCarta1);
    printf("Nome da cidade: %s\n", nomeCidadeCarta1);
    printf("População: %i habitantes\n", populacaoCarta1);
    printf("Área: %.2f Km²\n", areaCarta1);
    printf("PIB: %.2f\n", PIBCarta1);
    printf("Número de pontos turísticos: %i\n", numeroPontosTuristicosCarta1);

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
