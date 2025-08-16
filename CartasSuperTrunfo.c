#include <stdio.h>
int main(){
    char estadoA[1];
    char codicoA [3];
    char nomeCidadeA[20];
    int populacaoA;
    float areaA;
    float pibA;
    int ptTurisA;

    char estadoB[1];
    char codicoB [3];
    char nomeCidadeB[20];
    int populacaoB;
    float areaB;
    float pibB;
    int ptTurisB;

    printf("Estado A, apenas uma letra entre A e H:");
    scanf("%s", &estadoA);
    printf("Codigo Carta A:\n");
    scanf("%s", &codicoA);
    printf("Cidade A:\n");
    scanf("%s", &codicoA);
    printf("Populacao A:\n");
    scanf("%d", &populacaoA);
    printf("Area A:\n");
    scanf("%f", &areaA);
    printf("Pib A:\n");
    scanf("%f", &pibA);
    printf("Numero de Pontos Turisticos A:\n");
    scanf("%d", &ptTurisA);



    printf("Estado B, apenas uma letra entre A e H:");
    scanf("%s", &estadoB);
    printf("Codigo Carta B:\n");
    scanf("%s", &codicoB);
    printf("Cidade B:\n");
    scanf("%s", &codicoA);
    printf("Populacao B:\n");
    scanf("%d", &populacaoB);
    printf("Area B:\n");
    scanf("%f", &areaB);
    printf("Pib A:\n");
    scanf("%f", &pibB);
    printf("Numero de Pontos Turisticos A:\n");
    scanf("%d", &ptTurisB);

    
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=");

    printf("Carta A \n");
    printf("Estado A:  %s\n", estadoA);
    printf("Codigo A: %s\n", codicoA);
    printf("Nome da Cidade A: %s\n", nomeCidadeA);
    printf("Populacao A: %d\n", populacaoA);
    printf("Area A: %.2f\n", areaA);
    printf("PIB A: %.2f\n", pibA);
    printf("Numero de Pontos Turisticos A: %d\n", ptTurisA);

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("Carta B \n");
    printf("Estado B:  %s\n", estadoB);
    printf("Codigo B: %s\n", codicoB);
    printf("Nome da Cidade B: %s\n", nomeCidadeB);
    printf("Populacao B: %d\n",populacaoB);
    printf("Area B: %.2f\n" , areaB);
    printf("PIB B: %.2f\n", pibB);
    printf("Numero de Pontos Turisticos B: %d\n", ptTurisB);

    return 0;
}
