#include <stdio.h>
#include<string.h>

int main()
{
	char *str = "Hellohiiii";

	printf("%zu\n", sizeof(str));
	printf("%zu\n",sizeof(*str));
	printf("%d\n",strlen(str));

	return 0;
}
