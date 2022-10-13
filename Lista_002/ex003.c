#include <stdio.h>

int main(){
    int nota;

    printf("Escreva a nota: ");
    scanf("%d", &nota);

    if(nota > 9){
        printf("A");
    } else if(nota > 7){
        printf("B");
    } else if(nota > 5){
        printf("C");
    } else {
        printf("D");
    }
    
}