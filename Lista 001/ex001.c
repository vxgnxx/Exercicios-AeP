#include <stdio.h> 

int main() {
    int lados[2];
    int area;

    for(int i = 0; i < 2; i++){
        printf("Escreva o tamanho do lado: ");
        scanf("%d", &lados[i]);
    }

    area = lados[0] * lados[1];

    printf("a area do quadrilatero eh %d", area);
}