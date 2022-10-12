#include <stdio.h>

int calculaPorcent(int, int);

int main(){

    int total, validos, brancos, nulos, porcentV, porcentB, porcentN;

    printf("Qual o numero total de eleitores? ");
    scanf("%d", &total);

    printf("Qual o numero de votos validos? ");
    scanf("%d", &validos);

    printf("Qual o numero de votos brancos? ");
    scanf("%d", &brancos);

    printf("Qual o numero de votos nulos? ");
    scanf("%d", &nulos);

    porcentB = calculaPorcent(brancos, total);
    porcentV = calculaPorcent(validos, total);
    porcentN = calculaPorcent(nulos, total);

    printf("os votos validos representam %d%%, os votos brancos representam %d%% os votos nulos representam %d%%", porcentV, porcentB, porcentN);
}

int calculaPorcent(int x, int y) {
    int porcent = 100*x/y;
    return porcent;
}