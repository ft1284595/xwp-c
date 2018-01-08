#include <stdio.h>

int main(void)
{
	int i = 3;
	int *p;
	p = &i;
	printf("&i = %p\n", &i);
	printf("p = %p\t*p = %d\n", p, *p);

	return 0;
}
