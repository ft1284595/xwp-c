#include <stdio.h>

void main(void)
{
	int num;
	printf("&num=%p\tnum=%d\n", &num, num);
	scanf("%d", &num);
	printf("&num=%p\tnum=%d\n", &num, num);

}
