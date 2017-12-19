#include <stdio.h>

void main(void)
{
	int a = 10;
	char b = 'x';
	short c = 3;
	float d = 3.14;
	double e = 6.12345;
	long f = 1234;
	long long g = 123456;
	int num;

	//sizeof 既可以测变量的存储空间大小,也可以测类型的存储空间大小
	num = sizeof(int);
	printf("int %d\n", num);

	num = sizeof(long long);
	printf("long long %d\n", num);

	num = sizeof(a);
	printf("int a %d\n", num);

	num = sizeof(b);
	printf("char b %d\n", num);

	num = sizeof(c);
	printf("short c %d\n", num);

	num = sizeof(d);
	printf("float d %d\n", num);

	num = sizeof(e);
	printf("double e %d\n", num);

	num = sizeof(f);
	printf("long f %d\n", num);

	num = sizeof(g);
	printf("long long g %d\n", num);
}
