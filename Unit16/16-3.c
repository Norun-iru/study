#include <stdio.h>
int main(void){
    short int i = 1;

    for(i = 0; i < 40; i = i + 1){
        printf("%d:%hd\n", i, 1 << i);
    }
    return 0;
}