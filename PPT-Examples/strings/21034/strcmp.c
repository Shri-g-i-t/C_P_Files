#include <stdio.h>
#include <string.h>

int my_strcmp(char *p1, char *p2);

int main()
{
		char str1[30], str2[30];
		printf("Enter the string1\n");
		scanf("%[^\n]", str1);
		getchar();
		printf("Enter the string2\n");
		scanf("%[^\n]", str2);
		int status;
		status = my_strcmp(str1, str2);
		if (status == 0)
		{
				printf("Strings are SAME\n");
		}
		else
		{
				printf("Strings are DIFFERENT\n");
		}
		return 0;
}

int my_strcmp(char *p1, char *p2)
{
		while (*p1 != '\0' && *p2 != '\0')
		{
				if (*p1 != *p2)
				{
						return *p1 - *p2;
				}
				p1++;
				p2++;
		}
		return *p1 - *p2;
}






