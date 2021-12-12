// .25. Write a C program to replace first occurrence of a character with another in a string.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch, newch;
    int i;

    printf("\n Please Enter any String :  ");
    gets(str);

    printf("Please Enter the Character that you want to Replace :  ");
    scanf("%c", &ch);

    getchar();

    printf("Please Enter the New Character :  ");
    scanf("%c", &newch);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            str[i] = newch;
            break;
        }
    }
    printf("\n The Final String after Replacing First occurrence of '%c' with '%c' = %s ", ch, newch, str);

    return 0;
}