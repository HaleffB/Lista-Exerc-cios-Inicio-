#include<stdio.h>
#include<stdlib.h>
/*
    Elaborar um programa para determinar o consumo m�dio de um autom�vel sendo
    fornecida a dist�ncia total percorrida pelo autom�vel e o total de combust�vel gasto.
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
