#include <stdio.h>
#include <string.h>
int main()
{
		char s1[] = "www..;';'.//.emertxe/::';'/.com/./././banglore";
		char s2[] = "./;':";
		char *ptr;
		ptr = my_strtok(s1, s2);
		while (ptr != NULL)
		{
				puts(ptr);
				ptr = my_strtok(NULL, s2);
		}
		return 0;
}
