#include <stdio.h>

int main() {

    printf("Desafio Super Trunfo\n");

    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];      // Ex: A01 (3 caracteres + '\0')
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    
 // Entrada de dados para a Carta 1
    printf("CARTA 1:\n");

    printf("Digite o estado (letra de A a H): \n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01): \n");
    scanf(" %3s", codigo1);  // Lê até 3 caracteres

    printf("Digite o nome da cidade: \n");
    scanf(" %49s", nomeCidade1);  // Simples, sem espaços

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área em km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &pib1);
  
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados para a Carta 2
    printf("\nCARTA 2:\n");

    printf("Digite o estado (letra de A a H): \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: B02): \n");
    scanf(" %3s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %49s", nomeCidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

     printf("\n========== CARTAS CADASTRADAS ==========\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);


    return 0;
}
