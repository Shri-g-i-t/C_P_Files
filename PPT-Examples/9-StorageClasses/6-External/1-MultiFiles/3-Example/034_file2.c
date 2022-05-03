#include <stdio.h>
static int num;
extern int num;
int func_2();
int func_1()
{
	printf("num is %d from file2\n", num);

	return 0;
}
