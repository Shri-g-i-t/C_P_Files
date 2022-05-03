#include <stdio.h>
size_t my_strlen(char *str);

int main()
{
		char str[100];
		printf("Enter the string\n");
		scanf("%[^\n]", str);
		int len;
		len = my_strlen(str);
		printf("length of string is %d\n", len);
		return 0;
}
#if 0
// Version 1.1
size_t my_strlen(char *str)
{
		int i = 0, count = 0;
		while (str[i] != '\0')
		{
				count++;
				i++;
		}
		return count;
}
#endif

#if 0
// Version 1.2
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
// Version 1.3
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
// Version 1.4
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

#if 0
// Version 1.5
size_t my_strlen(char *str)
{
		int i = 0;
		
		while (str[i++] != '\0');

		return i - 1;
}
#endif

#if 1
// Version 1.6
size_t my_strlen(char *str)
{
		char *ptr = str;
		
		while (*str++ != '\0');

		return str - ptr - 1;
}
#endif













