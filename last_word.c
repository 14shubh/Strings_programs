// .29. Write a C program to find last occurrence of a word in a given string.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch;
    int i, index;
    index = -1;

    printf("Enter any String :  ");
    gets(str);

    printf("Enter the Character that you want to Search for :  ");
    scanf("%c", &ch);

    for (i = 0; i <= strlen(str); i++)
    {
        if (str[i] == ch)
        {
            index = i;
        }
    }
    if (index == -1)
    {
        printf("not found '%c' ", ch);
    }
    else
    {
        printf("Last Occurrence of Element '%c'' at Position %d ", ch, index + 1);
    }
    return 0;
}