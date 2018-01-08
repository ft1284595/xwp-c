#include <stdio.h>

/*
 * 1.printf函数基本使用,分别使用后续格式控制字 %d %x %f \t \n \b
 * (1)	将整形值7,100,27,以多种格式打印到屏幕 %d %x %f
 * (2)	%f练习,打印17.2365
 * (3)	打印字符串%d,单引号,双引号
 * (4)	使用sizeof()函数测试打印各种数据类型在32/64平台计算机上所占字节长度
 *
 */

 int main(void)
 {
	//(1)
	int i;
	i = 7;
	printf("i=%d\n", i);
	printf("i=%x\n", i);
	printf("i=%f\n", i);
	
	i = 100;
	printf("i=%d\n", i);
	printf("i=%x\n", i);
	printf("i=%f\n", i);

	i = 27;
	printf("i=%d\n", i);
	printf("i=%x\n", i);
	printf("i=%f\n", i);
	
	return 0;
 }
