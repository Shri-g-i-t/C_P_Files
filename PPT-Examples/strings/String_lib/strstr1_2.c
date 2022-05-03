#include <stdio.h>
#include <string.h>
#if 0
int main()
{
		char s1[] = "Hello hi how are you world";
		char s2[] = "hi";
		char *p;
		p = strstr(s1, s2);
		if (p != NULL)
		{
				puts(p);
		}
		else
		{
				printf("sub string not present in main string\n");
		}
		return 0;
}
#endif
#if 0
int main()
{
		char s1[] = "Hello hi how are hi you world";
		char s2[] = "hi";
		char *p;
		p = strstr(s1, s2);
		if (p != NULL)
		{
				puts(p);
		}
		else
		{
				printf("sub string not present in main string\n");
		}
		return 0;
}
#endif
#if 0
int main()
{
		char s1[] = "Hello hi how are hi you world";
		char s2[] = "w ar";
		char *p;
		p = strstr(s1, s2);
		if (p != NULL)
		{
				puts(p);
		}
		else
		{
				printf("sub string not present in main string\n");
		}
		return 0;
}
#endif
#if 0
int main()
{
		char s1[] = "Hello hi how are hi you world";
		char s2[] = "ow ar";
		char *p;
		p = strstr(s1, s2);
		if (p != NULL)
		{
				puts(p);
		}
		else
		{
				printf("sub string not present in main string\n");
		}
		return 0;
}
#endif
#if 0
int main()
{
		char s1[] = "Hello hi how are hi you world";
		char s2[] = "lo w";
		char *p;
		p = strstr(s1, s2);
		if (p != NULL)
		{
				puts(p);
		}
		else
		{
				printf("sub string not present in main string\n");
		}
		return 0;
}
#endif
#if 1
int main()
{
		char s1[] = "Hello hi how are hi you world";
		char s2[] = "lo w";
		char *p;
		p = strstr(s1, s2);
		puts(p);
		return 0;
}
#endif








