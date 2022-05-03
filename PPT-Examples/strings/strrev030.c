#include <stdio.h>
size_t my_strlen(char *str);
void my_strrev(char * str);
int main()
{
		char str[100];
		printf("Enter the string\n");
		scanf("%[^\n]", str);
		my_strrev(str);
		printf("reversed string is %s\n", str);
		return 0;
}
#if 1
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

#if 1
void my_strrev(char *str)
{
		char ch;
		char *ptr = str + my_strlen(str) - 1;
		while (ptr > str)
		{
				ch = *str;
				*str = *ptr;
				*ptr = ch;
				str++;
				ptr--;
		}
}

#endif

#if 0

void my_strrev(char *str)
{
		int i = 0, j = my_strlen(str) - 1;
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









