#include <stdio.h>

int main (){

    //Declaração de variaveis 1 carta
    char estado1;
    char codigo1[50];
    char nomedacidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    //Espesificadores da 1 carta

    printf("\nCadastro 1º carta: \n");

    printf("Estado: \n");
    scanf(" %c", &estado1);

    printf("Código: \n");
    scanf("%s", codigo1);

    printf("Nome da cidade: \n");
    scanf("%s", nomedacidade1);

    printf("Polulação: \n");
    scanf("%d", &populacao1);

    printf("Área: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Números de pontos turísticos: \n", pontosturisticos1);
    scanf("%d", &pontosturisticos1);

    //Declaração de variaveis carta 2
    char estado2;
    char codigo2[50];
    char nomedacidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    //Espesificadores da 2 carta
    printf("\nCadastro 2º carta: \n");    

    printf("Estado: \n");
    scanf(" %c", &estado2);

    printf("Código: \n");
    scanf("%s", codigo2);

    printf("Nome da cidade: \n");
    scanf("%s", nomedacidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Pontos turísticos \n", pontosturisticos2);
    scanf("%d", &pontosturisticos2);

    //Exebição das irfromações 1 carta
    printf("\n---Carta 1 ---\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", nomedacidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f reias \n", pib1);
    printf("Pontos tueísticos: %d \n", pontosturisticos1);

    //Exebição das infromações 2 carta
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", nomedacidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f reais \n", pib2);
    printf("Pontos turísticos: %d \n", pontosturisticos2);


    return 0;


}
