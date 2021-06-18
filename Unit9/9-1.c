#include <stdio.h>
int main(void){
    int n = 1;
    while ( n < 1000 ){
        n *= 2;
    }
    printf("%d\n",n);
    return 0;
}