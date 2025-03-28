// Your code here...
#include<stdio.h>
int checkPrime(int n, int a){
    if(a*a>n)
    return 1;
    if (n%a==0)
    return 0;
    return checkPrime(n,a+(a==2 ? 1:2));
}
int isPrime(int n){
    if(n<2)
    return 0;
    if(n==2)
    return 1;
    return checkPrime(n,2);
}
int main(){
    int num;
    scanf("%d",&num);
    if(isPrime(num))
    printf("%d is a prime number.\n",num);
    else
    printf("%d is not a prime number.\n",num);
}