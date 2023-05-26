#include <stdio.h>
/*
    . Elabore um programa que auxilie o usuário no calculo de juros simples, solicitando: valor
    a ser financiado, taxa de juros por mês e período (em meses) do empréstimo.
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
