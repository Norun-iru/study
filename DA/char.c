#include<stdio.h>
#include<limits.h>

int main(void){

    int i;
    char t,bt[100]; 
    printf("1文字入力してください\n");
    scanf("%c",&t); 
    for(i=0;i<CHAR_BIT;i++){ 
        if(t & 0x01)

            bt[i]='1'; 
        else
            bt[i]='0'; 
        t = t >> 1;

    }
    for(i=CHAR_BIT -1;i>=0;i--) 
        putchar(bt[i]); 


    printf("\n");
    return(0);
}