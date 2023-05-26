#include<stdio.h>
#include <math.h>
/*
    Escreva um programa que leia três números inteiros e positivos (A, B, C) e calcule a
seguinte expressão:
𝐷 = 𝑅 + 𝑆
 2
ONDE:
𝑅 = (𝐴 + 𝐵)
2
𝑆 = (𝐵 + 𝐶)
2
*/
int main(){
    float a, b, c, d;

    printf("\n\tDigite o valor de A: ");
    scanf("%f", &a);

    printf("\n\tDigite o valor de B: ");
    scanf("%f", &b);

    printf("\n\tDigite o valor de C: ");
    scanf("%f", &c);

    d = (pow((a + b), 2) + pow((b + c), 2)) / 2;

    printf("\n\tO valor de D e %.2f\n", d);

    return 0;
}
