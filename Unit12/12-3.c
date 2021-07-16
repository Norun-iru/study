#include <stdio.h>
int main(void){
    int a[100];
    int i;
    for(i = 0; i < 100; i++){
        a[i] = i + 1;
    }
    for(i = 99; i >= 0; i--){
        printf("%d ", a[i]);
    }
    return 0;
}