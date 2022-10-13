#include <stdio.h>

int main(){
    int x[3];

    for(int i = 0; i < 3; i++){
        printf("Escreva um lado: ");
        scanf("%d", &x[i]);
    }

    if (x[0] < (x[1] + x[2])){
        if (x[1] < (x[0] + x[2])){
            if (x[2] < (x[0] + x[1])){
                printf("Podem ser lado de um triangulo");
            }
        }  
    }
}