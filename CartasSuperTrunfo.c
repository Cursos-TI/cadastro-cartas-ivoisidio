#include <stdio.h>

int main(){
    char estado1 [3];
    char codigo1 [4];
    char cidade1 [50];
    float populacao1;
    float area1;
    float pib1;
    int pontos1;
//variaveis primeira carta

char estado2 [2];
char codigo2 [3];
char cidade2 [50];
float populacao2;
float area2;
float pib2;
int pontos2;

//variaveis carta 2

//cadastro carta 1

printf ("DIGITE OS DADOS DA PRIMEIRA CARTA \n");

printf ("DIGITE O ESTADO : \n");
scanf ("%s", estado1);
printf ("O ESTADO DIGITADO FOI : %s \n", estado1);

printf ("DIGITE O CODIGO DA CARTA \n");
scanf ("%s", codigo1);
printf ("O CODIGO DIGITADO FOI : %s \n", codigo1);

printf ("DIGITE O NOME DA CIDADE : \n");
scanf ("%s" , cidade1);
printf ("O NOME DA CIDADE DIGITADA FOI : %s \n", cidade1);

printf ("DIGITE A POPULAÇAO DA CIDADE : \n");
scanf ("%f", &populacao1);
printf ("A POPULAÇAO DIGITADA FOI : %f \n", populacao1);

printf ("DIGITE A ÁREA DA CIDADE : \n");
scanf ("%f", &area1);
printf ("A ÁREA DIGITADA FOI : %f \n", area1);

printf ("DIGITE O PIB DA CIDADE : \n");
scanf ("%f", &pib1);
printf ("O PIB DIGITADO FOI : %f \n", pib1);

printf ("DIGITE A QUANTIDADE DE PONTOS TURISTICOS DA CIDADE : \n");
scanf ("%d", &pontos1);
printf ("A QUANTIDADE DE PONTOS DIGITADOS FORAM : %d \n", pontos1);

//dados carta 2



printf ("DIGITE OS DADOS DA SEGUNDA CARTA \n");

printf ("DIGITE O ESTADO : \n");
scanf ("%s", estado2);
printf ("O ESTADO DIGITADO FOI : %s \n", estado2);

printf ("DIGITE O CODIGO DA CARTA \n");
scanf ("%s", codigo2);
printf ("O CODIGO DIGITADO FOI : %s \n", codigo2);

printf ("DIGITE O NOME DA CIDADE : \n");
scanf ("%s" , cidade2);
printf ("O NOME DA CIDADE DIGITADA FOI : %s \n", cidade2);

printf ("DIGITE A POPULAÇAO DA CIDADE : \n");
scanf ("%f", &populacao2);
printf ("A POPULAÇAO DIGITADA FOI : %f \n", populacao2);

printf ("DIGITE A ÁREA DA CIDADE : \n");
scanf ("%f", &area2);
printf ("A ÁREA DIGITADA FOI : %f \n", area2);

printf ("DIGITE O PIB DA CIDADE : \n");
scanf ("%f", &pib2);
printf ("O PIB DIGITADO FOI : %f \n", pib2);

printf ("DIGITE A QUANTIDADE DE PONTOS TURISTICOS DA CIDADE : \n");
scanf ("%d", &pontos2);
printf ("A QUANTIDADE DE PONTOS DIGITADOS FORAM : %d", pontos2);

return 0;

}
