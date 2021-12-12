// .26. Write a C program to replace last occurrence of a character with another in a string.

#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000], c1, c2;
    int i;

    printf("Enter  the string : ");
    gets(s);

    printf("Enter a character replace: ");
    scanf("%c", &c1);
    getchar();
    printf("\nEnter character to replace  %c with : ", c1);
    scanf("%c", &c2);
    getchar();
    printf("\n before replace: %s", s);

    for (i = 0; s[i]; i++)
    {
         if (s[i] == c1)
        {
            s[i] = c2;
            break;
        }
    }


    printf("\nafter replace:%s", s);

    return 0;
}