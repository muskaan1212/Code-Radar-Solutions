// Your code here...
#include<stdio.h>
int main(){
    int N,i,j;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(j=1;j<=i+2;j++){
            printf("*");
        }
        printf("\n");
    }
}