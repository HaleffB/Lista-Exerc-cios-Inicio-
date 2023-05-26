#include<stdio.h>
#include<stdlib.h>
/*
    Crie um programa que realize e mostre na tela o resultado do calculo da área de um
    trapézio, solicitando ao usuário as medidas da base maior, base menor e altura.
*/
int main(){
    float basema, baseme, altura, result;
    printf("\n\tDigite o valor da base menor, maior e altura, em centimetros, nessa ordem: \n");
    scanf("%f%f%f", &baseme, &basema, &altura);

    result = (basema + baseme) / 2 * altura;

    printf("\n\tO valor da area do trapezio e de %.2fCm cubicos\n", result);

    return 0;
}
