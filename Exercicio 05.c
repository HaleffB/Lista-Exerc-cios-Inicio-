#include<stdio.h>
#include<stdlib.h>
/*
    aça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e
    escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e
    mês com 30 dias.
*/
int main(){
    int anos, meses, dias;

    printf("\n\tDigite a idade em anos: ");
    scanf("%d", &anos);

    printf("\n\tDigite a idade em meses: ");
    scanf("%d", &meses);

    printf("\n\tDigite a idade em dias: ");
    scanf("%d", &dias);

    int idade_dias = (anos * 365) + (meses * 30) + dias;

    printf("\n\tA idade em dias e: %d\n", idade_dias);

    return 0;
}
