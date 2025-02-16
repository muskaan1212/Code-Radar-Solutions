// Your code here...
#include<stdio.h>
int main(){
    char x;
    scanf("%c",&x);
    if(x>='A'&&x<='Z'){
        printf("Uppercase\n");
    }else if(x >= 'a' && x <= 'z'){
        printf("Lowercase\n");
    }
    else {
        printf("Not a alphabet\n");
}
}