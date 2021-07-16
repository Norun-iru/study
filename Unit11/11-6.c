#include <stdio.h>
int f(int n){
    if(n == 0) return 0;
    else if(n == 1) return 1;
    else return f(n - 1) + f(n - 2);
}

int main(void){
    int x = 0;
    printf("整数を入力してください:");
    scanf("%d", &x);
    int i;
    for(i = 0; i <= x; i++){
        printf("%d ", f(i));
    }
}