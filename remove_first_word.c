// .32. Write a C program to remove first occurrence of a word from string.

#include <stdio.h>
#include <string.h>

void removeFirst(char *str, const char *remove);

int main()
{
    char str[1000], remove[1000];

    printf("Enter any string: ");
    gets(str);
    printf("Enter string to be removed: ");
    gets(remove);

    removeFirst(str, remove);

    printf("\nString after removing '%s': \n%s", remove, str);

    return 0;
}

void removeFirst(char *str, const char *remove)
{
    int i, j;
    int len, removeLen;
    int found = 0;

    len = strlen(str);
    removeLen = strlen(remove);

    for (i = 0; i < len; i++)
    {
        found = 1;
        for (j = 0; j < removeLen; j++)
        {
            if (str[i + j] != remove[j])
            {
                found = 0;
                break;
            }
        }

        if (found == 1)
        {
            for (j = i; j <= len - removeLen; j++)
            {
                str[j] = str[j + removeLen];
            }

            break;
        }
    }
}