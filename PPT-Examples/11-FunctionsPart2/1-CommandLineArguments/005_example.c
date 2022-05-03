#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv, char *envp[])
{
		char *p;
		
		setenv("Zrr", "24 20 9 27 5 6", 1);
		printf("%s\n", getenv("Zrr"));
		//unsetenv("Arr");
		//printf("%s\n", getenv("Arr"));
		int i=0;
		while(envp[i]){
			printf("%d. %s\n",i+1,envp[i]);
			i++;
		}
		return 0;
}
