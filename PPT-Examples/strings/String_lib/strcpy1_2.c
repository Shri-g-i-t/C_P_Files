#if 0
#include <stdio.h>
#include <string.h>
int main()
{
		char str1[30], str2[10];
		printf("Enter the string\n");
		scanf("%[^\n]", str1);
		strcpy(str2, str1);
		printf("String2 contains %s\n", str2);
		return 0;
}
#endif
#if 0
#include <stdio.h>
#include <string.h>
int main()
{
		char str1[30], *str2;
		printf("Enter the string\n");
		scanf("%[^\n]", str1);
		strcpy(str2, str1);
		printf("String2 contains %s\n", str2);
		return 0;
}
#endif
#if 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
		char str1[30], *str2 = malloc(30);
		printf("Enter the string\n");
		scanf("%[^\n]", str1);
		strcpy(str2, str1);
		printf("String2 contains %s\n", str2);
		return 0;
}
#endif
#if 0
#include <stdio.h>
#include <stdlib.h>
void my_strcpy(char *dest, char *src);
int main()
{
		char str1[30], *str2 = malloc(30);
		printf("Enter the string\n");
		scanf("%[^\n]", str1);
		my_strcpy(str2, str1);
		printf("String2 contains %s\n", str2);
		return 0;
}
void my_strcpy(char *dest, char *src)
{
		while (*src != '\0')
		{
				*dest = *src;
				dest++;
				src++;
		}
		*dest = '\0';
}
#endif
#if 0
#include <stdio.h>
#include <stdlib.h>
void my_strcpy(char *dest, char *src);
int main()
{
		char str1[30], *str2 = malloc(30);
		printf("Enter the string\n");
		scanf("%[^\n]", str1);
		my_strcpy(str2, str1);
		printf("String2 contains %s\n", str2);
		return 0;
}
void my_strcpy(char *dest, char *src)
{
		int i = 0;
		while (src[i] != '\0')
		{
				dest[i] = src[i];
				i++;
		}
		dest[i] = '\0';
}
#endif
#if 0
#include <stdio.h>
#include <stdlib.h>
void my_strcpy(char *dest, char *src);
int main()
{
		char str1[30], *str2 = malloc(30);
		printf("Enter the string\n");
		scanf("%[^\n]", str1);
		my_strcpy(str2, str1);
		printf("String2 contains %s\n", str2);
		return 0;
}
void my_strcpy(char *dest, char *src)
{
		while (*src != '\0')
		{
				*dest++ = *src++;
		}
		*dest = '\0';
}
#endif
#if 0
#include <stdio.h>
#include <stdlib.h>
void my_strcpy(char *dest, char *src);
int main()
{
		char str1[30], *str2 = malloc(30);
		printf("Enter the string\n");
		scanf("%[^\n]", str1);
		my_strcpy(str2, str1);
		printf("String2 contains %s\n", str2);
		return 0;
}
void my_strcpy(char *dest, char *src)
{
		while (*dest++ = *src++);
}
#endif







