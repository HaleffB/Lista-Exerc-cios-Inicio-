#include <stdio.h>
/*
    O custo de um carro novo ao consumidor � a soma do custo de f�brica com a
    porcentagem do distribuidor e dos impostos (aplicados ao custo de f�brica). Supondo que o
    percentual do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para
    ler o custo de f�brica de um carro, calcular e escrever o custo final ao consumidor.
*/
int main(){
    float custofab, custofim;

    printf("\n\tDigite o valor do custo de fabrica do carro: ");
    scanf("%f", &custofab);

    custofim = custofab + (custofab * 0.28) + (custofab * 0.45);

    printf("\n\tO valor do preco final do carro e %.2f\n", custofim);

    return 0;
}
