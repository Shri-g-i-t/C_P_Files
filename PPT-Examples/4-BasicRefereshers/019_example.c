#if 0
#include <stdio.h>

int main()
{
	int num1 = 5, num2 = 3;

	float num3 =  (float)num1 / num2;

	printf("num3 is %f\n", num3);

	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{

	float num3 = 5 / 3;
//	float num3 = 5.0 / 3;
	//float num3 = 5.0f / 3;

	printf("num3 is %f\n", num3);
	printf("%zu %zu\n", sizeof(5.0), sizeof (5.0f));
	return 0;
}

#endif
#if 0
#include <stdio.h>

int main()
{
	int num1 = 5, num2 = 3;

	float num3 =  (float)(num1 / num2);

	printf("num3 is %f\n", num3);

	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()    //IMP
{

		char x = 10;
		printf("sizeof x = %zu\n", sizeof (x));
		printf("sizeof +x = %zu\n", sizeof (+x));
		printf("sizeof -x = %zu\n", sizeof (-x));

		return 0;
}
#endif

#if 0
#include <stdio.h>

int main()  //IMP
{

		short x = 10;
		printf("sizeof x = %zu\n", sizeof (x));
		printf("sizeof +x = %zu\n", sizeof (+x));
		printf("sizeof -x = %zu\n", sizeof (-x));

		return 0;
}
#endif

#if 0
#include <stdio.h>

int main()   //Imp
{

		short x = 10;
		char y = 9;
		printf("sizeof x + y = %zu\n", sizeof (x + y));

		return 0;
}
#endif

#if 0
#include <stdio.h>

int main()        //IMP
{

		short x = 10;
		char y = 9;
		double z = 12.25;
		printf("sizeof !x = %zu\n", sizeof (!x));
		printf("sizeof ~y = %zu\n", sizeof (~y));
	    printf("sizeof !z = %zu\n", sizeof (!z));
		return 0;
}
#endif















