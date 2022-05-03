#if 0
#include <stdio.h>
void swap(int *, int *);
int main()
{
		int x = 10, y = 20;
		int *p1 = &x, *p2 = &y;
		printf("before swap x = %d, y = %d\n", x, y);
		printf("before swap *p1 = %d, *p2 = %d\n", *p1, *p2);
		
		swap(&x, &y);
		//swap(p1,p2);
		
		printf("after swap x = %d, y = %d\n", x, y);
		printf("after swap *p1 = %d, *p2 = %d\n", *p1, *p2);
		return 0;
}

void swap(int *p1, int *p2)
{
		int temp = *p1;
		*p1 = *p2;
		*p2 = temp;
}

#endif
#if 1
#include <stdio.h>
void swap(int **, int **);

int main()
{
		int x = 10, y = 20;
		int *p1 = &x, *p2 = &y;
		printf("before swap x = %d, y = %d\n", x, y);
		printf("before swap *p1 = %d, *p2 = %d\n", *p1, *p2);
		printf("Address of x : %u Address of y : %u",&x,&y);
		printf("Address of p1 : %u Address of p2 : %u",&p1,&p2);
		
		swap(&p1, &p2);
		
		printf("after swap x = %d, y = %d\n", x, y);
		//printf("after swap *p1 = %d, *p2 = %d\n", *p1, *p2);
		return 0;
}

void swap(int **p1, int **p2)
{
#if 1 
		printf("\n in swap func\n p1 : %u p2 : %u",p1,p2);
		int temp = *p1;
		printf("\n%d",temp);
		*p1 = *p2;
		*p2 = temp;
#else
		int *temp = *p1;
		*p1 = *p2;
		*p2 = temp;
#endif
}

#endif
#if 0
#include <stdio.h>
void swap(int **, int **);

int main()
{
		int x = 10, y = 20;
		int *p1 = &x, *p2 = &y;
		printf("before swap x = %d, y = %d\n", x, y);
		printf("before swap *p1 = %d, *p2 = %d\n", *p1, *p2);
		
		swap(&p1, &p2);
		
		printf("after swap x = %d, y = %d\n", x, y);
		printf("after swap *p1 = %d, *p2 = %d\n", *p1, *p2);
		return 0;
}

void swap(int **p1, int **p2)
{
		int temp = **p1;
		**p1 = **p2;
		**p2 = temp;
}

#endif








