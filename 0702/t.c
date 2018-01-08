#include <stdio.h>
/*
int main1(int argc, char *argv[])
{

	//R G B
	//8 8 8
	 
	// al	R	G	B	
	switch(屏幕颜色位数)
	{
		case 32: *(pos+3) = color >> 24;
		case 24: *(pos + 2) = color >> 16;
		case 16: *(pos + 1) = color >> 8;
		case 8:	 *(pos) = color;
	}

	return 0;
}
*/

int main(void)
{
	int i, j;
	for(i=1;i<=9;i++)
	{
		for(j=1; j<=9;j++)
		{
			if(i >= j)
				printf("%3d", i*j);
		}
		printf("\n");
	}

	return 0;
}
