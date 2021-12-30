#include <stdio.h>
int a_num(int *n1, int *n2, int *n3){
    *n1 = *n1 + *n2 + *n3;
    *n2 = 0; *n3 = 0;
    printf("%d", *n1);
    return 0;
}

int main(void){
    int a,b,c;
    scanf("%d,%d,%d",&a,&b,&c);
    a_num(&a,&b,&c);
    return 0;
}