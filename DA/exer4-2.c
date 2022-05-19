#include <stdio.h>

int main(void){
    int score[3][5];
    for(int i = 0; i < 3; i++){
        printf("%d番\n",i + 1);
        printf("英語:"); scanf("%d", &score[i][0]);
        printf("数学:"); scanf("%d", &score[i][1]);
        printf("国語:"); scanf("%d", &score[i][2]);
        printf("理科:"); scanf("%d", &score[i][3]);
        printf("社会:"); scanf("%d", &score[i][4]);
    }
    
    printf("     英 数 国 理 社\n");
    for(int k = 0; k < 3; k++){
        printf("%d番 ", k + 1);
        for(int j = 0; j < 5; j++){
            printf("%3.d", score[k][j]);
        }
        printf("\n");
    }
    

    return 0;
}