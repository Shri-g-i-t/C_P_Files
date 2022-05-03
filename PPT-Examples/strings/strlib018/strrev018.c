#include <stdio.h>
void my_strrev(char *str);
int main()
{
		char str[50];
		printf("Enter the string\n");
		scanf("%[^\n]", str);
		my_strrev(str);
		puts(str);
		return 0;
}
#if 1
size_t my_strlen(char *str)
{
		int i = 0;
		while (str[i++] != '\0');
		return i - 1;
}
#endif

void my_strrev(char *str)
{
		char temp;
		int i = 0, j = my_strlen(str) - 1;
		while (i < j)
		{
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
				i++;
				j--;
		}
}









