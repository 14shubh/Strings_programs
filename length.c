// .1. Write a C program to find length of a string.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int length;
    printf("Enter your name \n");
    scanf("%s", str);
    for (length = 0; str[length] != '\0'; length++)
    {
    }
    printf("%d", length);
    return 0;
}