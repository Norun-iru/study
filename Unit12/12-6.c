#include <stdio.h>
int main(void){
    int i = 0;
    char moji[7] = "summer";
    while (moji[i] != '\0'){
        printf("%c", moji[i]);
        i++;
    }
    printf("\n");
    return 0;
}