// .27. Write a C program to replace all occurrences of a character with another in a string.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch, newch;
    int i;

    printf("Please Enter any String :  ");
    gets(str);

    printf("Please Enter the Character that you want to Search for :  ");
    scanf("%c", &ch);

    getchar();

    printf("Please Enter the New Character :  ");
    scanf("%c", &newch);

    for (i = 0; i <= strlen(str); i++)
    {
        if (str[i] == ch)
        {
            str[i] = newch;
        }
    }

    printf("The Final String after Replacing All Occurrences of '%c' with '%c' = %s ", ch, newch, str);

    return 0;
}