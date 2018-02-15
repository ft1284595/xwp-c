#include <stdio.h>

//typedef ssize_t int;
typedef ssize_t long long;
//int a = 3;
//ssize_t b = 5;


ssize_t mystrlen(char *str)
{
	//
}

/*
long long mystrlen(char *str)
{
	//
}
*/

int main(void)
{
	char *s = "hello";
	
	printf("%d\n", mystrlen());

	return 0;
}




typedef char*	NEWTYPE;
//#define	NEWTYPE		char *

int main(void)
{
	NEWTYPE		p1, p2, p3;
}
