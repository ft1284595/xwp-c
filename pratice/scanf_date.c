#include <stdio.h>

int main(void)
{
	char str[11];
	printf("please enter a date(mm/dd/yyyy):");

	scanf("%s", str);

	printf("sizeof(str)=%ld",sizeof(str));

	printf("you entered the date is:%s\n", str);
}
