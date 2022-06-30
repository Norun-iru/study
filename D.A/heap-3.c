#include <stdio.h>
#include <stdlib.h>
void shiftdown(int, int, int *);
void exch(int *, int *);

void main(void){
    int heap[5001];
    int i, n, m;
    FILE *fp1, *fp2;
    fp1 = fopen("data.txt","r");
    fp2 = fopen("result.txt","w");

    n = 1;
    while(n <= 5000){
        fscanf(fp1,"%d",&heap[n]);
        n++;
    } 
    n--;

    for(i = n/2; i >= 1; i--){
        shiftdown(i, n, heap);
    }

    m = n;
    while(n > 1){
        exch(&heap[1],&heap[n]);
        n--;
        shiftdown(1,n,heap);
    }

    for(i = 1; i <= m; i++){
        fprintf(fp2,"%d: %d\n",i,heap[i]);
    }
    

    fclose(fp1);
    fclose(fp2);
}

void shiftdown(int p, int n, int heap[]){
    int s;
    s = 2 * p;
    while(s <= n){
        if(s < n && heap[s + 1] > heap[s]){
            s++;
        }
        if(heap[p] >= heap[s]){
            break;
        }
        exch(&heap[p], &heap[s]);
        p = s; s = 2 * p;
    }
}

void exch(int *a, int *b){
    int w;
    w = *a; *a = *b; *b = w;
}