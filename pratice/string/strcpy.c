#include <stdio.h>
#include <string.h>

int main(void)
{
	//char dest[10];
	//char *dest;	//这里的dest是野指针,指向的区域没有可读写空间
	//#define NULL (void *)0
	//char *dest = NULL;	//这里的dest是野指针,指向的区域没有可读写空间
	//char dest[3];
	//char src[] = "hello";
	
	char str1[10] = "hello";
	//char str2[10] = str1;		//错误写法
	strcpy(str2, str1);

	printf("%s\n", str2);

	//printf("%s\n",strcpy(dest, src));
	printf("%s\n",strncpy(dest, src, sizeof(dest)));

	return 0;
}
