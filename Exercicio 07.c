#include<stdio.h>
#include<stdlib.h>
/*
    Elaborar um programa que efetue a convers�o de um valor em real (R$) para d�lar
    (US$). Solicite ao usu�rio o valor em reais e a cota��o atual do d�lar
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
