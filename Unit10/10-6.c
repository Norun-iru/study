#include <stdio.h>
int sosu(int x){
    int i;
    for(i = 2; i <= 1000; i++){
        if(x % i == 0 && x != i){
            return 0;
        }
    }
    return 1;
}

int main(void){
    int k;
    for(k = 2; k <= 1000; k++){
        if(sosu(k) == 1){
            printf("%d ", k);
        }
        
    }
    
}