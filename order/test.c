#include <stdio.h>

#define LineMax 100
int main() {
FILE * fp;
char Lines[LineMax][256];
unsigned int i;

fp = fopen("test.csv","r");
if( fp == NULL ){
printf( "ファイルオープンエラー\n" );
return -1;
}

for(i=0; i<LineMax && fgets( Lines[i] , sizeof(Lines[i]) , fp ) != NULL;i++){
    printf( "%s" , Lines[i] );
}

fclose( fp );

return 0;
}