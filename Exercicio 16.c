#include <stdio.h>
/*
    Crie um programa que realize e mostre na tela o resultado do calculo da área de um
    triangulo, solicitando ao usuário as medidas da base e altura.
*/
int main(){
    float base, altura, area;

    printf("\n\tDigite a medida da base e a altura do triangulo nessa ordem\n");
    scanf("%f%f", &base, &altura);

    area = base * altura / 2;

    printf("\n\tO valor da area do triangulo e de %.2f\n", area);

    return 0;
}
