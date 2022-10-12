#include <stdio.h>

int main() {
    int x;

    printf("entre com um valor: ");
    scanf("%d", &x);

    if (x<0)
    {
        printf("NEGATIVO");
    } else {
        printf("POSITIVO");
    }
    
}