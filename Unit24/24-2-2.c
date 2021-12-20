#include <stdio.h>
int main(void){
    int *q;
    int a[3][3]  = {{1,2,3},{4,5,6},{7,8,9}};
    int i,j;
    q = &a[0][0];

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
             printf("%d, %p, %d, %p\n",a[i][j], &a[i][j], *q , q++);
        }      
    }

    return 0;
}