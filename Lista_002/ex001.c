#include <stdio.h>

int main(){
    int x[2];

    for(int i = 0; i < 2; i++){
        printf("Escreva um numero: ");
        scanf("%d", &x[i]);
    }

    if (x[1] > x[0]){
        printf("%d", x[1]);
    } else {
        printf("%d", x[0]);
    }
}