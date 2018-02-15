#include <stdio.h>
#include <unistd.h>

int main(void)
{
	FILE *fp;
	fp = fopen("abc", "w");
	fputs("helloworld", fp);

	sleep(5);
	fclose(fp);
	//fflush(fp);

	while(1)
		;
		
	fclose(fp);
	return 0;
}
