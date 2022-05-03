#include <stdio.h>
size_t my_strlen(char *str);
int main()
{
		char s[100];
		printf("Enter the String\n");
		scanf("%[^\n]", s);
		int len;
		len = my_strlen(s);
		printf("string contains %d characters\n", len);
		return 0;
}
#if 0
/* Version 1 */
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
/* Version 2 */
size_t my_strlen(char *str)
{
		int i = 0;
		while (str[i])
		{
				i++;
		}
		return i;
}
#endif
#if 0
/* Version 3 */
size_t my_strlen(char *str)
{
		int i = 0;
		while (*str)
		{
				str++;
				i++;
		}
		return i;
}
#endif
#if 0
/* Version 4 */
size_t my_strlen(char *str)
{
		int i = 0;
		while (*str++)
		{
				i++;
		}
		return i;
}
#endif
#if 1
/* Version 5 */
size_t my_strlen(char *str)
{
		char *ptr = str;
		
		while (*str++);

		return str - ptr - 1;
}
#endif














