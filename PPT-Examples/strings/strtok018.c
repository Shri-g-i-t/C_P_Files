#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "www,/';[],./.emertxe;',./??.com-=-=-=*-+/banglore";
	char del[] = "./,;'[]/*-+-=?";
	char *ptr;
	ptr = strtok(str, del);

	while (ptr != NULL)
	{
			puts(ptr);
			ptr = strtok(NULL, del); 
	}
	return 0;
}

char * my_strtok(char *str, char * del)
{
		static char *ptr;

		if (str != NULL)
		{
				ptr = str;
		}
}
