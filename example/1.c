#include <stdio.h>

/*
 * 1.十进制数据按照二进制形式输出
*/

int main(void)
{
	int num = 0;
	int i = 0;
	int index = 0;
	int arr[32] = {0};
	printf("please input a num:");
	scanf("%d", &num);

	while(num)
	{
		//if(num / 2 != 0)
		//{
			arr[i] = num % 2;
			num = num / 2;
			if(num)
				++i;
		//}
	}

	for(index=i; index>=0; index--)	
	{
		printf("%d", arr[index]);
	}
	putchar('\n');


	return 0;
}
