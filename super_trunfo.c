#include <stdio.h>

int main() {

    // =========================
    // DECLARAÇÃO DAS VARIÁVEIS
    // =========================

    // Carta 1
    char estado1;
    char codigo1[4];
    char nome1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;
    float densidade1, pib_per_capita1, super_poder1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char nome2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;
    float densidade2, pib_per_capita2, super_poder2;

    // =========================
    // ENTRADA DE DADOS - CARTA 1
    // =========================

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // =========================
    // ENTRADA DE DADOS - CARTA 2
    // =========================

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // =========================
    // CÁLCULOS
    // =========================

    densidade1 = (float) populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0) / populacao1;

    densidade2 = (float) populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0) / populacao2;

    super_poder1 = (float) populacao1 + area1 + pib1 + pontos1 + pib_per_capita1 + (1 / densidade1);
    super_poder2 = (float) populacao2 + area2 + pib2 + pontos2 + pib_per_capita2 + (1 / densidade2);

    // =========================
    // EXIBIÇÃO DOS RESULTADOS
    // =========================

    printf("\n=== Comparacao de Cartas ===\n");

    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);

    // Para densidade, menor vence
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);

    return 0;
}