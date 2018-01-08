#include <stdio.h>

int max(int a, int b)
{
	printf("%p\t%p\n", &a, &b);
	return a > b ? a : b;
}

void main(void)
{
	int c = 3, d = 5, res;
	
	printf("&res=%p\n", &res);
	printf("%p\t%p\n", &c, &d);
	res = max(c, d);
	printf("%d\n", res);
	printf("&res=%p\n", &res);
}
