// .14. Write a C program to find first occurrence of a character in a given string.

#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000], c;
    int i, n, k = 0;

    printf("Enter  the string : ");
    gets(s);
    printf("Enter character to be searched: ");
    c = getchar();

    for (i = 0; s[i]; i++)
    {
        if (s[i] == c)
        {
            k = 1;
            break;
        }
    }
    if (k)
        printf("character  %c  is first occurrence at location:%d ", c, i);
    else
        printf("character is not in the string ");

    return 0;
}