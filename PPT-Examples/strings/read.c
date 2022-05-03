#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *str;

	scanf("%5m[^\n]", &str);
	printf("The string is: %s\n", str);
	free(str);
	return 0;
}
