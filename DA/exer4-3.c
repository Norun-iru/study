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
    
    printf("        英 数 国 理 社 平均点\n");
    for(int k = 0; k < 4; k++){
        int sum = 0;
        
        if(k == 3){
            printf("平均点 ");
            for(int a = 0; a < 5; a++){
                int sum2 = 0;
                sum2 = score[0][a] + score[1][a] + score[2][a];
                printf(" %.1f", sum2 / 3.0);
            }
            
        }else{
            printf("%d番    ", k + 1);
            for(int j = 0; j < 5; j++){
                printf(" %3.d", score[k][j]);
                sum = sum + score[k][j];
            }
            printf("  %.1f", sum / 5.0);
        }
        
        
        printf("\n");
    }
    

    return 0;
}