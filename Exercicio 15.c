#include <stdio.h>
/*
    O custo de um carro novo ao consumidor é a soma do custo de fábrica com a
    porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que o
    percentual do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para
    ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor.
*/
int main(){
    float custofab, custofim;

    printf("\n\tDigite o valor do custo de fabrica do carro: ");
    scanf("%f", &custofab);

    custofim = custofab + (custofab * 0.28) + (custofab * 0.45);

    printf("\n\tO valor do preco final do carro e %.2f\n", custofim);

    return 0;
}
