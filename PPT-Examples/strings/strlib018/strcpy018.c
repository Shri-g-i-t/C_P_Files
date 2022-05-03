#include <stdio.h>

void my_strcpy(char *dest, char *src);
int main()
{
		char src[50], dest[50];
		printf("Enter the string\n");
		scanf("%[^\n]", src);
		my_strcpy(dest, src);
		puts(dest);
		return 0;
}
#if 0
void my_strcpy(char *dest, char *src)
{
		while (*src != '\0')
		{
				*dest = *src;
				dest++;
				src++;
		}
		*dest = *src;
		//*dest = '\0'; // Better Way
}
#endif
#if 0
void my_strcpy(char *dest, char *src)
{
		while (*src != '\0')
		{
				*dest++ = *src++;
		}
		*dest = '\0'; // Better Way
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
		//*dest = '\0'; // Better Way
}
#endif
#if 1
void my_strcpy(char *dest, char *src)
{
		while (*dest++ = *src++);
}
#endif

