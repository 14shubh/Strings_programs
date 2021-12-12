// .36. Write a C program to trim trailing white space characters from given string.

#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int i, j;

    printf("Enter any string : ");
    gets(s);

    printf("Before trimming leading and trailing white spaces :'%s'", s);
    for (i = 0; s[i] == ' ' || s[i] == '\t'; i++)
    {
    }

    for (j = 0; s[i]; i++)
    {
        s[j++] = s[i];
    }
    s[j] = '\0';
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != ' ' && s[i] != '\t')
            j = i;
    }
    s[j + 1] = '\0';
    printf("\nAfter trimming leading and trailing white spaces :'%s'", s);
}