#if 0
#include <stdio.h>

int main()
{
	int num1 = 0, num2 = 0;


	printf("Result is %d\n", num1++ + ++num2);
	printf("num1 = %d, num2 = %d\n", num1, num2);

	return 0;
}
#endif
#if 0
#include <stdio.h>             //Imp

int main()
{
		int num1 = 2, num2 = 3, res = 0;
		res = num1+++num2; //==> num1++ + num2;
		printf("num1 = %d, num2 = %d, res = %d\n", num1, num2, res);

		return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
		int num1 = 0, num2 = 3, res = 0;
		num1 = num2++;
		printf("num1 = %d, num2 = %d\n", num1, num2);

		return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
		int num1 = 0, num2 = 0;
		num1 = ++num2;
		printf("num1 = %d, num2 = %d\n", num1, num2);

		return 0;
}
#endif
#if 0
#include <stdio.h>

int main()     //IMP
{
		int num1 = 5, num2 = 3;


		printf("Result is %d\n", num1 + +num2);//8 is printed

		return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
		int num1 = 5, num2 = 3;


		printf("Result is %d\n", num1 + -num2);//2

		return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
		int num1 = 0;


		printf("%d %d %d %d\n", num1++, num1++, ++num1, ++num1);
		//undefined behaviour

		return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
		int num1 = 5;
		num1 = num1++;
		printf("%d\n", num1);  //5
		return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
		int num1 = 5;
		num1 = ++num1;
		printf("%d\n", num1);//6
		return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
		int num1;
		num1 = 5;
		num1 = num1;
		printf("%d\n\n", num1);
		return 0;
}
#endif

#if 1
#include <stdio.h>

float r();
int main()
{
		float r();
		
		//printf("\nnum=%d,\na(main)=%f",r(),r());
		return 0;
		
}
float r(int a){
	printf("\na=%f",a);
	return a;
}
#endif








