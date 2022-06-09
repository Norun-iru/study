#include <stdio.h>
#define SIZE 10

void output(int data[]){
    int i;
    for(i = 0; i < SIZE; i++){
        printf("%d", data[i]);
    }
    printf("\n");
}

int main(void){
    int i,j,tmp;
    int data[SIZE] = {9,3,5,4,1,7,2,6,0,8};
    output(data);

    for(i = 0; i < SIZE; i++){
        for(j = SIZE - 1; j > i; j--){
            if(data[j] < data[j - 1]){
                tmp = data[j];
                data[j] = data[j - 1];
                data[j - 1] = tmp;
            }
            output(data);
        }
        
    }
    output(data);
    return 0;
}