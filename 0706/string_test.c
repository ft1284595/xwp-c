#include <stdio.h>
#include <string.h>

int main01(void)
{
	char str[5] = "hello";
	printf("%s\n", str);//有3种可能,(1)正常显示hello，(2)hello后面有乱码(3)hello后程序崩溃

	char str1[10] = "hello"; //可以正常工作
	printf("%s\n", str1);

	return 0;
}

int main02(void)
{
	char str[5] = "hello";
	int len = strlen(str);
	printf("%d\n", len);
	printf("%p\n", str);
	printf("%s\n", str);

	return 0;
}

int main03(void)
{
	char *p = "beautiful";
	printf("%c\n", *p++);
	printf("%c\n", *p);
	printf("%s\n", p);
	//*++p;
	//printf("%c\n", ++(*p));	//段错误 'b'=>98 => 98 = 98 +1
	//printf("%c\n",(*p)++);	//错误代码

	return 0;
}

int main04(void)
{

	char str[] = "hello";
	str[0] = 'H';
	printf("%s\n", str);

	printf("*****************\n");

	char *str1 = "hello";
	*str1 = 'H';		//错误
	printf("%s\n", str1);

	return 0;
}

int main(void)
{
	///*
	char str[] = "hello";
	while(*str != '\0')
		putchar(*str++);	//编译错误, lvalue required as increment operand
	//*/

	char *str = "hello";
	while(*str != '\0')
		putchar(*str++);
	return 0;
}

int main06(void)
{
	/*
	char str[20];
	str = "nice";	//错误 assignment to expression with array type
	*/

	char *str;
	str = "nice";

	return 0;
}
