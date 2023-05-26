#include<stdio.h>
#include<stdlib.h>
/*
    Elaborar um programa para determinar o consumo médio de um automóvel sendo
    fornecida a distância total percorrida pelo automóvel e o total de combustível gasto.
*/
int main(){
    float dist, comb;

    printf("\n\tDigite a distancia total percorrida: \n");
    scanf("%f", &dist);

    printf("\n\tDigite o combustivel total gasto: \n");
    scanf("%f", &comb);

    float media = dist / comb;

    printf("\n\tA media de combustivel gasta foi %f", media);

    return 0;
}
