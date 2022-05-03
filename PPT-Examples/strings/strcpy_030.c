#include <stdio.h>
void my_strcpy(char *dest, char *src);

int main()
{
		char str[100], dest[100];
		printf("Enter the string\n");
		scanf("%[^\n]", str);
		my_strcpy(dest, str);
		puts(dest);
		return 0;
}

#if 0
// version 1.1 
void my_strcpy(char *dest, char *src)
{
		int i = 0;
		while (src[i] != '\0')
		{
				dest[i] = src[i];
				i++;
		}
		//dest[i] = src[i];
		dest[i] = '\0'; //Efficient
}

#endif

#if 0
// version 1.2 
void my_strcpy(char *dest, char *src)
{
		while (*src != '\0')
		{
				*dest = *src;
				dest++;
				src++;
		}
		*dest = '\0'; //Efficient
}

#endif


#if 0
// version 1.3 
void my_strcpy(char *dest, char *src)
{
		while (*src != '\0')
		{
				*dest++ = *src++;
				// 1. Assign src
				// 2. Derefence src ==> *src
				// 3. Assign *src ===> *dest
				// 4. Increment src and dest
		}
		*dest = '\0'; //Efficient
}

#endif

#if 1
// version 1.4 
void my_strcpy(char *dest, char *src)
{
		while (*dest++ = *src++);
				// 1. Assign src
				// 2. Derefence src ==> *src
				// 3. Assign *src ===> *dest
				// 4. Then it will check weather *dest is '\0' or not
				// 5. Increment src and dest
}

#endif


