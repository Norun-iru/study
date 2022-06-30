#include <stdio.h>
#define N 7
int a[N] = {22,5,32,11,60,16,27};
int buff[N/2 + 1];

void msort(int left, int right);
void output(int a[]);

void main(void){
    output(a);
    msort(0, N-1);
    output(a);
}

void msort(int left, int right){
    int center, i, j, k, p;

    if(left < right){
        center = (left + right) / 2;
        msort(left, center);
        msort(center + 1, right);

        p = 0;
        for(i = left; i <= center; i++){
            buff[p++] = a[i];
        }
        j = 0;
        k = left;

        while(i <= right && j < p){
            if(buff[j] <= a[i]){
                a[k++] = buff[j++];
            }else {
                a[k++] = a[i++];
            }

            
        }
        while(j < p){
                a[k++] = buff[j++];
            }
    }
}

void output(int a[]){
    int i;
    for(i = 0; i< N; i++){
        printf("%4d",a[i]);
    }
    printf("\n");
}