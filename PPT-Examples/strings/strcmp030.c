#include <stdio.h>
int my_strcmp(char *s1, char *s2);

int main()
{
		char s1[100], s2[100];
		printf("Enter the string 1\n");
		scanf("%[^\n]", s1);
		getchar();
		printf("Enter the string 2\n");
		scanf("%[^\n]", s2);
		int status;
		status  = my_strcmp(s1, s2);
		if (status == 0)
		{
				puts("strings are same");
		}
		else
		{
				puts("strings are not same");
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










