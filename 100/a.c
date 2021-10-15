#include <stdio.h>
int kiroku(void){
    int i = 1;
    char name[50][50];
    char school[50][50];
    int grade[50][5];
    float time[50][5];
    int day[50][5];

    printf("<記録を入力>\n");
        while(1){
        printf("%d人目:", i);
        scanf("%s %s %d %f %d", &name[i-1], &school[i-1], &grade[i-1], &time[i-1], &day[i-1]);
        if(i == 3){
            break;
        }
        i++;
        }
        int k;
        printf("何人目？");
        scanf("%d", &k);
        printf("%s", school[k-1]);
    return 0;
}
    

