// Your code here...
#include<stdio.h>
int main(){
    char x;
    scanf("%c",&x);
    if(x==ABCDEFGHIJKLMNOPQRSTUVWXYZ){
        printf("Uppercase");
    }else if(x==abcdefghijklmnopqrstuvwxyz){
        printf("Lowercase");
    }
}