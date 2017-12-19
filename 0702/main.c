#include <stdio.h>	//系统默认存放头文件的路径找stdio.h
#include <math.h>
#include <string.h>
#include "sum.h"	//在当前目录下找,如果没找到,再去系统默认路径下找

int main(void)
{
	int a = 3, b = 4;
	int res;
	res = add(a,b);
	printf("%d\n", res);

	return 0;
}
