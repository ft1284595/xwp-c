#include <stdio.h>
struct ITEM{
	int a[10];
};

int main(void)
{
	int i;
	struct ITEM tmp1 = {1,2,3,4,5,6,7};
	struct ITEM tmp2;
	tmp2 = tmp1;

	for(i=0; i<10; i++)
	{
		printf("%d\t", tmp2.a[i]);
	}
	putchar('\n');

	return 0;

}
