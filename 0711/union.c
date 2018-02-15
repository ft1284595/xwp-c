#include <stdio.h>

union ITEM{
	int price;
	char name[20];
};

int main(void)
{
	union ITEM a, b;
	a.price = 50;
	strcpy(b.name, "sprite");
	printf("%ld\n", sizeof(a));

	return 0;
}
