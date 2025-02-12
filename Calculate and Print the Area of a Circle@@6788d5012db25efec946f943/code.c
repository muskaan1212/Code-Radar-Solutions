#include<stdio.h>
#define pi3.14
int main(){
    float area , radius;
    scanf("%f%f",&area,&radius);
    area= pi*radius*radius;
    printf("the area of circle:%f",area);
    return 0;
}