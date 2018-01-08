#include <stdio.h>

void main(void)
{
	puts("helloworld");	//helloworld字符串的首地址,从首地址开始putchar输出字符,自导遇到'\0',停止输出
	puts("itcast");
	//puts(10);	//10被puts理解成内存地址,putchar从10这个地址里取数据输出,但是10这个地址,受保护
	int passwd = 123;
	char buf[3];	//数组名的本质表示这个数组的首地址,buf是个地址
	gets(buf);
	printf("%s", buf);

	puts(buf);

	printf("%d", passwd);
}
