#include <stdio.h>

//int main(void)
int main(int argc, char *argv[])
{
	char buf[1024];
	FILE *fp;
	//fp = fopen("hellotest", "r");
	fp = fopen(argv[1], "r");

	if(fp == NULL){
		printf("open file err\n");	
		return -1;
	}

	//fgets(buf, 1024, fp);
	/*
	fgets(buf, sizeof(buf), fp);
	printf("%s", buf);
	*/
	while(fgets(buf, sizeof(buf), fp) != NULL)
		fputs(buf, stdout);
		//printf("%s", buf);
		

	//printf("%s", fgets(buf, sizeof(buf), fp));
	fclose(fp);

	return 0;


}
