// .13. Write a C program to reverse order of words in a given string.

#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100];
  	int i, j, len, start, end;
 
  	printf("Please Enter any String :  ");
  	gets(str);
  	
  	len = strlen(str);
  	end = len - 1;
  	
  	printf("Given String in Reverse Order\n"); 	   	
  	for(i = len - 1; i >= 0; i--)
	{
		if(str[i] == ' ' || i == 0)
		{
			if(i == 0)
			{
				start = 0;
			}
			else
			{
				start = i + 1;
			}
			for(j = start; j <= end; j++)
			{
				printf("%c", str[j]);
			}
			end = i - 1;
			printf(" ");				
		} 
	}
	
  	return 0;
}