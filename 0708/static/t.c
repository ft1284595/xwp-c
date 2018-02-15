#include <stdio.h>

extern int fun(void);
static int c = 3;

int foo(void)
{
	int b = 3;
	printf("%d\n",c);
}

int main(void)
{
	int a = 100;
	c = 10;
	//fun();
	foo();
	//while(1);

	return 0;
}
