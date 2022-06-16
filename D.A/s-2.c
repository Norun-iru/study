#include<stdio.h>

int main(void){
    int i,j,t;
    int a[6]={7,3,5,9,1,6};

    for(i=0;i<6;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    for(i=1;i<6;i++){
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
        for(t=0;t<6;t++){
            printf("%d ",a[t]);
        }
        printf("\n");
    }

    for(i=0;i<6;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return(0);
}