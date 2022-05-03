/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
#include<string.h>
int main(){
	char strss[5];
	char *strcs[5];
	printf("strss= %s\n",strss);
	printf("strcs= %s\n",strcs);
	printf("strlen(strss)= %d\n",strlen(strss));
	printf("strlen(strcs)= %d\n",strlen(strcs));

	printf("address of strss = %lld\n",strss);
	printf("address of &strss = %lld\n",&strss);
	printf("address of strss[0] = %lld\n",&strss[0]);
	printf("address of strcs = %lld\n",strcs);
	printf("address of &strcs = %lld\n",&strcs);
	printf("address of strcs[0] = %lld\n",&strcs[0]);

	return 0;
}
