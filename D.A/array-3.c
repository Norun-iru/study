#include <stdio.h>

int main(void){
    int n = 0;
    int d;
    printf("読み込みたいデータ数:");
    scanf("%d",&n);
    int min = 0;
    for(int i = 0; i < n; i++ ){
        printf("%d人目のデータ:",i + 1);
        scanf("%d",&d);
        if(i == 0){
            min = d;
        }else{
            if(min > d){
                min = d;
            }
        }
        
        
        printf("\n");
    }
    printf("最小値:%d", min);

    return 0;
}