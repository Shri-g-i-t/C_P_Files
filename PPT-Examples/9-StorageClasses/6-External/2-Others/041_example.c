#include <stdio.h>

extern int x = 20;
void foo(){
	printf("i\nx in foo %d",x);
}
int main()
{
	int x=30;

	{
		int x = 10;
		{
			extern int x;
			printf("x %d\n", x);
		}
		printf("x %d\n", x);
	}
	printf("x %d\n", x);
	foo();

	return 0;
}

int x;
