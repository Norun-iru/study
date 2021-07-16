#include <stdio.h>
int main(void){
    char a[] = "summer";
    int i;
    for(i = 6; i >= 0; i--){
        printf("%c",a[i]);
    }
    return 0;
}