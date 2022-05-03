#if 1
#include <stdio.h>

int main()
{
	int num = 5;
	printf("%zu:%zu:%zu\n", sizeof(int), sizeof num, sizeof 5);
    //4 4 4
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	float num = 10.23;
	printf("%zu:%zu:%zu\n", sizeof(float), sizeof num, sizeof (10.23));
	//4 4 8
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	char num = 'A';
	printf("%zu:%zu:%zu\n", sizeof(char), sizeof num, sizeof ('A'));
	//1 1 4

	return 0;
}
#endif
















