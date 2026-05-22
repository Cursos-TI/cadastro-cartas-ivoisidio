#include <stdio.h>

int main(){
    char estado1[3];
    char codigo1[4];
    char cidade1[50];
    float populacao1;
    float area1;
    float pib1;
    int pontos1;

    char estado2[3];
    char codigo2[4];
    char cidade2[50];
    float populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Variáveis de cálculo
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

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
    printf("A ÁREA DIGITADA FOI: %.2f \n", area1);

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
    printf("A ÁREA DIGITADA FOI: %.2f \n", area2);

    printf("DIGITE O PIB DA CIDADE: \n");
    scanf("%f", &pib2);
    printf("O PIB DIGITADO FOI: %.2f \n", pib2);

    printf("DIGITE A QUANTIDADE DE PONTOS TURISTICOS: \n");
    scanf("%d", &pontos2);
    printf("A QUANTIDADE DE PONTOS DIGITADOS FOI: %d \n", pontos2);

    // ==================== CÁLCULOS ====================
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    // Super Poder = população + área + pib + pontos + pib per capita + (1 / densidade)
    superPoder1 = populacao1 + area1 + pib1 + pontos1 + pibPerCapita1 + (1.0 / densidade1);
    superPoder2 = populacao2 + area2 + pib2 + pontos2 + pibPerCapita2 + (1.0 / densidade2);

    // ==================== COMPARAÇÕES ====================
    printf("\n=== COMPARAÇÃO DE CARTAS ===\n");

    printf("População: Carta %d venceu (%d)\n", 
           (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2));

    printf("Área: Carta %d venceu (%d)\n", 
           (area1 > area2) ? 1 : 2, (area1 > area2));

    printf("PIB: Carta %d venceu (%d)\n", 
           (pib1 > pib2) ? 1 : 2, (pib1 > pib2));

    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 
           (pontos1 > pontos2) ? 1 : 2, (pontos1 > pontos2));

    printf("Densidade Populacional: Carta %d venceu (%d)\n", 
           (densidade1 < densidade2) ? 1 : 2, (densidade1 < densidade2));

    printf("PIB per Capita: Carta %d venceu (%d)\n", 
           (pibPerCapita1 > pibPerCapita2) ? 1 : 2, (pibPerCapita1 > pibPerCapita2));

    printf("Super Poder: Carta %d venceu (%d)\n", 
           (superPoder1 > superPoder2) ? 1 : 2, (superPoder1 > superPoder2));

    return 0;
}


