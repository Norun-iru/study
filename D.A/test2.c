#include <stdio.h>

int main(void){
    int a, b;
    printf("value=");
    scanf("%d",&a);

    printf("number=");
    scanf("%d",&b);

    int c = a * b;
    printf("%s %d \n %s %d \n %s %d", "input value", a,"input number", b, "total value\n", c);
    printf("input value %d\ninput number %d\ntotal value %d\n", a, b, c);
    
    return 0;
}