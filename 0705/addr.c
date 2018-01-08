#include <stdio.h>
/*
void swap(int a, int b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}
*/

void swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void)
{
	int a = 3, b = 5;
	//swap(a,b);	//3, 5 传值
	swap(&a, &b);	//&a, &b 传址
	printf("a = %d\tb = %d\n", a, b);

	return 0;
}
