#include <stdio.h>

int main(int argc, char **argv){
    int i;
    printf("入力数 = %d\n", argc);
    printf("コマンド名 = %s\n",argv[0]);
    
    for(i=1; i<argc; ++i){
        printf("%d個目の引数 = %s\n",i,argv[i]);
    }
    printf("%c\n",argv[0][3]);
    printf("%c %c\n%c %c \n%c %c\n",argv[0][0], argv[1][0], argv[0][1],argv[1][1], argv[0][2], argv[1][2]);
    return 0;
}