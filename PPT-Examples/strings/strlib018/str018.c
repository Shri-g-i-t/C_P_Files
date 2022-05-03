#include <stdio.h>

size_t my_strlen(char *str);
int main()
{
		char str1[50];
		unsigned int len;
		printf("ENter the string\n");
		scanf("%[^\n]", str1);
		len = my_strlen(str1);
		printf("String contains %u characters\n", len);
		return 0;
}
#if 0
size_t my_strlen(char *str)
{
		int i = 0, count = 0;
		while (str[i] != '\0')
		{
				i++;
				count++;
		}
		return count;
}
#endif
#if 0
size_t my_strlen(char *str)
{
		int i = 0;
		while (str[i++] != '\0');

		return i - 1;
}
#endif
#if 0
size_t my_strlen(char *str)
{
		int i = 0;
		while (*str != '\0')
		{
				str++;
				i++;
		}
		return i;
}
#endif
#if 0
size_t my_strlen(char *str)
{
		int i = 0;
		while (*str++ != '\0')
		{
				i++;
		}
		return i;
}
#endif
#if 1
size_t my_strlen(char *str)
{
		char *ptr = str;
		while (*str++ != '\0');
		
		return str - ptr - 1;
}
#endif

