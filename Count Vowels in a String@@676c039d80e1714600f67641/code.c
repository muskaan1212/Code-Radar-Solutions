#include<stdio.h>
#include<ctype.h>
int main(){
char str[100];
int i, count=0;
scanf("%s",&str);
for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); 
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
}
 printf("%d\n", count);

}