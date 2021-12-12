// .4. Write a C program to compare two strings.
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    int compair;
    printf("Enter string : ");
    gets(str1);
    printf("Enter string to compare : ");
    gets(str2);

    compair = strcmp(str1, str2);

    if (compair == 0)
    {
        puts("string match");
    }
    else
    {
        puts("string not match");
    }
    return 0;
}