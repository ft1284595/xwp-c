#include <stdio.h>

int main(void)
{
	int a[5] = {1,2,3,4,5};
	int *pa = a;
	int *pb = &a;
	int *pc = &a[0];

	printf("%d\n", *++pa);
	printf("%d\n", *pb++);
	printf("%d\n", ++*pc);

	printf("%d\n", 2[a]);


	return 0;
}
