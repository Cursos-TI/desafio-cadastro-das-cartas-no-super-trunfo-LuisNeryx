#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    char Estado, Codigo_Carta, nome_cidade;
    int Populacao, Pontos_Turisticos;
    float Area;
    float PIB;
    
    printf("Desafio Super Trunfo\n");
  
    printf("Digite o nome do estado: \n");
    scanf("%s", &Estado);

    printf("Digite o código da carta: \n");
    scanf("%s", &Codigo_Carta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_cidade);

    printf("Digite a População: \n");
    scanf("%d", &Populacao);

    printf("Digite a área em km2: \n");
    scanf("%f", &Area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Pontos_Turisticos);

    printf("Estado: %s\n", Estado);
    printf("Código da carta: %s\n");


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
