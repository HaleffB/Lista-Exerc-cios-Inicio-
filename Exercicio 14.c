#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
    Construa um programa que, tendo como dados de entrada dois pontos quaisquer no
    plano, P(x1,y1) e P(x2,y2), escreva a distância entre eles. A fórmula que efetua tal calculo
    é:
    𝑑 = √(𝑥2 − 𝑥1)2 + (𝑦2 − 𝑦1)2
*/
int main(){
    float x1, y1, x2, y2, d;

    printf("\n\tDigite as coordenadas x1 e y1: \n");
    scanf("%f%f", &x1, &y1);

    printf("\n\tDigite as coordenadas x2 e y2: \n");
    scanf("%f%f", &x2, &y2);

    d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("\n\tA distancia entre elas e de %.2f\n", d);

    return 0;
}
