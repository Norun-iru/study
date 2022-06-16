#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,t;
    int a[100];

    printf("100個の乱数:");
    for(i=0;i<100;i++){
        a[i] = rand() % 100 + 1;
        printf("%d ",a[i]);
    }
    printf("\n\n");

    for(i=1;i<100;i++){
        for(j=i-1;j>=0;j--){
            if(a[j]>a[j+1]){
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
            else{
                break;
            }
        }
    }

    printf("ソート後:");
    for(i=0;i<100;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return(0);
}