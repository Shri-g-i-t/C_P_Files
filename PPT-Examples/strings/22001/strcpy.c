#include <stdio.h>
#include <string.h>
void my_strcpy(char *dest, char *src);
int main()
{
		char str[100], dest[100];
		printf("Enter the string\n");
		scanf("%[^\n]", str);
		my_strcpy(dest, str);
		printf("Copied string is %s\n", dest);
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
		//*dest = *src; // NOT EFFICIENT because of dereference
		*dest = '\0'; // EFFICIENT
}
#endif

#if 0
void my_strcpy(char *dest, char *src)
{
		while (*src != '\0')
		{
				*dest++ = *src++;
		}
		//*dest = *src; // NOT EFFICIENT because of dereference
		*dest = '\0'; // EFFICIENT
}
#endif

#if 1
void my_strcpy(char *dest, char *src)
{
		while (*dest++ = *src++);
}
#endif













