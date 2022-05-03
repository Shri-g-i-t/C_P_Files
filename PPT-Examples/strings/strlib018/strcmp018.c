#include <stdio.h>

int my_strcmp(char *s1, char *s2);
int main()
{
		char s1[50], s2[50];
		printf("Enter the string1\n");
		scanf("%[^\n]", s1);
		getchar();
		printf("Enter the string2\n");
		scanf("%[^\n]", s2);
		int status;
		status = my_strcmp(s1, s2);
		if (!status)
		{
				printf("Same. Status = %d\n", status);
		}
		else
		{
				printf("Different. Status = %d\n", status);
		}
		return 0;
}

int my_strcmp(char *s1, char *s2)
{
		while (*s1 != '\0' && *s2 != '\0')
		{
				if (*s1 != *s2)
				{
						return *s1 - *s2;
				}
				s1++;
				s2++;
		}
		return *s1 - *s2;
}















