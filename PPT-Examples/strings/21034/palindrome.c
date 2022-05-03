#include <stdio.h>
#include <string.h>

int my_palindrome(char *str);

int main()
{
		char str[30];
		printf("Enter the string\n");
		scanf("%[^\n]", str);
		int status;
		status = my_palindrome(str);
		if (status == 1)
		{
				printf("String is Palindrome\n");
		}
		else
		{
				printf("String is NOT Palindrome\n");
		}
		return 0;
}


#if 1
int my_palindrome(char *str)
{
		int i = 0, j = strlen(str) - 1;
		while (i < j)
		{
				if (str[i] != str[j])
				{
						return 0;
				}
				i++;
				j--;
		}
		return 1;
}
#endif



