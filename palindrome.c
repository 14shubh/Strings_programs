// .12. Write a C program to check whether a string is palindrome or not.

#include <stdio.h>
#include <string.h>

int main(void)
{

    int len, i = 0, j, is_palindrome = 1;

    char word[50];

    printf("Enter a word: ");
    scanf("%s", word);

    j = strlen(word) - 1;

    while (i <= j)
    {
        if (word[i] != word[j])
        {
            is_palindrome = 0;
            break;
        }

        i++;
        j--;
    }

    if (is_palindrome)
    {
        printf("%s is palindrome", word);
    }
    else
    {
        printf("%s is not palindrome", word);
    }

    return 0;
}