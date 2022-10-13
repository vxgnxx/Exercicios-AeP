#include <stdio.h>

int main(){

    int n1, n2, n3, media;

    printf("nota 1: ");
    scanf("%i", &n1);
    printf("nota 2: ");
    scanf("%i", &n2);
    printf("nota 3: ");
    scanf("%i", &n3);

    media = (n1*4+n2*3+n3*3)/10;

    printf("a media é %d", media);
}