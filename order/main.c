#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int i,j,k,l; 

// タイム順に並べる
int time_order(double time[100], char name[100][32], char school[100][32], int grade[100], int day[100]){

	double mem[100];
    for(i = 0; i < 100; ++i){
        mem[i] = time[i];
    }
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
                    printf("名前:%s 学校:%s 学年:%d年 記録日:%d日\n",name[i],school[i],grade[i],day[i]);
                }
            }
            printf("\n");
        }
        
    }

	return 0;
}

// 学年で分けてタイム順に並べる
int time_order_grade(double time[100], char name[100][32], char school[100][32], int grade[100], int day[100]){
	double mem[100];
    for(i = 0; i < 100; ++i){
        mem[i] = time[i];
    }

    
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
    
    for(l=1; l<4; l++){

        printf("-%d年-\n", l);

        for(j=0; j<100; ++j){
            if(time[j] > 5  && time[j] < 50 && time[j] != time[j-1]){

                for(i=0; i <= 100; ++i){
                    if(time[j] == mem[i] && grade[i] == l){
                        printf("タイム:%.2lf秒\n", time[j]);
                        printf("名前:%s 学校:%s 学年:%d年 記録日:%d日\n",name[i],school[i],grade[i],day[i]);
                        printf("\n");
                    }
                }

            }
        }

    }
	return 0;
}

// 名前で該当者を検索
int name_search(double time[100], char name[100][32], char school[100][32], int grade[100], int day[100]){
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

//　学校名で該当者を検索
int school_search(double time[100], char name[100][32], char school[100][32], int grade[100], int day[100]){
	char p[256];
	printf("学校名を入力してください:");
	scanf("%s",p);

	for(i = 0; i< 100; ++i){
		if(strcmp(p,school[i]) == 0){
			printf("名前：%s, 学校：%s, 学年：%d, 記録：%.2lf, 記録日：%d\n", name[i], school[i], grade[i], time[i], day[i]);
		}
	}
	return 0;
}

// main関数
int main(void)
{
	//csvファイルから読み込み
		FILE * fp = NULL;
	char	name[100][32] = { {0} };	//	氏名
	char	school[100][32] = { {0} };			//	学校
	int     grade[100];			//	学年
	double	time[100];			//	記録
    int     day[100];           //  日  

    i = 0;

	//	読み込みモードでファイルを開く
	fp = fopen("test.csv","r");

	//	ファイル終端まで1行ずつ変数へ読み込む
	while (fscanf(fp, "%s %s %d %lf %d", name[i], school[i], &grade[i], &time[i], &day[i]) != EOF)
	{
		//	取り出した情報を画面に表示
		printf("%s %s %d %.2lf %d\n", name[i], school[i], grade[i], time[i], day[i]);
        i++;
	}

	// 機能選択
	int a;
	printf("1:タイム順 2:学年に分けてタイム順 3:名前で検索 4:学校で検索\n");
	scanf("%d",&a);
	if(a == 1){
		time_order( time,name,school,grade,day);
	}else if(a == 2){
		time_order_grade(time,name,school,grade,day);
	}else if(a == 3){
		name_search(time,name,school,grade,day);
	}else if(a == 4){
		school_search(time,name,school,grade,day);
	}
	


	return 0;
}