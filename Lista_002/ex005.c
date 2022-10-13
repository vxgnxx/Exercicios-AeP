#include <stdio.h>

int main(){
    int x;

    printf("Escreva a idade do nadador: ");
    scanf("%d", &x);

    if(x > 18){
        printf("Adulto");
    } else if(x > 14){
        printf("Juvenil B");
    } else if(x > 11){
        printf("Juvenil A");
    } else if(x > 8){
        printf("Infantil B");
    } else {
        printf("Infantil A");
    }
    
}