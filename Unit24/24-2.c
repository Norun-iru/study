#include <stdio.h>
int main(void){
    int a[3] = { 1, 2, 3};
    int b[3][3]  = {{1,2,3},{4,5,6},{7,8,9}};
    int *p;
    int *q;
    p = a;
    q = &b[0][0];
    int i,j;

    printf("a: ");
    for(int k = 0; k < 3; k++){
        printf("%d", a[k]);
    }

    printf(", &a: %p, p: %p, &p: %p, ",&a,p,&p);

    printf("*p: ");
    for(int k = 0; k < 3; k++){
        printf("%d", *p + k);
    }

    printf("\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
             printf("%d, %p, %d, %p\n",b[i][j], &b[i][j], *q++ , q);
        }      
    }
        
    

    return 0;
}