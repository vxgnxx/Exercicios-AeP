#include <stdio.h>

int main(){
    int custoC, custoF;

    printf("Escreva o custo de fabrica do carro: ");
    scanf("%d", &custoF);

    custoC = custoF;
    custoC += custoF*28/100;
    custoC += custoF*45/100;

    printf("O custo para o consumidor e de %d", custoC);
}