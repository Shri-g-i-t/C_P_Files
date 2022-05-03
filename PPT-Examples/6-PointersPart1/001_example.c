#include <stdio.h>

int main()
{
	int x;
	int *ptr;

	x = 5;
	ptr = 5;
	printf("%p",ptr);
	printf("%d",*ptr);

	return 0;
}
