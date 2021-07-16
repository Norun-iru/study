#include <stdio.h>
void number(int x, int y, int z){
    if(x <= y && x <= z){
        if(y <= z){
            printf("%d %d %d", x, y, z);
        }else{
            printf("%d %d %d", x, z, y);
        }
    }else if(y <= x && y <= z){
        if(x <= z){
            printf("%d %d %d", y, x, z);
        }else{
            printf("%d %d %d", y, z, x);
        }
    }else{
        if(x <= y){
            printf("%d %d %d", z, x, y);
        }else{
            printf("%d %d %d", z, y, x);
        }
    }
}

int main(void){
    int a, b, c;
    printf("三つの整数を入力してください。\n");
    printf("整数１:"); scanf("%d", &a);
    printf("整数２:"); scanf("%d", &b);
    printf("整数３:"); scanf("%d", &c);
    number(a, b, c);
    return 0;
}