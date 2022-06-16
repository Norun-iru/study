#include <stdio.h>

int main(void){
    FILE *fp;
    fp = fopen("score.txt","r");

    int score[50];
    int max = 0;

    for(int i = 0; i < 50; i++){
        fscanf(fp, "%d", &score[i]);
        if(max < score[i]){
            max = score[i];
        }
    }

    printf("最大値 : %d\n", max);
    


    fclose(fp);

    return 0;
}
