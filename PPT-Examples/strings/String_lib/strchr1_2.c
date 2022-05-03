#include <stdio.h>
#include <string.h>
#if 0
int main()
{
		char s1[] = "Hello hi how are you world";
		char *p;
		p = strchr(s1, 'w');
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
		char *p;
		p = strchr(s1, 's');
		if (p != NULL)
		{
				puts(p);
		}
		else
		{
				printf("character not present in main string\n");
		}
		return 0;
}
#endif
#if 0
int main()
{
		char s1[] = "Hello hi how are hi you world";
		char *p;
		p = strrchr(s1, 'o');
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
		char *p;
		p = strrchr(s1, 'z');
		if (p != NULL)
		{
				puts(p);
		}
		else
		{
				printf("character not present in main string\n");
		}
		return 0;
}
#endif







