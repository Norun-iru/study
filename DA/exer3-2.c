#include <stdio.h>
int main(void){
    int a;
    scanf("%d",&a);

    for(int i = a; i > 0; i--){
        printf("*");
        if((i - 1) % 100 == 0){
            printf("\n");
        }else if((i - 1) % 10 == 0){
            printf(" ");
        }
    }

    return 0;
}
