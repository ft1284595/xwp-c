#include <stdio.h>

void main(void)
{
	//printf("%d\n", 3);
	//printf("%d%d\n", 3,5);
	//printf("%d%d%d\n", 3,5);
	//printf("%d%d\n", 3,5,10);
	printf("%4d%4d\n", 1, 23);	//右对齐,占4位
	printf("%-4d%-4d\n", 1, 23);	//左对齐,占4位
	printf("%04d%04d\n", 1, 23);	//空位用0填充
	printf("%4d\n", 1234567);
	printf("%6.2f\n", 3.1415926);
	printf("%-6.2f\n", 3.1415926);
	printf("%s\n", "helloworld");
	printf("%.2s\n", "helloworld");
	printf("%5.2s\n", "helloworld");
	printf("%-5.2s\n", "helloworld");
	
	long num1 = 1234567;
	printf("%ld\n", num1);

	long long num2 = 1234567;
	printf("%lld\n", num2);

	//char ch = 255;
	char ch = 'a';
	unsigned char ch1 = 255;
	printf("ch=%d\n", ch);

	int num3 = -1;
	printf("%d\t%u\n", num3, num3);

	char item = 'a';
	printf("%c\n", item);
	printf("%c\n", 'b');
	printf("%c\n", "c");
	printf("%10.4s", "hello");
	printf("world");

	printf("\n");

	float a = 3.14;
	double b = 567.89, c = 0.001234;
	printf("%f\n", a);
	printf("%f\n", b);

	printf("%e\n", a);
	printf("%e\n", b);
	printf("%e\n", c);

	printf("%f, %e, %g\n", b,b,b);

	printf("say:\"hello\"\n");
	printf("please input %%d:\n");







	
}
