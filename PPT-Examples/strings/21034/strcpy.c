#include <stdio.h>
#include <string.h>

void my_strcpy(char *dest, char *src);

int main()
{
		char str[30], dest[30];
		printf("Enter the string\n");
		scanf("%[^\n]", str);
		my_strcpy(dest, str);
		puts(dest);
		return 0;
}


#if 0
void my_strcpy(char *dest, char *src)
{
		int i = 0;
		while (src[i] != '\0')
		{
				dest[i] = src[i];
				i++;
		}
		dest[i] = src[i];
}
#endif

#if 0
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
void my_strcpy(char *dest, char *src)
{
		while (*src != '\0')
		{
				*dest++ = *src++;
		}
		*dest = '\0';
}
#endif

#if 1
void my_strcpy(char *dest, char *src)
{
		while (*dest++ = *src++);
}
#endif

















