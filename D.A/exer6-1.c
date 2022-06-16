#include<stdio.h>

int count_bits(unsigned int x){
    int count = 0;
    while(x){ 
        if(x & 1U) count++;
        x >>= 1;
    }

    return(count);
}

int int_bits(void){
    return(count_bits(~0U));
}

void print_bits(unsigned int x){
    int i;
    for(i = int_bits()-1; i >= 0; i--){
    if((x >> i) & 1U){
    putchar('1');} 
    else{
    putchar('0');}
    }
}

int main(void){
    unsigned int na, nb;

    printf("非負の整数を２つ入力してください。\n");
    printf("整数 A : "); scanf("%u",&na);
    printf("整数 B : "); scanf("%u",&nb);

    printf("A = "); print_bits(na); printf("\n");
    printf("B = "); print_bits(nb); printf("\n");

    printf("A & B = "); print_bits(na & nb); printf("\n");
    printf("A | B = "); print_bits(na | nb); printf("\n");
    printf("A ^ B = "); print_bits(na ^ nb); printf("\n");
    printf("~A = "); print_bits(~na); printf("\n");
    printf("~B = "); print_bits(~nb); printf("\n");
    return(0);
}