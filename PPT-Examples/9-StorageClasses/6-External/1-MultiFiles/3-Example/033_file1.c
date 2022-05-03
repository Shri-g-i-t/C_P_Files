#include <stdio.h>
#include <unistd.h>

int num;

int func_1();
int func_2();
int main()
{
	while (1)
	{
		num++;
		printf("num is %d from main\n", num);
		func_1();
		func_2();
		sleep(1);
	}

	return 0;
}
