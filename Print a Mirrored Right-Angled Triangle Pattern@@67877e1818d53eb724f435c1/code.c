#include<stdio.h>
int main(){
    int i,j,n,k;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=0;j<=n-i;j++){
            printf(" ");
        }
        for(k=0;k<=n;k++){
            printf("*");
        }
    } printf("\n");
}