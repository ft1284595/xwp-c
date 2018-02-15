#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
int main(void)
{
	int a = 3;
	int*	p = &a;	//int *p
	int*   q;
	q = &a;
	*q = 5;
	printf("%d\n", *p);

	return 0;
}
*/

//void init_array(int a[][10], int l, int c)
void init_array(int (*a)[10], int l, int c)
//void init_array(int a[][], int l, int c)
{
	int i, j;
	srand(time(NULL));
	for(i=0; i<l; i++)
		for(j=0; j<c; j++)
			a[i][j] = rand() % 100;
}

void show_array(int a[][10], int l, int c)
{
	int i,j;
	for(i=0; i<l; i++)
	{
		for(j=0; j<c; j++)
			printf("%d\t", a[i][j]);
		putchar('\n');
	}
}

int main(void)
{
	int a[5][10];
	init_array(a, 5, 10);
	show_array(a, 5, 10);
	
	return 0;
}
