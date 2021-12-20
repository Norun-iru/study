#include <stdio.h>
int mainz(void){
    int i,j,k;
    int a[256];
    scanf("%d", i);
    for(k = 0; i != 0 && i != 1; k++){
        a[k] = i % 2;
        i = i / 2;
    }
    for(int j = 0; j >= 0; j--){
        printf("%d",a[k]);
    }
    return 0;
}