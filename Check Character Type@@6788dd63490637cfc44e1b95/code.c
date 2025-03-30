// Your code here...
#include<stdio.h>
int main(){
    char n[25];
    scanf("%s",&n);
    if(n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u' ||
        n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U'){
        printf("Vowels");

    }else if((n >= 'b' && n <= 'z') || (n >= 'B' && n <= 'Z')){
        printf("Consonant");
    }else if(n >= '0' && n <= '9'){
        printf("Digital");
    }else{
        printf("Invalid");
    }
    return 0;
    
}