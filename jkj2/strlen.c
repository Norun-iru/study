#include <stdio.h>

int main(void){
    char s[256];
    scanf("%s",s);

    for(int i = 0; i < 256; i++){
        if(s[i] == '\0'){
            printf("%d", i);
            break;
        }
    }
    return 0;
}