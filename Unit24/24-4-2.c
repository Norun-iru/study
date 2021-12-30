#include <stdio.h>/*別ファイルに作るとき
必要*/
int f(int (*p)[2]){
int i,j,*q;
q = (int *)p;
for(i=0;i<2;i++){
for(j=0;j<3;j++){
printf("*(*(p+%d)+%d)=%d¥t",i,j,
*(*(p+i)+j));
}
printf("¥n");
}
for(i=0;i<6;i++){
printf("*(q+%d)=%d¥t",i,(q+i));
}
return 0;
}