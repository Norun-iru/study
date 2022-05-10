#include <stdio.h>
int main(void){
    int a[2][2], b[2][2], c[2][2];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 2; k++){
                if(i == 0){
                    printf("a(%d %d) = ", j,k);
                    scanf("%d",&a[j][k]);
                }else{
                    printf("b(%d %d) = ", j,k);
                    scanf("%d",&b[j][k]);
                }
            
            }
        }

    }
    for(int j = 0; j < 2; j++){
        for(int k = 0; k < 2; k++){
            printf("c[%d][%d] = %d\n",j,k,a[j][k] + b[j][k]);
        }
    }
    

    return 0;
}