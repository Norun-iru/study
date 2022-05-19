#include<stdio.h>
#include<string.h>
#include<math.h>
int main(void){
    char bit[100];
    int i,j=0,d,x=0,len;

    printf("2進数を入力:");
    scanf("%s",bit);

    len=strlen(bit);

    for(i= (len - 1);i>=0;i--){

        if(bit[i]=='0')
            d=0;
        else
            d=1;

        x=x+d*pow(2,j);
        j++;
    }
    printf("10進数:%d\n",x);
    return(0);
}