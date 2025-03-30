// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
     for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);}
    int even= -1, odd= -1;
    for (int i = 0; i < n; i++) {
    if(arr[i]%2==0 && even==1){
        even= arr[i];
    } 
    if(arr[i]%2!=0 && odd==1){
        odd=arr[i];
    }
    }
    printf("%d %d\n",even,odd);

}