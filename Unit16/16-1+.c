#include <stdio.h>
int main(void){
    int high, low, chn;
    printf("最高血圧:");
    scanf("%d", &high);
    printf("最低血圧:");
    scanf("%d", &low);

    if(high < low){
        chn = high;
        high = low;
        low = chn;
    }

    if(high > 180 || low > 110){
        printf("Ⅲ度高血圧");
    }else if(high <= 180 && low <= 110){
        if(high <= 140 && low <= 90){
            printf("正常または高値血圧");
            return 0;
        }
        printf("Ⅰ度またはⅡ度高血圧");
    }
    return 0;
}