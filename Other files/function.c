#include <stdio.h>

void ishida(int);

int main(void){
    int num;
    scanf("%d",&num);
    ishida(num);
    return 0;
}

void ishida(int num){
    if(num == 1){
        printf("石田一成");
    }else if(num == 2){
        printf("石田二成");
    }else if(num == 3){
        printf("石田三成");
    }else{
        printf("石井一成");
    }
}