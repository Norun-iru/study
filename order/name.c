#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

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
    printf("\n");

    char p[256];
    printf("名前を入力してください。:");
    scanf("%s", p);

    for(i = 0; i < 100; ++i){
		
        if(strcmp(p,name[i]) == 0){
            printf("名前：%s, 学校：%s, 学年：%d, 記録：%.2lf, 記録日：%d", name[i], school[i], grade[i], time[i], day[i]);
        }
    }
	return 0;
}