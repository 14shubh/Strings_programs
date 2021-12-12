// .30. Write a C program to search all occurrences of a word in given string./

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100],word[100];
    int i, j, found;
    int strLen, wordLen;

    printf("Enter any string: ");
    gets(str);
    printf("Enter any word to search: ");
    gets(word);

    strLen = strlen(str);
    wordLen = strlen(word);

    for (i = 0; i < strLen - wordLen; i++)
    {

        found = 1;
        for (j = 0; j < wordLen; j++)
        {
            if (str[i + j] != word[j])
            {
                found = 0;
                break;
            }
        }

        if (found == 1)
        {
            printf("'%s' found at index: %d \n", word, i);
        }
    }

    return 0;
}