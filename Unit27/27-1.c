#include <stdio.h>
int main (void){
    FILE *fp;
    fp = fopen("file.txt","w");

    if(fp == NULL){
        printf("Can not open the file.\n");
        return -1;
    }
    else{
        printf("The file is opened.\n");
    }

    char a[256];
    scanf("%s",a);

    fputs("Hello!\n", fp);
    // fputs("Goodbye!\n", fp);
    fputs(a, fp);
    printf("O.K.\n");
    fclose(fp);
    printf("The file is closed.\n");
    return 0;
}