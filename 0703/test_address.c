#include <stdio.h>

int main(void)
{
	char c = 'a';
	int i = 0;
	printf("sizeof(int)=%ld\n", sizeof(int));
	printf("&i=\t%p\n", &i);
	printf("&i=\t%x\n", &i);
	printf("&i+1=\t%p\n", &i+1);


	printf("sizeof(char)=%ld\n", sizeof(char));
	printf("&c=\t%p\n", &c);
	printf("&c+1=\t%p\n", &c+1);

	printf("sizeof(&i)=%ld\n", sizeof(&i));

	return 0;
}
