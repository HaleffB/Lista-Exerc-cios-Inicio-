#include<stdio.h>
#include<stdlib.h>
/*
    Faça um programa que leia 3 notas e calcule a média final deste aluno. Considerar que
    a média é ponderada e que o peso das notas é: 2, 3 e 5, respectivamente.
*/
int main(){
    float nota01, nota02, nota03, media;

    printf("\n\tDigite a primeira nota: ");
    scanf("%f", &nota01);

    printf("\n\tDigite a segunda nota: ");
    scanf("%f", &nota02);

    printf("\n\tDigite a terceira nota: ");
    scanf("%f", &nota03);

    media = (nota01*2 + nota02*3 + nota03*5) / 10;

    printf("\n\tA sua media considerando os pesos das notas e %.2f\n", media);

    return 0;
}
