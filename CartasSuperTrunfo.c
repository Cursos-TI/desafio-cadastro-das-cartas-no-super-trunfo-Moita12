#include <stdio.h>

int main(){
    char nome1[50], nome2[50];
    int população1, população2, tur1, tur2;
    float area1, area2, pib1, pib2;
    char estado1[2], estado2[2];
    char codigo1[5], codigo2[5];
    printf(" \n ·.★·.·´¯`·.·★ 🆂🆄🅿🅴🆁 🆃🆁🆄🅽🅵🅾! ★·.·´¯`·.·★.· \n");


    printf("Digite o nome da 1° cidade: \n");
    scanf("%s", &nome1);

        printf("Digite a população da 1° cidade: \n");
    scanf("%d", &população1);
    
            printf("Digite a área da 1° cidade em km²: \n");
    scanf("%f", &area1);

            printf("Digite o pib da 1° cidade: \n");
    scanf("%f", &pib1);

            printf("Digite o número de pontos turisticos da 1° cidade: \n");
    scanf("%d", &tur1);
    
            printf("Digite o código da 1° carta: (A letra do estado seguido de um numero de 1 a 4) \n");
    scanf("%s", &codigo1);

            printf("Digite Uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf("%s", &estado1);

    printf("Carta Número 1 registrada com sucesso: \n");

    printf("\nNome da cidade: %s ", nome1 );
    printf("\nNúmero de população: %d ", população1 );
    printf("\nÁrea em km²: %2f ", area1 );
    printf("\nPib: %2f ", pib1 );
    printf("\nNúmero de pontos turisticos: %d ", tur1 );
    printf("\ncódigo da carta: %s ", codigo1 );
    printf("\nLetra do estado: %s \n", estado1 );

        printf("\nDigite o nome da 2° cidade: \n");
    scanf("%s", &nome2);

        printf("Digite a população da 2° cidade: \n");
    scanf("%d", &população2);
    
            printf("Digite a área da 2° cidade em km²: \n");
    scanf("%f", &area2);

            printf("Digite o pib da 2° cidade: \n");
    scanf("%f", &pib2);

                printf("Digite o número de pontos turisticos da 2° cidade: \n");
    scanf("%d", &tur2);
    
            printf("Digite o código da 2° carta: (A letra do estado seguido de um numero de 1 a 4) \n");
    scanf("%s", &codigo2);

            printf("Digite Uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf("%s", &estado2);

    printf("Carta Número 2 registrada com sucesso: \n");

    printf("\nNome da cidade: %s ", nome2 );
    printf("\nNúmero de população: %d ", população2 );
    printf("\nÁrea em km²: %2f ", area2 );
    printf("\nPib: %2f ", pib2 );
    printf("\nNúmero de pontos turisticos: %d ", tur2 );
    printf("\ncódigo da carta: %s ", codigo2 );
    printf("\nLetra do estado: %s ", estado2 );
    return 0;
}
