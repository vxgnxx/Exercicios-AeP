#include <stdio.h>

int main () {
    int anos, meses, dias;

    printf("Quantos anos voce tem? ");
    scanf("%i", &anos);
    printf("Quantos meses voce tem? ");
    scanf("%i", &meses);
    printf("Quantos dias voce tem? ");
    scanf("%i", &dias);
    
    dias += anos * 365;
    dias += meses * 30;

    printf("Sua idade em dias e %d\n", dias);
}