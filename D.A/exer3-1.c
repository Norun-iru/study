#include <stdio.h>
int main(void){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if(a == b && b == c){
        printf("３つの値は等しい");
    }else if(a != b && b != c && a != c){
        printf("３つの値は異なる");
    }else{
        printf("２つの値が正しい");
    }

    return 0;
}