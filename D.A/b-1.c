#include <stdio.h>
#define NUM 5 //与えられたデータの個数
#define MAX 6 //(与えられたデータの最大値) + 1

void BinSort(int data[]){
    int i,j,k=0;
    int bin[MAX]; //0, 1, 2, ... , MAX -1の番号がつけられたビン（バケツ）

    for(i = 0;i < MAX; i++){
        bin[i]=0; //初期値設定
    } 
    for(i = 0;i < NUM; i++){
        bin[data[i]]++; //各データの値を添字とする配列要素の値をインクリメント
    }

    /*[問1]次の2重for文において、iの値が0からMAX-1まで変わる時、
        data配列の各要素がどの様な値となっているか具体的に確かめ、
        その確認んした内容をClassroomにPDFで提出しなさい*/

    for(i = 0; i < MAX; i++){
        for(j = bin[i]; j > 0; j--){
            data[k++]=i;
            
        }
    }
    for(i = 0; i < 5; i++){
        printf("%d",data[i]);
    }
    printf("\n");
}

int main(){
    int i;
    int data[NUM] = {3,5,1,3,1}; //ソートするデータ

    printf("ソート前:\n");
    for(i = 0; i < NUM; i++){
        printf("%d ",data[i]); //ソート前のデータ出力
    }
    printf("\n");
    BinSort(data);
    printf("ソート後:\n");
    for(i = 0;i < NUM; i++){
        printf("%d ",data[i]); //ソート後のデータ出力
    }
    printf("\n");
    return(0);
}