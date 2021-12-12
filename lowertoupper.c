// .5. Write a C program to convert lowercase string to uppercase.

#include <stdio.h>

int main () {
    char str1[100];
    printf("Enter string in lowercase : ");
    gets(str1);

    for(int i=0; str1[i]!='\0'; i++) {
        if(str1[i] >= 'a' && str1[i] <= 'z'){
            str1[i] = str1[i] - 32;
        }
    }
    puts(str1);
   return 0;
}