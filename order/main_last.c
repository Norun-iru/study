#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int i = 0;
int x = 0;

int grade_sort(char name[100][32], char school[100][32], int grade[100], double time[100], int day[100]);
int time_order(double time[100], char name[100][32], char school[100][32], int grade[100], int day[100]);
int name_search(double time[100], char name[100][32], char school[100][32], int grade[100], int day[100]);
int data_input(double time[100], char name[100][32], char school[100][32], int grade[100], int day[100]);
int school_list(char name[100][32], char school[100][32], double time[100], int grade[100], int day[100]);
FILE *fp = NULL;
char name[100][32] = {{0}};   //	氏名
char school[100][32] = {{0}}; //	学校
int grade[100];               //	学年
double time[100];             //	記録
int day[100];                 //  日
int menu, end = 0;
int main(void)
{
   fp = fopen("test.csv", "r");
   //	ファイル終端まで1行ずつ変数へ読み込む
   while (fscanf(fp, "%s %s %d %lf %d", name[i], school[i], &grade[i], &time[i], &day[i]) != EOF)
   {
      //	取り出した情報を画面に表示
      // printf("%s %s %d %.2lf %d\n", name[i], school[i], grade[i], time[i], day[i]);
      i++;
   }
   x = i;
   while (1)
   {
      printf("メニュー\n");
      printf("1:データ入力\n");
      printf("2:記録順\n");
      printf("3:学年\n");
      printf("4:選手名\n");
      printf("5:所属校\n");
      printf("6:終了\n");
      printf("実行する処理の番号-->");
      scanf("%d%*c", &menu); //%*c:改行を読み飛ばす

      switch (menu)
      {
      case 1:
         if (x >= 100)
         { //既に100名のデータが存在する時
            printf("データ数が上限に達しています\n\n");
            break;
         }
         //人数を1人分増やす
         data_input(time, name, school, grade, day);
         x++;
         printf("データを入力しました\n\n");
         end = 1;
         break;
      case 2:
         time_order(time, name, school, grade, day);
         break;
      case 3:
         grade_sort(name, school, grade, time, day);
         break;
      case 4:
         name_search(time, name, school, grade, day);
         break;
      case 5:
         school_list(name, school, time, grade, day);
         break;
      case 6:
         end = 1;
         break;
      default:
         printf("入力番号がありません\n\n");
      }
      if (end == 1)
         break;
   }
   return 0;
}

int name_search(double time[100], char name[100][32], char school[100][32], int grade[100], int day[100])
{
   char search[256];
   printf("検索したい学生の名前を入力してください===> ");
   scanf("%s", search);
   for (i = 0; i < 100; i++)
   {
      if (strcmp(search, name[i]) == 0)
      {
         printf("名前:%s  学校:%s  学年:%d年  タイム:%.2lf秒  記録日:%d\n\n", name[i], school[i], grade[i], time[i], day[i]);
      }
   }
   return 0;
}
int time_order(double time[100], char name[100][32], char school[100][32], int grade[100], int day[100])
{
   int i;
   double mem[100];
   double ctime[100];
   for (i = 0; i < 100; i++)
   {
      mem[i] = time[i];
   }
   for (i = 0; i < 100; i++)
   {
      ctime[i] = time[i];
   }
   int j, k;
   double tmp;
   for (j = 0; j <= 100; ++j)
   {
      for (k = j + 1; k <= 100; ++k)
      {
         if (ctime[j] > ctime[k])
         {
            tmp = ctime[j];
            ctime[j] = ctime[k];
            ctime[k] = tmp;
         }
      }
   }
   printf("<タイム順>\n");
   for (j = 0; j < 100; ++j)
   {
      if (ctime[j] > 5 && ctime[j] < 50 && ctime[j] != ctime[j - 1])
      {
         printf("タイム:%.2lf秒\n", ctime[j]);
         for (i = 0; i <= 100; ++i)
         {
            if (ctime[j] == mem[i])
            {
               printf("名前:%s 学校:%s 学年:%d年 記録日:%d\n", name[i], school[i], grade[i], day[i]);
            }
         }
         printf("\n");
      }
   }
   return 0;
}
int grade_sort(char name[100][32], char school[100][32], int grade[100], double time[100], int day[100])
{
   double copytime[100];
   for (int i = 0; i < 100; i++)
   {
      copytime[i] = time[i];
   }

   double temtime = 0;
   for (int i = 0; i < 100; i++)
   {
      for (int m = 0; m < 100; m++)
      {
         if (copytime[m] > copytime[m + 1])
         {
            temtime = copytime[m];
            copytime[m] = copytime[m + 1];
            copytime[m + 1] = temtime;
         }
      }
   }

   for (int i = 0; i < 100; i++)
   {
      if (copytime[i] > 9.58 && !(copytime[i] == 0.00))
      {
         // printf("%.2f\n",copytime[i]);
      }
   }
   int g;
   printf("学年を入力してください\n");
   scanf("%d",&g);
    printf("---------------%d年--------------\n", g);
    for (int i = 0; i < 100; i++)
      {
         for (int m = 0; m < 100; m++)
         {
            if (grade[m] == g && copytime[i] == time[m] && !(copytime[i] == copytime[i + 1]))
            {
               if (time[m] > 9.58)
                  printf("%s %.2lf秒　%s %d\n", name[m], time[m], school[m], day[m]);
            }
         }
      }
   return 0;
}
int school_list(char name[100][32], char school[100][32], double time[100], int grade[100], int day[100])
{
   char search[256];
   printf("検索したい学校名を入力してください===> ");
   scanf("%s", search);
   for (i = 0; i < 100; i++)
   {
      if (strcmp(search, school[i]) == 0)
      {
         printf("名前:%s  学校:%s  学年:%d年  タイム:%.2lf秒  記録日:%d\n\n", name[i], school[i], grade[i], time[i], day[i]);
      }
   }
   return 0;
}
int data_input(double time[100], char name[100][32], char school[100][32], int grade[100], int day[100])
{
   FILE *fp = NULL;
   printf("タイム---->");
   scanf("%lf", &time);
   printf("名前---->");
   scanf("%s", name);
   printf("学校---->");
   scanf("%s", school);
   printf("学年---->");
   scanf("%d", &grade);
   printf("日にち---->");
   scanf("%d", &day);

   fp = fopen("test.csv", "a");

   //	ファイルに指定フォーマットで文字列を生成
   fprintf(fp, "%s %s %d %.2lf %d\n", name, school, grade, time, day);

   return 0;
}