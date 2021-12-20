#include <stdio.h>
#include <string.h>

typedef struct PLC { /*構造体型の宣言*/
    char name[100];
    int i;
    double d;
}PL;

int show_s1(PL s, char *c){
    printf("(%s) i:%d, d:%f\n", c, s.i, s.d);
    return 0;
}

int show_s2(PL *pS, char *c){
    printf("(%s) i:%d, d:%f\n", c, pS -> i, pS -> d);
    return 0;
}



int main(void){
    PL pl1, pl2;
    PL pl3 = {"No3", 20, 12.5}; /*初期化*/
    PL *pt1;
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
    pt1 = &pl2;
    printf("(pl1) %s %d %f\n",(*pt1).name, (*pt1).i, (*pt1).d);
    printf("(pl1) %s %d %f\n",pt1 -> name, pt1 -> i, pt1 -> d);
    show_s1(pl1,"No1");
    show_s2(&pl2, "No2");
    return 0;
}


