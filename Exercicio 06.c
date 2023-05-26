#include<stdio.h>
#include<stdlib.h>
/*
    Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit.
    A fórmula de conversão é F=(9*C+160)/5.
*/
int main(){
    float temp_celsius, temp_fahre;

    printf("\n\tDigite uma termperatura: ");
    scanf("%f", &temp_celsius);

    temp_fahre = ( 9 * temp_celsius + 160) / 5;

    printf("\n\tA temperatura em graus Fahrenheit e: %.2f\n", temp_fahre);

    return 0;
}
