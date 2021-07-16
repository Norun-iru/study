#include <stdio.h>
int main(void){
    char moji[5][6] = {"ABCDE", "FGHIJ", "KLMNO", "PQRST", "UVWXY"};
    int i,j;
    for(i=0; i<5; i++){
        for(j=0; j<6; j++){
            printf("%c", moji[j][i]);
        }
        printf("\n");
    }
    return 0;
}