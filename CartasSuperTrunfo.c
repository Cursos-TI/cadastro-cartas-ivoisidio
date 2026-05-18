#include <stdio.h>

int main(){
    char estado1[3];
    char codigo1[4];
    char cidade1[50];
    float populacao1;
    float area1;
    float pib1;
    int pontos1;

    char estado2[3];     // corrigi de [2] para [3]
    char codigo2[4];     // corrigi de [3] para [4]
    char cidade2[50];
    float populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Variáveis para os cálculos
    float densidade1, pib_per_capita1;
    float densidade2, pib_per_capita2;

    // ==================== CADASTRO CARTA 1 ====================
    printf("DIGITE OS DADOS DA PRIMEIRA CARTA \n");

    printf("DIGITE O ESTADO: \n");
    scanf("%s", estado1);
    printf("O ESTADO DIGITADO FOI: %s \n", estado1);

    printf("DIGITE O CODIGO DA CARTA: \n");
    scanf("%s", codigo1);
    printf("O CODIGO DIGITADO FOI: %s \n", codigo1);

    printf("DIGITE O NOME DA CIDADE: \n");
    scanf("%s", cidade1);
    printf("O NOME DA CIDADE DIGITADA FOI: %s \n", cidade1);

    printf("DIGITE A POPULAÇÃO DA CIDADE: \n");
    scanf("%f", &populacao1);
    printf("A POPULAÇÃO DIGITADA FOI: %.0f \n", populacao1);

    printf("DIGITE A ÁREA DA CIDADE: \n");
    scanf("%f", &area1);
    printf("A ÁREA DIGITADA FOI: %.2f km² \n", area1);

    printf("DIGITE O PIB DA CIDADE: \n");
    scanf("%f", &pib1);
    printf("O PIB DIGITADO FOI: %.2f \n", pib1);

    printf("DIGITE A QUANTIDADE DE PONTOS TURISTICOS: \n");
    scanf("%d", &pontos1);
    printf("A QUANTIDADE DE PONTOS DIGITADOS FOI: %d \n", pontos1);

    // ==================== CADASTRO CARTA 2 ====================
    printf("\nDIGITE OS DADOS DA SEGUNDA CARTA \n");

    printf("DIGITE O ESTADO: \n");
    scanf("%s", estado2);
    printf("O ESTADO DIGITADO FOI: %s \n", estado2);

    printf("DIGITE O CODIGO DA CARTA: \n");
    scanf("%s", codigo2);
    printf("O CODIGO DIGITADO FOI: %s \n", codigo2);

    printf("DIGITE O NOME DA CIDADE: \n");
    scanf("%s", cidade2);
    printf("O NOME DA CIDADE DIGITADA FOI: %s \n", cidade2);

    printf("DIGITE A POPULAÇÃO DA CIDADE: \n");
    scanf("%f", &populacao2);
    printf("A POPULAÇÃO DIGITADA FOI: %.0f \n", populacao2);

    printf("DIGITE A ÁREA DA CIDADE: \n");
    scanf("%f", &area2);
    printf("A ÁREA DIGITADA FOI: %.2f km² \n", area2);

    printf("DIGITE O PIB DA CIDADE: \n");
    scanf("%f", &pib2);
    printf("O PIB DIGITADO FOI: %.2f \n", pib2);

    printf("DIGITE A QUANTIDADE DE PONTOS TURISTICOS: \n");
    scanf("%d", &pontos2);
    printf("A QUANTIDADE DE PONTOS DIGITADOS FOI: %d \n", pontos2);

    // ==================== CÁLCULOS ====================
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // ==================== RESULTADOS ====================
    printf("\n=== RESULTADOS DAS CARTAS ===\n");

    printf("\nCARTA 1:\n");
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", densidade1);
    printf("PIB PER CAPITA: %.2f\n", pib_per_capita1);

    printf("\nCARTA 2:\n");
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", densidade2);
    printf("PIB PER CAPITA: %.2f\n", pib_per_capita2);

    return 0;
}


