#include <stdio.h>

int main() {
     // Dados da primeira carta (São Paulo)
    char estado1 = 'A';
    char codigo1[4] = "A01";
    char cidade1[50] = "São Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11f;
    float pib1 = 699.28f;
    int pontos_turisticos1 = 50;

    // Dados da segunda carta (Rio de Janeiro)
    char estado2 = 'B';
    char codigo2[4] = "B02";
    char cidade2[50] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25f;
    float pib2 = 300.50f;
    int pontos_turisticos2 = 30;

    // Exibição dos dados da primeira carta
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    // Exibição dos dados da segunda carta
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}
