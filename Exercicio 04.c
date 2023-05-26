#include<stdio.h>
#define PI 3.14159
/*
    Ler o raio de um circulo e informar a sua área.
*/
int main(){
    float raio;

    printf("\n\tDigite o raio do circulo: ");
    scanf("%f", &raio);

    float area = PI * raio * raio;

    printf("\n\tA area do circulo e: %.2f\n", area);

    return 0;
}
