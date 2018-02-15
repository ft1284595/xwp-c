#include <stdio.h>

int main(void)
{
	//char arr[10] = "hello";
	char str[20] = "helloworld";
	char *arr = "hello";
	while(*arr != '\0')
		putchar(*arr++);	//arr = arr+1

	return 0;
}
