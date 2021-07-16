#include <stdio.h>
int a(int n){
    if( n == 1 ) return 3;
    else return 2 * a(n - 1) - 1;
}

int main(void){
    int x = 0;
    printf("整数を入力してください:");
    scanf("%d",&x);
    printf("%d",a(x));
    return 0;
}