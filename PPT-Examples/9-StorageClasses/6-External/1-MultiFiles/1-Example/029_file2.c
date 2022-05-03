#include <stdio.h>

int func_1()
{
	{
		extern int num;
		printf("num is %d from file2\n", num);
	}
		//printf("num is %d from file2\n", num);

	return 0;
}
