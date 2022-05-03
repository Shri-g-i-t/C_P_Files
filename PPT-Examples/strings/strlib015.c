#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#if 0
int main()
{
		char s[] = "Hello world";
		int len;
		len = strlen(s);
		printf("String contains %d characters\n", len);
		return 0;
}
#endif

#if 0
int main()
{
		int len;
		len = strlen("Vikas emertxe");
		printf("String contains %d characters\n", len);
		return 0;
}
#endif

#if 0
int main()
{
		char s1[] = "Hello world";
		char s2[100];
		strcpy(s2, s1);
		puts(s2);
		return 0;
}
#endif
#if 0
int main()
{
		char s1[] = "Hello world";
		char *s2;
		strcpy(s2, s1);
		puts(s2);
		return 0;
}
#endif
#if 0
int main()
{
		char s1[] = "Hello world";
		char *s2 = malloc(20);
		strcpy(s2, s1);
		puts(s2);
		return 0;
}
#endif
#if 0
int main()
{
		char s1[] = "Hello hi how are you world";
		char s2[] = "i ho";
		char *p;
		p = strstr(s1, s2);
		if (p == NULL)
		{
				printf("NOT FOUND\n");
		}
		else
		{
				puts(p);
		}
		return 0;
}
#endif
#if 0
int main()
{
		char s1[] = "Hello hi how are you world";
		char s2[] = "iho";
		char *p;
		p = strstr(s1, s2);
		if (p == NULL)
		{
				printf("NOT FOUND\n");
		}
		else
		{
				puts(p);
		}

		return 0;
}
#endif
#if 0
int main()
{
		char s1[] = "Hello hi how are you world";
		char s2 = 'a';
		char *p;
		p = strchr(s1, s2);
		puts(p);
		return 0;
}
#endif
#if 0
int main()
{
		char s1[] = "Hello hi how are you world";
		char s2 = 'z';
		char *p;
		p = strchr(s1, s2);
		if (p == NULL)
		{
				printf("NOT THERE\n");
		}
		else
		{
				puts(p);
		}
		return 0;
}
#endif
#if 0
int main()
{
		char s1[] = "Hello hi how are you world";
		char *p;
		p = strchr(s1, 'o');
		if (p == NULL)
		{
				printf("NOT THERE\n");
		}
		else
		{
				puts(p);
		}
		return 0;
}
#endif

#if 0
int main()
{
		char s1[] = "Hello hi how are you world";
		char s2 = 'o';
		char *p;
		p = strrchr(s1, s2);
		puts(p);
		return 0;
}
#endif
#if 0
int main()
{
		char s1[] = "Hello hi how are you world";
		char *p;
		p = strchr(s1, 'e');
		puts(p);
		p = strrchr(s1, 'e');
		puts(p);
		return 0;
}
#endif

#if 0
int main()
{
		char s1[100] = "Hello";
		char s2[100] = "World";
		strcat(s1, s2);
		puts(s1);
		return 0;
}
#endif
#if 0
int main()
{
		char *s1 = "Hello";
		char s2[100] = "World";
		strcat(s1, s2);
		puts(s1);
		return 0;
}
#endif

#if 0
int main()
{
		char *s1 = "Hello";
		char s2[100] = "World";
		strcat(s2, s1);
		puts(s2);
		return 0;
}
#endif
#if 0
int main()
{
		char s2[100] = "World";
		strcat(s2, "Vikas");
		puts(s2);
		return 0;
}
#endif
#if 0
int main()
{
		char s2[100] = "World";
		strcat("Vikas", s2);
		puts(s2);
		return 0;
}
#endif

#if 0
int main()
{
		char s1[100] = "Hello";
		char s2[100] = "Hello";
		int status;
		status = strcmp(s1, s2);
		if ( status == 0)
		{
				printf("Same status = %d\n", status);
		}
		else
		{
				printf("Different strings status = %d\n", status);
		}
		return 0;
}
#endif
#if 0
int main()
{
		char s1[100] = "Hello";
		char s2[100] = "hello";
		int status;
		status = strcmp(s1, s2);
		if ( status == 0)
		{
				printf("Same status = %d\n", status);
		}
		else
		{
				printf("Different strings status = %d\n", status);
		}
		return 0;
}
#endif
#if 0
int main()
{
		char s1[100] = "hello";
		char s2[100] = "Hello";
		int status;
		status = strcmp(s1, s2);
		if ( status == 0)
		{
				printf("Same status = %d\n", status);
		}
		else
		{
				printf("Different strings status = %d\n", status);
		}
		return 0;
}
#endif
#if 0
int main()
{
		char s1[100] = "Hello";
		char s2[100] = "Hell";
		int status;
		status = strcmp(s1, s2);
		if ( status == 0)
		{
				printf("Same status = %d\n", status);
		}
		else
		{
				printf("Different strings status = %d\n", status);
		}
		return 0;
}
#endif
#if 0
int main()
{
		char s1[100] = "Hello";
		char s2[100] = "Vikas";
		int status;
		status = strcmp(s1, s2);
		if ( status == 0)
		{
				printf("Same status = %d\n", status);
		}
		else
		{
				printf("Different strings status = %d\n", status);
		}
		return 0;
}
#endif

#if 0
int main()
{
		char s1[100] = "hello";
		char s2[100] = "HELLO";
		int status;
		status = strcasecmp(s1, s2);
		if ( status == 0)
		{
				printf("Same status = %d\n", status);
		}
		else
		{
				printf("Different strings status = %d\n", status);
		}
		return 0;
}
#endif
#if 0
int main()
{
		char s1[100] = "hello";
		char s2[100] = "Helo";
		int status;
		status = strcasecmp(s1, s2);
		if ( status == 0)
		{
				printf("Same status = %d\n", status);
		}
		else
		{
				printf("Different strings status = %d\n", status);
		}
		return 0;
}
#endif

#if 0
int main()
{
		char s1[100] = "hello";
		char s2[100] = "Hellov";
		int status;
		status = strcasecmp(s1, s2);
		if ( status == 0)
		{
				printf("Same status = %d\n", status);
		}
		else
		{
				printf("Different strings status = %d\n", status);
		}
		return 0;
}
#endif
#if 0
int main()
{
		char s1[100] = "hello";
		char s2[100] = "hello";
		int status;
		status = strncmp(s1, s2, 4);
		if ( status == 0)
		{
				printf("Same status = %d\n", status);
		}
		else
		{
				printf("Different strings status = %d\n", status);
		}
		return 0;
}
#endif
#if 0
int main()
{
		char s1[100] = "hello world";
		char s2[100] = "hell";
		int status;
		status = strncmp(s1, s2, 4);
		if ( status == 0)
		{
				printf("Same status = %d\n", status);
		}
		else
		{
				printf("Different strings status = %d\n", status);
		}
		return 0;
}
#endif

#if 0
int main()
{
		char s1[100] = "hello world";
		char s2[100] = "helr";
		int status;
		status = strncmp(s1, s2, 4);
		if ( status == 0)
		{
				printf("Same status = %d\n", status);
		}
		else
		{
				printf("Different strings status = %d\n", status);
		}
		return 0;
}
#endif

#if 0
int main()
{
		char s1[100] = "hello world";
		strrev(s1);
		puts(s1);
		return 0;
}
#endif

















