#include <stdio.h>
#include <string.h>

int main() {

    //declaração de variáveis
    char estado1, estado2, codigo_1[2], codigo_2[2], cidade1[25], cidade2[25];
    int num_pontosturisticos1, num_pontosturisticos2, populacao1, populacao2, opcao;
    float area1, area2, pib1, pib2, densidade1, densidade2, pib_capita1, pib_capita2;
    

    //Cadastro da primeira carta
    printf("Escreva o estado da primeira carta: ");
    scanf(" %c", &estado1);

    printf("Escreva o codigo da primeira carta: ");
    scanf(" %s", codigo_1);
    getchar();

    printf("Escreva o nome da primeira cidade: ");
    fgets(cidade1, 24, stdin);0;

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
    getchar();

    printf("Escreva o nome da segunda cidade: ");
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


    //Menu interativo para realizar comparações
    printf("\nDigite 1 para Exibir os Atributos do pais\n");
    printf("Digite 2 para comparar a População dos paises\n");
    printf("Digite 3 para comparar a Area dos paises\n");
    printf("Digite 4 para comparar o PIB dos paises\n");
    printf("Digite 5 para comparar o Numero de Pontos Turisticos dos paises\n");
    printf("Digite 6 para comparar a densidade Demografica dos paises\n");
    scanf(" %d", &opcao);
    
    //Switch para realizar a comparação escolhida
    switch(opcao) {
        case 1 :
            printf("\nCarta 1 - Nome: %s\n", cidade1);
            printf("Populacao - %d\n", populacao1);
            printf("Area - %f\n", area1);
            printf("PIB - %f\n", pib1);
            printf("Numero de Pontos Turisticos - %d\n", num_pontosturisticos1);
            printf("Densidade Demografica - %f\n\n", densidade1);
            printf("Carta 2 - Nome: %s\n", cidade2);
            printf("Populacao - %d\n", populacao2);
            printf("Area - %f\n", area2);
            printf("PIB - %f\n", pib2);
            printf("Numero de Pontos Turisticos - %d\n", num_pontosturisticos2);
            printf("Densidade Demografica - %f\n", densidade2);
        break;
        case 2 :
            printf("\nCarta 1 - %s - Populacao = %d", cidade1, populacao1);
            printf("\nCarta 2 - %s - Populacao = %d\n", cidade2, populacao2);
            if(populacao1 > populacao2) {
                printf("Carta 1 Venceu!\n");
            } else if(populacao1 < populacao2) {
                printf("Carta 2 Venceu!\n");
            } else {
                printf("Empate!\n");
            }
        break;
        case 3 :
            printf("\nCarta 1 - %s - Area = %f", cidade1, area1);
            printf("\nCarta 2 - %s - Area = %f\n", cidade2, area2);
            if(area1 > area2) {
                printf("Carta 1 Venceu!\n");
            } else if(area1 < area2) {
                printf("Carta 2 Venceu!\n");
            } else {
                printf("Empate!\n");
            }
        break;
        case 4 :
            printf("\nCarta 1 - %s - Pib = %f", cidade1, pib1);
            printf("\nCarta 2 - %s - Pib = %f\n", cidade2, pib2);
            if(pib1 > pib2) {
                printf("Carta 1 Venceu!\n");
            } else if(pib1 < pib2) {
                printf("Carta 2 Venceu!\n");
            } else {
                printf("Empate!\n");
            }
        break;
        case 5 :
            printf("\nCarta 1 - %s - Pontos Turisticos = %d", cidade1, num_pontosturisticos1);
            printf("\nCarta 2 - %s - Pontos Turisticos = %d\n", cidade2, num_pontosturisticos2);
            if(num_pontosturisticos1 > num_pontosturisticos2) {
                printf("Carta 1 Venceu!\n");
            } else if(num_pontosturisticos1 < num_pontosturisticos2) {
                printf("Carta 2 Venceu!\n");
            } else {
                printf("Empate!\n");
            }
        break;
        case 6 :
            printf("\nCarta 1 - %s - Densidade Demografica = %f", cidade1, densidade1);
            printf("\nCarta 2 - %s - Densidade Demografica = %f\n", cidade2, densidade2);
            if(densidade1 < densidade2) {
                printf("Carta 1 Venceu!\n");
            } else if(densidade1 > densidade2) {
                printf("Carta 2 Venceu!\n");
            } else {
                printf("Empate!\n");
            }
        break;
        default :
            printf("Opcao Invalida\n");
    }
    
    return 0;
}