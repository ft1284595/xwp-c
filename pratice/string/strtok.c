#include <stdio.h>
#include <string.h>

/*
int main(void)
{
	char str[] = "hello world itcast good";
	char *p; 
	
	p = strtok(str, " ");
	printf("%s\n", p);
	while((p = strtok(NULL, " ")) != NULL)
		printf("%s\n", p);
	//strtok(str, " ");
	//printf("str = %s\n", str);

	return 0;
}
*/

/*
int main(void)
{
	char str[] = "hello, world, itcast! good.; night?";
	char *dlim = " .?!,;";
	//char dlim[] = " .?!.;";
	char *p; 
	
	p = strtok(str, dlim);
	printf("%s\n", p);
	while((p = strtok(NULL, dlim)) != NULL)
		printf("%s\n", p);
	//strtok(str, " ");
	//printf("str = %s\n", str);

	return 0;
}
*/

/*
size_t strlen(const char *str)
{
	return 6;
}
*/

int main(void)
{
	char str[] = "hello world itcast good night";
	char tmp[] = "I am a student\n";
	char *dlim = " ";
	char *p; 

	//printf("%d\n", (int)strlen(str));
	
	p = strtok(str, dlim);
	printf("%s\n", p);

	p = strtok(tmp, dlim);
	printf("%s\n", p);
	while((p = strtok(NULL, dlim)) != NULL)
		printf("%s\n", p);

	return 0;
}

