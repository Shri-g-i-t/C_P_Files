#if 0 
#include <stdio.h>

int main()
{
	int option;
	printf("Enter the value\n");
	scanf("%d", &option);

	switch (option)
	{
			case 10:
					printf("You entered 10\n");
					break;
			case 20:
					printf("You entered 20\n");
					break;
			default:
					printf("Try again\n");
	}

	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int option;
	printf("Enter the value\n");
	scanf("%d", &option);

	switch (option)
	{
			case 10:
					printf("You entered 10\n");
					break;
			case 10:      //ERROR : duplicate case values
					printf("You entered 20\n");
					break;
			default:
					printf("Try again\n");
	}

	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int option;
	printf("Enter the value\n");
	scanf("%d", &option);

	switch (option)
	{
			case 10:
					printf("You entered 10\n");
					break;
			case 20.0:  //error case cannot take float values
					printf("You entered 20\n");
					break;
			default:
					printf("Try again\n");
	}

	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int option;
	int x = 10;
	printf("Enter the value\n");
	scanf("%d", &option);

	switch (option)
	{
			case (x+1):  //error;case does not reduce to an intezer constant 
					printf("You entered 10\n");
					break;
			case 20:
					printf("You entered 20\n");
					break;
	}

	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int option;
	printf("Enter the value\n");
	scanf("%d", &option);

	switch (option)
	{
			case 10:
					printf("You entered 10\n");
			//		break;
			case 20:
					printf("You entered 20\n");
			//		break;
			default :
					printf("Try Again\n");
	}

	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int option;
	printf("Enter the value\n");
	scanf("%d", &option);

	switch (option)
	{
			case 10:
					printf("You entered 10\n");
					break;
			default :
					printf("Try Again\n");
					break;
			case 20:
					printf("You entered 20\n");
	}

	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int option;
	printf("Enter the value\n");
	scanf("%d", &option);

	switch (option)
	{
			int x = 100;
			case 10:
					printf("I am in 10 here x = %d\n", x);
					break;
			case 20:
					printf("I am in 20 here x = %d\n", x);
					break;
			default :
					x = 200;
					printf("I am in default here x = %d\n", x);
					printf("Try Again\n");
	}

	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int option;
	printf("Enter the value\n");
	scanf("%d", &option);
	int x = 100;

	switch (option)
	{
			printf("Vikas Emertxe\n");
			case 10:
					printf("I am in 10 here x = %d\n", x);
					break;
			case 20:
					printf("I am in 20 here x = %d\n", x);
					break;
			default :
					x = 200;
					printf("I am in default here x = %d\n", x);
					printf("Try Again\n");
	}

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int option;
	printf("Enter the value\n");
	scanf("%d", &option);

	switch (option)
	{
			case 10:
					int x = 100;
					printf("I am in 10 here x = %d\n", x);
					break;
			case 20:
					int y = 100;
					printf("I am in 20 here y = %d\n", y);
					break;
			default :
					printf("Try Again\n");
	}

	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int option;
	printf("Enter the value\n");
	scanf("%d", &option);

	switch (option)
	{
			case 10:
					{
							int x = 100;
							printf("I am in 10 here x = %d\n", x);
					}
					break;
			case 20:
					{
							int y = 100;
							printf("I am in 20 here y = %d\n", y);
					}
					break;
			default :
					printf("Try Again\n");
	}

	return 0;
}
#endif
#if 0 
#include <stdio.h>

int main()
{
	int option;
	printf("Enter the value\n");
	scanf("%d", &option);

	switch (option)
	{
			case 10, 12, 15:
					printf("You entered 10, 12, 15\n");
					break;
			case 20, 25, 29:
					printf("You entered 20, 25, 29\n");
					break;
			default:
					printf("Try again\n");
	}

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int option;
	printf("Enter the value\n");
	scanf("%d", &option);

	switch (option)
	{
			case 10 ... 20:
					printf("You entered 10 to 20\n");
					break;
			case 21 ... 30:
					printf("You entered 21 to 30\n");
						break;
			default :
					printf("Try Again\n");
	}

	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int option;
	printf("Enter the value\n");
	scanf("%d", &option);

	switch (option)
	{
			case 10 ... 20:
					printf("You entered 10 to 20\n");
					break;
			case 20 ... 30:
					printf("You entered 20 to 30\n");
						break;
			default :
					printf("Try Again\n");
	}

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int option;
	printf("Enter the value\n");
	scanf("%d", &option);

	switch (option)
	{
			case 10...20:
					printf("You entered 10 to 20\n");
					break;
			case 21...30:
					printf("You entered 21 to 30\n");
						break;
			default :
					printf("Try Again\n");
	}

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	char option;
	printf("Enter the value\n");
	scanf("%c", &option);

	switch (option)
	{
			case 'A':
					printf("You entered 'A'\n");
					break;
			case 'a':
					printf("You entered 'a'\n");
					break;
			case '@':
					printf("You entered '@'\n");
					break;
			default:
					printf("Try again\n");
	}

	return 0;
}
#endif










