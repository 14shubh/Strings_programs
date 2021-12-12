// .3. Write a C program to concatenate two strings.

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    int i;
    printf("Enter first name\n");
    gets(str1);
    printf("Enter last name\n");
    gets(str2);
    str1[100] = strcat(str1, str2);
    printf("full name is : %s ", str1);
    return 0;
}