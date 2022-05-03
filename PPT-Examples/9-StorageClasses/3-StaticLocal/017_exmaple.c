#include <stdio.h>
#if 0
int foo()
{
	static int i;

	return i;
}

int main()
{
	static int x=foo();
	printf("x %d\n", x);

	return 0;
}
#endif
#if 1
int static i=2;
int foo()
{
	static int i=1;
	printf("\ni in foo %d\n", i);
	printf("\nAddress of i(foo) : %p",&i);

	return i;
}

int main()
{
	{
	static int i=10;
	printf("\ni in main %d\n", i);
	printf("\nAddress of i(main) : %p",&i);

	foo();
	printf("\ni in main %d\n", i);
	}
	printf("\ni in global %d\n", i);
	printf("\nAddress of i(global) : %p",&i);

	return 0;
}
#endif
