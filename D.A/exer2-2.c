#include <stdio.h>
int main(void){
    int n;
    int k = 0;
    scanf("%d", &n);

    for(int i = n; i > 0; i--){
        if(n %  i == 0){
            k++;
        }
    }
    printf("%d",k);

    return 0;
}