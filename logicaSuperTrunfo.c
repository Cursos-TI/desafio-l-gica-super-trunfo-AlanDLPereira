#include <stdio.h>

int main() {

    //declaração de variáveis
    char estado1, estado2, codigo_1[2], codigo_2[2], cidade1[25], cidade2[25];
    int num_pontosturisticos1, num_pontosturisticos2, populacao1, populacao2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pib_capita1, pib_capita2;
    

    //Cadastro da primeira carta
    printf("Escreva o estado da primeira carta: ");
    scanf(" %c", &estado1);

    printf("Escreva o codigo da primeira carta: ");
    scanf(" %s", codigo_1);

    printf("Escreva o nome da primeira cidade: ");
    getchar();
    fgets(cidade1, 24, stdin);

    printf("Escreva o numero da populacao da primeira cidade: ");
    scanf(" %d", &populacao1);
    
    printf("Escreva a area em km2 da primeira cidade: ");
    scanf(" %f", &area1);

    printf("Escreva o pib em bilhoes da primeira cidade: ");
    scanf(" %f", &pib1);

    printf("Escreva o numero de pontos turisticos da primeira cidade: ");
    scanf(" %d", &num_pontosturisticos1);


    //Cadastro da segunda carta
    printf("\nEscreva o estado da segunda carta: ");
    scanf(" %c", &estado2);

    printf("Escreva o codigo da segunda carta: ");
    scanf(" %s", codigo_2);

    printf("Escreva o nome da segunda cidade: ");
    getchar();
    fgets(cidade2, 24, stdin);

    printf("Escreva o numero da populacao da segunda cidade: ");
    scanf(" %d", &populacao2);
    
    printf("Escreva a area em km2 da segunda cidade: ");
    scanf(" %f", &area2);

    printf("Escreva o pib em bilhoes da segunda cidade: ");
    scanf(" %f", &pib2);

    printf("Escreva o numero de pontos turisticos da segunda cidade: ");
    scanf(" %d", &num_pontosturisticos2);

    //Calculos
    densidade1 = (float)populacao1/area1;
    densidade2 = (float)populacao2/area2;
    pib_capita1 = pib1/(float)populacao1;
    pib_capita2 = pib2/(float)populacao2;

    //Organizaçao da saída
    printf("\nComparacao de cartas (Atributo: Area):\n\n");
    printf("Carta 1 - %s: %f\n", cidade1, area1);
    printf("Carta 2 - %s: %f", cidade2, area2);

    //Comparação utilizando if e else
    if(area1 > area2) {
        printf("Carta 1 %s venceu!", cidade1);
    } else {
        printf("Carta 2 %s venceu!\n", cidade2);
    }

    return 0;
}