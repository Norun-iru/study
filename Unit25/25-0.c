#include <stdio.h>
#include <string.h>

struct PLC { /*構造体型の宣言*/
    char name[100];
    int i;
    double d;
};

int main(void){
    struct PLC pl1, pl2;
    struct PLC pl3 = {"No3", 20, 12.5}; /*初期化*/
    strcpy(pl1.name, "No1"); /*文字列の代入*/
    pl1.i = 5; pl1.d = 3.3; /*値の代入*/
    strcpy(&pl2.name[0], "No2"); /* &(pl2.name[0]) */
    pl2.i = 25; pl2.d = 42.1;
    printf("(pl1) %s %d %f\n", pl1.name, pl1.i, pl1.d);
    printf("(pl2) %s %d %f\n", pl2.name, pl2.i, pl2.d);
    printf("(pl3) %s %d %f\n", pl3.name, pl3.i, pl3.d);
    printf("(pl3) name\n");
    scanf("%s", &pl3.name);
    printf("(pl3) i\n");
    scanf("%d", &pl3.i);
    printf("(pl3) d\n");
    scanf("%lf", &pl3.d);
    printf("(pl3) %s %d %f\n", pl3.name, pl3.i, pl3.d);
    pl2 = pl1; /*構造体の代入*/
    printf("(pl2) %s %d %f\n", pl2.name, pl2.i, pl2.d);
    return 0;
}