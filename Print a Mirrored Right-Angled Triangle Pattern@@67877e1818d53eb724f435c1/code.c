#include<stdio.h>
int main(){
    int i,j,n,k;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
       for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
}