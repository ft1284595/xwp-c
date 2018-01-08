#include <stdio.h>

void main(void)
{
	int num;
	scanf("%d", &num);

	switch(num)
	//switch(110L)
	{
		case 10:
			printf("aaaaaaaaaaa\n");
			break;
		case 20:
			printf("bbbbbbbbbbb\n");
			break;
		case 30:
			printf("ccccccccccc\n");
			break;
		case 50:
			printf("ddddddddddd\n");
			break;

		default:
			printf("helloworld\n");
	}

}
