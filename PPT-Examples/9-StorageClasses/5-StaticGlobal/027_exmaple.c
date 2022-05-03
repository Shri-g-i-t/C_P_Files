#include <stdio.h>

int x ; //external linkage,program scope
static int x = 10; //internal linkage,file scope 


int foo()
{
	printf("x %d\n", x);

	return 0;
}

int main()
{
	foo();

	return 0;
}
