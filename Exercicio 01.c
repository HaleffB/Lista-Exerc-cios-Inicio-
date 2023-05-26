#include<stdio.h>
#include<stdlib.h>
/*
    Faça um programa que receba dois números e ao final mostre a soma, subtração,
    multiplicação e a divisão dos números lidos.
*/
int main(){
    float x, y;

    printf("\n\tDigite um valor: \n");
    scanf("%f", &x);

    printf("\n\tDigite outro valor: \n");
    scanf("%f", &y);

    float soma = x + y;
    float subtracao = x - y;
    float multiplicacao = x * y;
    float divisao = x / y;

    printf("\n\tSoma: %.2f\n", soma);
    printf("\n\tSubtracao: %.2f\n", subtracao);
    printf("\n\tMultiplicacao: %.2f\n", multiplicacao);
    printf("\n\tDivisao: %.2f\n", divisao);

    return 0;
}
