#include<stdio.h>
#include<math.h>
/*
    Crie um programa que realize o calculo do IMC (índice de massa corpórea), solicitando
    ao usuário seu peso e altura.
*/
int main(){
    float peso, altura, IMC;

    printf("\n\tDigite seu peso: Kg ");
    scanf("%f", &peso);

    printf("\n\tDigite sua altura: ");
    scanf("%f", &altura);

    IMC = peso / pow(altura, 2);

    printf("\n\tSeu IMC e: %.2f\n", IMC);

    return 0;
}
