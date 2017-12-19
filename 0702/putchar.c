#include <stdio.h>

void main(void)
{
	putchar('a');
	putchar('b');
	putchar('c');
	putchar('\n');

	char ch = 'x';
	putchar(ch);
	putchar(65);
	putchar('A');

	while(1)
	{
		ch = getchar();
		putchar(ch+1);
		getchar();	//过滤回车
	}

}

