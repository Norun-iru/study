#include <stdio.h>
float area(float length, float height){
    float area;
    area = length * height / 2.0;
    return area;
}

int main(void){
    float a, b, c;
    printf("底辺の長さ:");
    scanf("%f",&a);
    printf("高さ:");
    scanf("%f",&b);
    printf("三角形の面積:%.1f",area(a,b));
    return 0;
}