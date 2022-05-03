#include <stdio.h>
#if 0
int main()
{
	char char_array[5] = {'H', 'E', 'L', 'L', 'O'};
	printf("arr= %s\n", char_array);

	char str1[6] = {'H', 'E', 'L', 'L', 'O', '\0'};
	printf("str1= %s\n", str1);

	char str2[] = {'H', 'E', 'L', 'L', 'O', '\0'};
	printf("str2= %s\n", str2);

#if 0
	char str3[6] = {"H", "E", "L", "L", "O", "\0"};
	printf("%s\n", str3);
#endif

	char str4[6] = {"H" "E" "L" "L" "O" "\0"};
	printf("str4= %s\n", str4);
	printf("str= %lld\n",&str4);

	char str5[5] = {"Hello"};
	printf("str5=%s\n", str5);
	printf("str= %lld\n",&str5);

	char str6[6] = "Hello";
	printf("str6=%s\n", str6);
	printf("str= %lld\n",&str6);

	char str7[] = "Hello";
	printf("str7= %s\n", str7);

	char *str8 = "Hello";
	printf("str8=c%s\n", str8);


	return 0;
}
#endif

#if 1
int main(){
	//char str[6]="12345";
	char str2[]="Hello";
	printf("str2= %lld\n",&str2[3]);
	printf("str2= %lld\n",&str2[0]);
	printf("%s",str2);
	printf("str2= %d\n",strlen(str2));
	printf("str2= %d\n",sizeof(str2));
}
#endif
