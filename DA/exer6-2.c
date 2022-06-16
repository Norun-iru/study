#include<stdio.h>

int count_bits(unsigned int x){
    int count=0;
    while(x){
    if(x & 1U) count++;
        x>>=1;
    }
    return(count);
}

int int_bits(void){
    return(count_bits(~0U));
}

void print_bits(unsigned int x){
    int i;
    for(i=int_bits()-1; i>=0; i--){
        if((x>>i) & 1U){
            putchar('1');}
        else{
            putchar('0');}
    }
}


int main(void){

    unsigned int nx, no;
    printf("非負の整数を入力してください。: ");
    scanf("%u",&nx);

    printf("シフトする数を入力してください。: ");
    scanf("%u",&no);
    printf("整数 = "); print_bits(nx); printf("\n");
    printf("左にシフトした値 = "); print_bits(nx << no); printf("\n");
    printf("右にシフトした値 = "); print_bits(nx >> no); printf("\n");

    return(0);
}