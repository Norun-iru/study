#include <stdio.h>
int main(void){
  int month;
  printf("月を入力してください。");
  scanf("%d", &month);
  switch (month){
    case 1: printf("１月は３１日です。"); break;
    case 2: printf("２月は２８日です。"); break;
    case 3: printf("３月は３１日です。"); break;
    case 4: printf("４月は３０日です。"); break;
    case 5: printf("５月は３１日です。"); break;
    case 6: printf("６月は３０日です。"); break;
    case 7: printf("７月は３１日です。"); break;
    case 8: printf("８月は３１日です。"); break;
    case 9: printf("９月は３０日です。"); break;
    case 10: printf("１０月は３１日です。"); break;
    case 11: printf("１１月は３０日です。"); break;
    case 12: printf("１２月は３１日です。"); break;
    default: printf("other number"); break;
  }
  return 0;
}
