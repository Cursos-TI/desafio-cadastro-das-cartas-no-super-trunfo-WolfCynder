#include <stdio.h>

int main (){

    //Declaração de variaveis 1 carta
    char estado1[50];
    char codigo1[50];
    char nomedacidade1[50];
    int população1;
    float area1;
    float pib1;
    int pontosturisticos1;

    //Espesificadores da 1 carta

    printf("Cadastro 1 carta: \n");

    printf("Estado: \n");
    scanf("%s", estado1);

    printf("Código: \n");
    scanf("%s", codigo1);

    printf("Nome da cidade: \n");
    scanf("%s", nomedacidade1);

    printf("Polulação: \n");
    scanf("%d", &população1);

    printf("Área: \n");
    scanf("%f", &area1);

    printf("PIB \n");
    scanf("%f", &pib1);

    printf("Números de pontos turísticos: \n", pontosturisticos1);
    scanf("%i", &pontosturisticos1);

    //Declaração de variaveis carta 2
    char estado2[50];
    char codigo2[50];
    char nomedacidade2[50];
    int população2;
    float area2;
    float pib2;
    int pontosturisticos2;

    //Espesificadores da 2 carta
    printf("Cadastro 2 carta: \n");    

    printf("Estado: \n");
    scanf("%s", estado2);

    printf("Código: \n");
    scanf("%s", codigo2);

    printf("Nome da cidade: \n");
    scanf("%s", nomedacidade2);

    printf("População: \n");
    scanf("%d", &população2);

    printf("Área: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Pontos turísticos \n", pontosturisticos2);
    scanf("%d", &pontosturisticos2);

    //Exebição das irfromações 1 carta
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", nomedacidade1);
    printf("População %d \n", população1);
    printf("Área: %f \n", area1);
    printf("PIB: %f \n", pib1);
    printf("Pontos tueísticos: %d \n", pontosturisticos1);

    //Exebição das infromações 2 carta
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", nomedacidade2);
    printf("População %d \n", população2);
    printf("Área: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Pontos turísticos: %d \n", pontosturisticos2);


    return 0;


}
