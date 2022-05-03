#include <stdio.h>
#include<unistd.h>

int main()
{
	int num;

	while (1)
	{
		printf("Enter a number: ");
		scanf("%d", &num);
		sleep(1);
	}

	return 0;
}
