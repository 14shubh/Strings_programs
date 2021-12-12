// .2. Write a C program to copy one string to another string.

#include <stdio.h>

int main()
{
    char str[100], str1[100];
    int i;
    printf("Enter your name \n");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {

        str1[i] = str[i];

    }
    str1[i] = '\0';
    printf("%s", str1);
    return 0;
}