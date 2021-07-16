#include <stdio.h>
void hello( int x ){
    int i;
    for( i=0; i<x; i++ ) printf("Hello");
    printf("\n");
}

int main(void){
    hello(1);
    hello(3);
    hello(5);
    return 0;
}