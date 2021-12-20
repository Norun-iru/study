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

int clear(PL *pC){
    strcpy((*pC).name, "X");
    (*pC).i = 1;
    (*pC).d = 100.0;
}

int swap_st(PL *pC, PL *pD){
    PL x;
    x = *pC;
    *pC = *pD;
    *pD = x;
}



int main(void){
    PL a,b;
    strcpy(a.name, "test");
    a.i = 5; a.d = 3.3;
    strcpy(b.name, "abc");
    b.i = 10; b.d = 24.5;
    printf("a = %s,%d,%f\n",a.name,a.i,a.d);
    printf("b = %s,%d,%f\n",b.name,b.i,b.d);
    swap_st(&a,&b);
    printf("a = %s,%d,%f\n",a.name,a.i,a.d);
    printf("b = %s,%d,%f\n",b.name,b.i,b.d);
}
