#include <stdio.h>


int main() {

    //Carta:1

        int populacao, numeros; //Numero de pontos turisticos/Numero de habitantes da ciade
        int area, pib;  //Numero da area km²
        char codigo, cidade[20];    //Codigo da cidade e nome
        char estado;

        printf("Carta 1:\n");
        printf("Digite a letra do estado:\n");
        scanf("%s", &estado);

        printf("Digite o numero de 1 a 9:\n");
        scanf("%2d", &codigo);

        printf("Digite o nome da cidade:\n");
        scanf("%s", &cidade);

        printf("Digite a populacao da cidade:\n");
        scanf("%d", &populacao);

        printf("Digite a area em km²:\n");
        scanf("%d", &area);

        printf("Digite o pib:\n");
        scanf("%d", &pib);

        printf("Digite o numeros de pontos turisticos:\n");
        scanf("%d", &numeros);

        ////////////////////////////////////////Carta2

        printf("Carta 2:\n");
        printf("Digite a letra do Estado:\n");
        scanf("%s", &estado);

        printf("Digite o numero de 1 a 9:\n");
        scanf("%2d", &codigo);

        printf("Digite o nome da cidade:\n");
        scanf("%s", &cidade);

        printf("Digite a populacao da cidade:\n");
        scanf("%d", &populacao);

        printf("Digite a area em km²:\n");
        scanf("%d", &area);

        printf("Digite o pib:\n");
        scanf("%d", &pib);

        printf("Digite o numero de pontos turisticos:\n");
        scanf("%d", &numeros);

        return 0;

}