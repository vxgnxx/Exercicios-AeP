#include <stdio.h>

int main(){
    int x;

    printf("Escreva um numero: ");
    scanf("%d", &x);

    if(x > 0){
        printf("POSITIVO\n");
    } else if(x < 0){
        printf("NEGATIVO\n");
    } else {
        printf("ZERO\n");
    }

    if (x % 2 == 0){
        printf("PAR\n");
    } else {
        printf("IMPAR\n");
    }
    



}