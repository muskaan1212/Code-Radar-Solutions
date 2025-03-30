// Your code here...
#include<stdio.h>
int main(){
    char n[25];
    scanf("%s",&n);
    if(n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u' ||
        n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U'){
        printf("Vowels");

    }else if(){
        printf("Consonant");
    }else(){
        printf("Digital");
    }
    return 0;
    
}