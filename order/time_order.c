#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE * fp = NULL;
    int     number[100];
	char	name[100][32] = { {0} };	//	氏名
	char	school[100][32] = { {0} };			//	学校
	int     grade[100];			//	学年
	double	time[100];			//	記録
    int     day[100];           //  日

    int i = 0;

	//	読み込みモードでファイルを開く
	fp = fopen("test.csv","r");

	//	ファイル終端まで1行ずつ変数へ読み込む
	while (fscanf(fp, "%s %s %d %lf %d", name[i], school[i], &grade[i], &time[i], &day[i]) != EOF)
	{
		//	取り出した情報を画面に表示
		printf("%s %s %d %.2lf %d\n", name[i], school[i], grade[i], time[i], day[i]);
        i++;
	}
    printf("\n");

    double mem[100];
    for(i = 0; i < 100; ++i){
        mem[i] = time[i];
    }
	int j,k;
    double tmp;
    for(j=0; j <= 100; ++j){
        for(k = j + 1; k <= 100; ++k){
            if(time[j] > time[k]){
                tmp = time[j];
                time[j] = time[k];
                time[k] = tmp;
            }
        }
    }
    printf("<タイム順>\n");
    for(j=0; j<100; ++j){
        if(time[j] > 5  && time[j] < 50 && time[j] != time[j-1]){
            printf("タイム:%.2lf秒\n", time[j]);
                for(i=0; i <= 100; ++i){
                    if(time[j] == mem[i]){
                    printf("名前:%s 学校:%s 学年:%d年 記録日:%d\n",name[i],school[i],grade[i],day[i]);

                }
            }
            printf("\n");
        }



    }
    fclose(fp);
    return 0;
}
