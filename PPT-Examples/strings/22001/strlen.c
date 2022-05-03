#include <stdio.h>
#include <string.h>
int my_strlen(char *str);
int main()
{
		char str[100];
		printf("Enter the string\n");
		scanf("%[^\n]", str);
		int len;
		len = my_strlen(str);
		printf("string contain %d characters\n", len);
		return 0;
}
#if 0
int my_strlen(char *str)
{
		int i = 0;
		while (*str != '\0')
		{
			i++;
			str++;
		}
		return i;
}
#endif
#if 0
int my_strlen(char *str)
{
		int i = 0;
		while (*str++ != '\0')
		{
			i++;
		}
		return i;
}
#endif
#if 0
int my_strlen(char *str)
{
		int i = 0;
		while (str[i] != '\0')
		{
			i++;
		}
		return i;
}
#endif
#if 0
int my_strlen(char *str)
{
		int i = 0;
		
		while (str[i++] != '\0');

		return i - 1;
}
#endif
#if 1
int my_strlen(char *str)
{
		char *ptr = str;	
		while (*str++ != '\0');
		return str - ptr - 1;
}
#endif

