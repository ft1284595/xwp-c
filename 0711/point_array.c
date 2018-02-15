#include <stdio.h>

int main1(void)
{
	int a[10] = {1,2,3,4,5,6,7,8,9,0};
	int (*p)[10];	//先算小括号,p和*结合,属于指针类型,指针指向拥有10个int型元素的数组
	//p = a;
	p = &a;

	printf("%ld\t%ld\n", sizeof(p), sizeof(*p));
	printf("%d\n", (*p)[3]);

	return 0;

}


int main2(void)
{
	char str[3][20] = {"hello", "world", "itcast"};
	char (*p)[20];
	p = &str[0];

	printf("%s\n", *(p+1));

	return 0;
}

//void fun(char a[][20], int n)	//数组指针传参时等价于二维数组
void fun(char (*a)[20], int n)
{
	int i;
	for(i=0; i<n; i++)
		scanf("%s", a[i]);
	return;
}

int main(void)
{
	int i;
	char s[3][20];
	fun(s,3);
	for(i=0; i<3; i++)
		printf("%s\n", s[i]);
	return 0;
}
