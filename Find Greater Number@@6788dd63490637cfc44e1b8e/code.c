// Your code here...
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b)
    if(a>b){
        printf("%d %d",a,b);
    }else if(b>a){
        printf("%d %d",b,a);
    }
    return 0;
}