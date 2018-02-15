#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "hello world itcast";
	char key;
	printf("%s\n", str);
	key = getchar();
	char *p = NULL;
	p = strchr(str, key);
	//if(p == NULL)
	if(!p)
		printf("not found.\n");
	else
		printf("%s\n", p);

	//!p ? printf("not found.\n") : printf("%s\n", p);
	return 0;
}
