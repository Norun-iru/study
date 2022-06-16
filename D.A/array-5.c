#include <stdio.h>

int main(void){
    FILE *fp;
    fp = fopen("score.txt","r");

    int score[50];

    for(int i = 0; i < 50; i++){
        fscanf(fp , "%d", &score[i]);
    }

    int c;
    for(int j = 0; j < 10; j++){
        c = 0;
        for(int k = 0; k < 50; k++){
            if(j*10 <= score[k] && score[k] <= j*10+9){
                c++;
            }
        }
        printf("%d - %d : %d\n", j*10, j*10+9, c);
    }
    c = 0;
    for(int k = 0; k < 50; k++){
        if(100 == score[50]){
            c++;
        }
    }
    printf("100 : %d\n", c);

    float avg = 0.0;
    for(int k = 0; k < 50; k++){
        avg = avg + score[k];
    }
    avg = avg / 50.0;
    printf("平均点: %.1f", avg);
    fclose(fp);

    return 0;
}