// .6. Write a C program to convert uppercase string to lowercase.

#include <stdio.h>

int main () {
    char str1[100];
    printf("Enter string in uppercase : ");
    gets(str1);

    for(int i=0; str1[i]!='\0'; i++) {
        if(str1[i] >= 'A' && str1[i] <= 'Z'){
            str1[i] = str1[i] + 32;
        }
    }
    puts(str1);
   return 0;
}