#if 0
#include <stdio.h>

int main()
{
	int num = 7;

	if (num < 5)
	{
		printf("num is smaller than 5\n");
	}
	else
	{
		printf("num is greater than 5\n");
	}

	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int num = 3;

	if (num < 5);
	{
		printf("num is smaller than 5\n");
	}
	else
	{
		printf("num is greater than 5\n");
	}

	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int num = 3;

	if (num < 5)
		printf("num is smaller than 5\n"); //if is ending here so no else thrfr error
		printf("Emertxe\n");
	else
	{
		printf("num is greater than 5\n");
	}

	return 0;
}
#endif
#if 0 
#include <stdio.h>

int main()
{
	int num = 3;

	if (num < 5)
		printf("num is smaller than 5\n");
	else
		printf("num is greater than 5\n");
		printf("Emertxe\n");

	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int num = 6;

	if (num < 5)
			printf("num is smaller than 5\n");
	else (num > 5)     //ERROR expected ; here
		printf("num is greater than 5\n");
		printf("Emertxe\n");

	return 0;
}
#endif

#if 1
#include <stdio.h>

int main()
{
	int num = 3;

	if (num < 5)
			printf("num is smaller than 5\n");
	else (num > 5); //no error
		printf("num is greater than 5\n");
		printf("Emertxe\n");

	return 0;
}
#endif















