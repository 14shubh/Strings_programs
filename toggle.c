// .7. Write a C program to toggle case of each character of a string.

#include <stdio.h>

int main () {
    char str1[100];
    printf("Enter string : ");
    gets(str1);

    for(int i=0; str1[i]!='\0'; i++) {
        if(str1[i] >= 'a' && str1[i] <= 'z'){
            str1[i] = str1[i] - 32;
        }else if(str1[i] >= 'A' && str1[i] <= 'Z'){
            str1[i] = str1[i] + 32;
        }
    }
    puts(str1);
   return 0;
}