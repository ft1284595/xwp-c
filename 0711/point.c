#include <stdio.h> 
int main(void)
{
	int a[10];
	char *array[] = {"hello", "world", "itcast"};
	int i;
	printf("%ld\n", sizeof(array));
	char *tmp;
	printf("%ld\n", sizeof(tmp));
	for(i=0; i<3; i++)
		printf("%s\n", array[i]);

	return 0;
}
