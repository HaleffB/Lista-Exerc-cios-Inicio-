#include <stdio.h>
#include <math.h>
/*
    Crie um programa que realize e mostre na tela o resultado do calculo da área de um
    tetraedro, solicitando ao usuário a medida da aresta.
*/
int main(){
    float aresta, area;

    printf("\n\tDigite o valor da aresta: ");
    scanf("%f", &aresta);

    area = sqrt(3) * pow(aresta, 2);

    printf("\n\tO valor da area e de %.2f\n", area);

    return 0;
}
