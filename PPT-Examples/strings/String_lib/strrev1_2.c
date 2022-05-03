#if 1
#include <stdio.h>
#include <string.h>
void strrev(char *str);
int main()
{
		char str[30] = {0};
		printf("Enter the string\n");
		scanf("%[^\n]", str);
		strrev(str);
		puts(str);
		return 0;
}
#if 0
void strrev(char *str)
{
		int i = 0, j = strlen(str) - 1;
		char temp;
		while (i < j)
		{
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
				i++;
				j--;
		}
}
#endif
#if 1
void strrev(char *str)
{
		char *ptr = str + strlen(str) - 1;
		char temp;
		while (str < ptr)
		{
				temp = *str;
				*str = *ptr;
				*ptr = temp;
				str++;
				ptr--;
		}
}
#endif

#endif

