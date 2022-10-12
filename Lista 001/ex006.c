#include <stdio.h>

int main() {
    int x;

    printf("digite um valor: ");
    scanf("%d", &x);

    if (x < 10){
        printf("maior que 10");
    } else {
        printf("não é maior que 10");
    }
}