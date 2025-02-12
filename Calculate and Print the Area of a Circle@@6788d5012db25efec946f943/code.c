#include<stdio.h>

int main(){
    float pi= 3.14,area , radius;
    scanf("%f%f",&area,&radius);
    area= pi*radius*radius;
    printf("the area of circle:%f",area);
    return 0;
}