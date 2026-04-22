#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

   /// VARIAVEL CARTA 1


    char estado1 = 'A';
    char codigo1[5] = "A01";
    char cidade1[9] = "Campinas";
    int populacao1 = 1185977;
    float area1 = 794.571;
    float pib1 = 91.968;
    int pontosTuristicos1 = 15;


    //// VARIAVEL CARTA 2


    char estado2 = 'B';
    char codigo2[5] = "B02";
    char cidade2[10] = "Guarulhos";
    int populacao2 = 1340000;
    float area2 = 318.838;
    float pib2 = 77;
    int pontosTuristicos2 = 14;

    //// DADOS CARTA 1
    printf("Carta 1:\n");

    printf("codigo1: %s\n", codigo1);
    printf("Cidade 1: %s\n", cidade1);
    printf("populacao1: %d\n", populacao1);
    printf("area1: %f\n", area1);
    printf("pib1: %f\n", pib1);
    printf("pontosturisticos1:%d\n", pontosTuristicos1); 




    printf("\n\n\n");

    

    /// DADOS CARTA 2

     printf("Carta 2:\n");

    printf("codigo2: %s\n", codigo2);
    printf("Cidade 2: %s\n", cidade2);
    printf("populacao2: %d\n", populacao2);
    printf("area2: %f\n", area2);
    printf("pib2: %f\n", pib2);
    printf("pontosturisticos2:%d\n", pontosTuristicos2); 

return 0;
} 
