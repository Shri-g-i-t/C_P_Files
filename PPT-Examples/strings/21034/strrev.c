#include <stdio.h>
#include <string.h>

void my_strrev(char *str);

int main()
{
		char str[30];
		printf("Enter the string\n");
		scanf("%[^\n]", str);
		my_strrev(str);
		puts(str);
		return 0;
}


#if 0
void my_strrev(char *str)
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
void my_strrev(char *str)
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



