#include<stdio.h>
#include<stdlib.h>
/*
    Elaborar um programa que efetue a conversão de um valor em real (R$) para dólar
    (US$). Solicite ao usuário o valor em reais e a cotação atual do dólar
*/
int main(){
    float valor_real, cotacao_dolar, valor_dolar;

    printf("\n\tDigite o valor em rais: R$");
    scanf("%f", &valor_real);

    printf("\n\tDigite a cotacao atual do dolar: ");
    scanf("%f", &cotacao_dolar);

    valor_dolar = valor_real / cotacao_dolar;

    printf("\n\tO valor em dolar e: US$ %.2f\n", valor_dolar);

    return 0;
}
