// Your code here...
#include<stdio.h>
int main(){
    int N,i,j;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[N]);
    }
    int max=arr[0], min=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("%d\n",max);
     printf("%d\n",min);
}