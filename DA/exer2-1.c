#include <stdio.h>
int main(void){
    int a,b;
    printf("  | ");
    for(int i = 1; i < 10; i++){
        printf("%2.d ", i);
    }
    printf("\n");
    for(int i = 1; i < 17; i++){
        printf("- ", i);
    }
    printf("\n");
    for(a = 1; a < 10; a++){
        printf("%d | ",a); 
        for(b = 1; b < 10; b++){
            printf("%2.d ",a * b);
            if(b == 9){
                printf("\n");
            }
        }
    }

    return 0;
}