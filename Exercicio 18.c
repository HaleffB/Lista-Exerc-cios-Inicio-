#include <stdio.h>
/*
    . Elabore um programa que auxilie o usu�rio no calculo de juros simples, solicitando: valor
    a ser financiado, taxa de juros por m�s e per�odo (em meses) do empr�stimo.
*/
int main(){
    float capital, taxa, quant_parcelas, mont;

    printf("\n\tDigite seu capital: ");
    scanf("%f", &capital);

    printf("\n\tDigite a taxa de juros: ");
    scanf("%f", &taxa);

    printf("\n\tDigite a quantidade de parcelas: ");
    scanf("%f", &quant_parcelas);

    mont = capital * taxa * quant_parcelas;

    printf("\n\tO valor do montante e %.2f\n", mont);

    return 0;
}
