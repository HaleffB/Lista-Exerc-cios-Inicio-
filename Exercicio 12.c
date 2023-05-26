#include<stdio.h>
#include<stdlib.h>
/*
    Crie um programa que solicite ao usuário a digitação de três notas, ao fim do programa
    apresentar a média das mesmas.
*/
int main(){
    float nota01, nota02, nota03, media;

    printf("\n\tDigite a primeira nota: ");
    scanf("%f", &nota01);

    printf("\n\tDigite a segunda nota: ");
    scanf("%f", &nota02);

    printf("\n\tDigite a terceira nota: ");
    scanf("%f", &nota03);

    media = (nota01 + nota02 + nota03) / 3;

    printf("\n\tA sua media e %.2f\n", media);

    return 0;
}
