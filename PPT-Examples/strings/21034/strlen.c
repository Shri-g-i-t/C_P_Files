#include <stdio.h>
#include <string.h>

size_t my_strlen(char *str);

int main()
{
		char str[30];
		printf("Enter the string\n");
		scanf("%[^\n]", str);
		size_t len;
		len = my_strlen(str);
		printf("String contains %lu characters\n", len);
		return 0;
}

#if 0
size_t my_strlen(char *str)
{
		int count = 0, i = 0;
		while (str[i] != '\0')
		{
				count++;
				i++;
		}
		return count;
}
#endif

#if 0
size_t my_strlen(char *str)
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













