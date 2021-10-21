#include <stdio.h>
#include <string.h>

int main(void){
    char s[20],t[20],u[40];
    printf("１つ目の文字列を入力してください\n");
    scanf("%s",s);
    printf("２つ目の文字列を入力してください\n");
    scanf("%s",t);

    strcat(s,t);
    int i;
    for(i = 0; i < 20; i++){
        u[i] = s[i];
    }

    printf("%s",u);

    return 0;
}