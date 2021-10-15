#include <stdio.h>
int main(void){
    int i, k;
    scanf("%d",&k);

    for(i=31; i>=0; --i){
        printf("%d", (k >> i) & 1);
    }
    printf("\n");
    return 0;
}