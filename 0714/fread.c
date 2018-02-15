#include <stdio.h>

struct STU {
	int id;
	char name[20];
	char sex;
};

int main(void)
{
	FILE *fp;
	struct STU a = {10, "xiaoming", 'm'};
	struct STU b;
	fp = fopen("hellotest", "r");
	//fwrite(&a, sizeof(a), 1, fp);
	fread(&b, sizeof(b), 1, fp);
	printf("%d\t%s\t%c\n", b.id, b.name, b.sex);
	fclose(fp);
	return 0;
}
