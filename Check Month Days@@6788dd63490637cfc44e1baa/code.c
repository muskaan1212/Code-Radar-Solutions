// Your code here...
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if (a==1){
        printf("31");
    }else if(a==2){
        printf("28");
    }else if(a==4){
        printf("30");
    }else if(a==12){
        printf("31");
    }else if(a==13){
        printf("Invalid month");
    }else{
        printf("Invalid");
    }
}