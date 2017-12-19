#include <stdio.h>


void main(void)
{
	char passwd[10] = "itcast";
	char str[5];
	char str1[10] = "itcast";

	printf("passwd = %p\t, str = %p\t, str1 = %p\n", passwd, str, str1);

	//printf("%d\n", sizeof(str));
	scanf("%s", str);
	printf("%s\n", str);
	printf("passwd = %s\n", passwd);
}
