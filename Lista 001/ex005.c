#include <stdio.h>

int main() {
    int media, nota1, nota2, nota3;

    printf("Escreva a nota 1: ");
    scanf("%i", &nota1);
    printf("Escreva a nota 2: ");
    scanf("%i", &nota2);
    printf("Escreva a nota 3: ");
    scanf("%i", &nota3);

    media = (nota1*2+nota2*3+nota3*5)/10;

    printf("a media e %d", media);
}