// Your code here...
#include<stdio.h>
int main(){
    int i,n,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    j=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>j){
            j=arr[i];
        }
    }
     printf("Maximum value: %d\n", j);
    
}