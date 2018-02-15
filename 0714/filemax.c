#include <stdio.h>

int main(void)
{
	FILE *fp;
	int i;
	char filename[256];
	for(i=0; 1; i++)
	{
		sprintf(filename, "test%d", i);
		fp = fopen(filename, "w");
		if(fp == NULL)
			return -1;
		printf("%d\n", i);
	}

	return 0;
}
