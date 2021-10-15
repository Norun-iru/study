#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE * fp = NULL;
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

	fclose(fp);

    while(1){
        int k = 0;
        printf("何人目ですか？(-1を入力すると終了)\n");
        scanf("%d", &k);
        if(k == -1){
            break;
        }
        printf("名前:%s, 所属校:%s, 学年:%d年, 記録:%.2lf秒, 記録日:%d日\n", name[k-1], school[k-1], grade[k-1], time[k-1], day[k-1]);
    }
    
}