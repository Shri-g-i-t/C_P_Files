#if 1
#include <stdio.h>
#include <string.h>
int main()
{
		char str[30] = {0};
		printf("Enter the string\n");
		scanf("%[^\n]", str);
		int len = 0;
		len = strlen(str);
		printf("String contains %d characters\n", len);
		return 0;
}
#endif

#if 0
#include <stdio.h>
size_t my_strlen(char *str);
int main()
{
		char str[30] = {0};
		printf("Enter the string\n");
		scanf("%[^\n]", str);
		int len = 0;
		len = my_strlen(str);
		printf("String contains %d characters\n", len);
		return 0;
}
size_t my_strlen(char *str)
{
		int count = 0;
		while (*str++ != '\0')
		{
				count++;
		}
		return count;
}
#endif
#if 0
#include <stdio.h>
size_t my_strlen(char *str);
int main()
{
		char str[30] = {0};
		printf("Enter the string\n");
		scanf("%[^\n]", str);
		int len = 0;
		len = my_strlen(str);
		printf("String contains %d characters\n", len);
		return 0;
}
size_t my_strlen(char *str)
{
		int count = 0;
		while ((*str++ != '\0') ? ++count : 0);
		return count;
}
#endif
#if 0
#include <stdio.h>
size_t my_strlen(char *str);
int main()
{
		char str[30] = {0};
		printf("Enter the string\n");
		scanf("%[^\n]", str);
		int len = 0;
		len = my_strlen(str);
		printf("String contains %d characters\n", len);
		return 0;
}
size_t my_strlen(char *str)
{
		char *ptr = str;	
		while (*str++);
		return str - ptr - 1;
}
#endif

