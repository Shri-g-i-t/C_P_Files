#include <stdio.h>
#include <ctype.h>
int my_strcasecmp(char *s1, char *s2);
int main()
{
		char s1[100];
		char s2[100];
		printf("Enter the 1st String\n");
		scanf("%[^\n]", s1);
		getchar();
		printf("Enter the 2nd String\n");
		scanf("%[^\n]", s2);
		int status;
		status = my_strcasecmp(s1, s2);
		if (status == 0)
		{
				printf("Strings are same\n");
		}
		else
		{
				printf("Strings are different\n");
		}
		return 0;
}
#if 0
int my_strcasecmp(char *s1, char *s2)
{
		while (*s1 && *s2)
		{
				if (toupper(*s1) != toupper(*s2))
				{
						return *s1 - *s2;
				}
				s1++;
				s2++;
		}
		if (*s1 == '\0' && *s2 == '\0')
		{
				return 0;
		}
		return toupper(*s1) - toupper(*s2);
}
#endif
#if 0
int my_strcasecmp(char *s1, char *s2)
{
		while (*s1 && *s2 && (toupper(*s1) == toupper(*s2)))
		{
				s1++;
				s2++;
		}
		if (*s1 == '\0' && *s2 == '\0')
		{
				return 0;
		}
		return toupper(*s1) - toupper(*s2);
}
#endif

