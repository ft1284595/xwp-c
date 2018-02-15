#include <stdio.h>

int main(void)
{
	int input;
	int flag = 1;
	printf("please input 4 different number:");
	scanf("%s", &input);
	if(inp)

	//printf("the number you input is %d\n", input_num);
	while(flag)
	{
		if(input <=0 || (input/10000>0) || (input/1000==0))
		{
			printf("the number you input is invalid.\n");
			printf("please input 4 different number:\n");
			getchar();
			scanf("%d", &input);
			printf("~~~~%d~~~~", input);

		}else
		{
			flag = 0;
		}
	}
	printf("yes, the number you input is OK.\n");


	return 0;
}
