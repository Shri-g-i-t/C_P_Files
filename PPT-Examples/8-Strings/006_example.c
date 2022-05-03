#if 1
#include <stdio.h>

int main()
{
	char *str1 = "Hello""\0";
	char *str2 = "Hello""\0";

	printf("&str1= %lld\n",&str1);
	printf("&str2= %lld\n",&str2);
	printf("str1 = %lld\n",str1);
	printf("str2 = %lld\n",str2);
	printf("str1 = %s\n",str1);
	printf("str2 = %s\n",str2);
	printf("str1 = %d\n",strlen(str1));
	printf("str2 = %d\n",strlen(str2));
	
	if (str1 == str2)
	{
		printf("Hoo. They share same space\n");
	}
	else
	{
		printf("No. They are in different space\n");
	}

	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	char *str1 = "Hello";
	char *str2 = "hello";
	
	if (str1 == str2)
	{
		printf("Hoo. They share same space\n");
	}
	else
	{
		printf("No. They are in different space\n");
	}

	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	char str1[] = "Hello";
	char str2[] = "Hello";
	
	if (str1 == str2)
	{
		printf("Hoo. They share same space\n");
	}
	else
	{
		printf("No. They are in different space\n");
	}

	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	char str1[] = "Hello";
	char str2[] = "hello";
	
	if (str1 == str2)
	{
		printf("Hoo. They share same space\n");
	}
	else
	{
		printf("No. They are in different space\n");
	}

	return 0;
}
#endif

