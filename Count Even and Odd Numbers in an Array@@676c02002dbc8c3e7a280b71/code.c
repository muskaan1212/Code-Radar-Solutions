// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    scanf("%d",&arr[n]);
    int even=arr[0], odd=arr[0];
    if(arr[n]%2==0){
        even= arr[n];
    } 
    if(arr[n]%2!=0){
        odd=arr[n];
    }
    printf("%d %d\n",even,odd);
}