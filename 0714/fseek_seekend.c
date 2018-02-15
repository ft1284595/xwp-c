#include <stdio.h>

int main(void)
{
	FILE *fp;
	fp = fopen("itcast", "w+");

	//fseek(fp, -1, SEEK_SET);	//这种设定无意义,应为文件开头再-1,没意义
	fseek(fp, 1000, SEEK_END);	//拓展一个文件,下载文件前开辟文件空间
	//fputc('\0', fp);

	fclose(fp);
	return 0;
}
