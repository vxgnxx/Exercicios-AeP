#include <stdio.h>

int main(){
    int x;

    printf("Escreva um numero: ");
    scanf("%d", &x);

    if(x > 0){
        printf("POSITIVO");
    } else if(x < 0){
        printf("NEGATIVO");
    } else {
        printf("ZERO");
    }
    
}