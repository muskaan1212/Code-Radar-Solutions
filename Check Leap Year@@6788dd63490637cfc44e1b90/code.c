/*#include <stdio.h>

int main() {
    int year;
scanf("%d", &year);
if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Leap Year\n");
    } else {
        printf("Not a Leap Year\n");
    }

    return 0;
}*/
#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x%400==0||x%4==0&&x%100!=0){
        printf("Leap Year\n");
    }else{
        printf("Not a Leap Year\n");
    }
}