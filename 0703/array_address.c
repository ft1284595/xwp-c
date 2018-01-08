#include <stdio.h>

int main(void)
{
	int a[10];
	int b = 3;
	printf("%p\t%p\t%p\n", &a[0], a, &a);
	//printf("%d\t%p\n", b,  &b);

	printf("&a[0]+1=%p\ta+1=%p\t&a+1=%p\n", &a[0]+1, a+1, &a+1);
	printf("&(&a)+1=%p\t\n", &(&a)+1);

	return 0;
}
