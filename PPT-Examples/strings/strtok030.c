#include <stdio.h>
#include <string.h>

int main()
{
		char str[] = "www.emertxe.com/banglore";
		char del[] = "./";
		char *ptr;
		puts(str);
		ptr = strtok(str, del);
		while (ptr != NULL)
		{
				puts(ptr);
				ptr = strtok(NULL, del);
		}
		puts(str);
		return 0;
}

