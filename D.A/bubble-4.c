#include <stdio.h>
#include <stdlib.h>

void output(char (*data)[]){
    printf("%s", *data);
}

int main(void){
    FILE *fp;
    fp = fopen("pref.txt", "r");
    int j =0;

    char data[47][10];
    for(int i = 0; i < 47; i++){
        fgets(data[i], 10, fp);
    }
    

    for(int i = 0; i < 47; i++){
        output(&data[i]);
    }
    

}