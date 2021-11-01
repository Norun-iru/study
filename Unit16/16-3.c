#include <stdio.h>
int main(void){
    long long int i = 1;

    for(i = 0; i < 40; i = i + 1){
        printf("%lld:%lld\n", i, 1 << i);
    }
    return 0;
}