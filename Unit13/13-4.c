#include <stdio.h>
int main(void){
    int i;
    char a[4][7] = {"first", "second", "third", "fourth"};
    for(i=0; i<4; i++){
        printf("%s\n", a[i]);
    }
    return 0;
}