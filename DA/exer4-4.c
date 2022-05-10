#include <stdio.h>

int a(int n){
    if(n == 1){
        return 1;
    }else if(n == 2){
        return 2;
    }else{
        return (3*(a(n - 1)) - a(n - 2)) / 2;
    } 
}

int main(void){
    printf("a(10) = %d",a(10));

    return 0;
}