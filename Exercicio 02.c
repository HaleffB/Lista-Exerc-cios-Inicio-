#include<stdio.h>
#include<stdlib.h>
/*
    Escreva um programa que solicite ao usuário um numero e apresente na tela o seu
    antecessor e sucessor.
*/
int main(){
    int numero;

    printf("\n\tDigite um numero inteiro: \n");
    scanf("%d", &numero);

    int antecessor = numero - 1;
    int sucessor = numero + 1;

    printf("\n\tO antecessor de %d e %d\n", numero, antecessor);
    printf("\n\tO sucessor de %d e %d\n", numero, sucessor);

    return 0;
}
