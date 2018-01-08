#include <stdio.h>

void main()
{
	int s = 0, n;
	for (n=1; n<=100; n+=2)
		s+=n*(n+1);
	printf("s=%d\n", s);
}
