#include <stdio.h>

int main(int argc, char **argv){
    int i;
    for(int k = 0; k < 5; ++k){
        for(i=0; i<argc; ++i){
            printf("%c ", argv[i][k]);
        }
        printf("\n");
    }
    

    return 0;
}