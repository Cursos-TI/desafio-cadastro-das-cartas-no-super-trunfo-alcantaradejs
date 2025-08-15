let estado = 'A'; // letra de 'A' a 'H'
let codigo = "01"; // {estado} + numero de 01 a 04
let nomeCidade = "São Paulo";
let populacao = 12325000;
let area = 1521.11; // em km²
let PIB = 699.28;
let numeroPontosTuristicos = 50;

let desidadePopulacional =  populacao / area; // hab/km²
let PIBPerCapita =  PIB * 1000000000 / populacao;
let superPoder =  ( populacao + area + (PIB * 1000000000) + numeroPontosTuristicos + PIBPerCapita + (1/desidadePopulacional));

// exibir cartas
console.log("+-----------------------------------+");
console.log("|               Carta               |");
console.log("+-----------------------------------+\n");

console.log(`Estado: ${estado}`);
console.log(`Codigo da Carta: ${estado}${codigo}`);
console.log(`Nome da cidade: ${nomeCidade}`);
console.log(`População: ${populacao} habitantes`);
console.log(`Área: ${area} Km²`);
console.log(`PIB: ${PIB} bilhões de reais`);
console.log(`Número de pontos turísticos: ${numeroPontosTuristicos}`);
console.log(`Densidade populacional: ${desidadePopulacional}`);
console.log(`PIB per capita: R$ ${PIBPerCapita}`);
console.log(`Super Poder: ${superPoder} pontos`);

console.log("\n-------------------------------------\n");