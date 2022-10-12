#include <stdio.h>

int main(){

    int x[2];

    for(int i = 0; i < 2; i++){
        printf("digite um valor: ");
        scanf("%d", &x);
    }

    if (x[0] > x[1]){
        printf("%d, %d", x[1], x[0]);
    } else {
        printf("%d, %d", x[0], x[1]);
    }
    
    

}
