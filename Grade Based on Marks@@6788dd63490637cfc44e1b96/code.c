// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==95 || n<=95){
        printf("A");
    }else if(n==85 || n<=85){
        printf("B");
    }else{
        printf("F");
    }
}