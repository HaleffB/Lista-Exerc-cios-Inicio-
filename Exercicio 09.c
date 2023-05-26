#include<stdio.h>
#include<stdlib.h>
/*
    Escreva um algoritmo para ler o número total de eleitores de um município, o número de
    votos brancos, nulos e válidos. Calcular e escrever o percentual que cada um representa
    em relação ao total de eleitores.
*/
int main(){
    float total_eleitores, vt_brancos, vt_nulos, vt_validos;

    printf("\n\tDigite a quatidade de votos validos, brancos e nulos: \n");
    scanf("%f%f%f", &vt_validos, &vt_brancos, &vt_nulos);

    total_eleitores = vt_validos + vt_brancos + vt_nulos;

    printf("\n\tA porcentagem de votos brancos e %.2f\n", (vt_brancos * 100 / total_eleitores));
    printf("\n\tA porcentagem de votos nulos e %.2f\n", (vt_nulos * 100 / total_eleitores));
    printf("\n\tA porcentagem de votos validos e %.2f\n", (vt_validos * 100 / total_eleitores));

    return 0;
}
