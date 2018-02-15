#include <stdio.h>


int main(void)
{
	char *array[30] = {"hello", "world", "tyler"};
	char double_array[][30] = {"niuniu", "doudou","chouchou"};
	printf("%ld\n", sizeof(array));
	printf("%p\t%p\n", &array, array);

	char (*p)[30];
	printf("%ld\n", sizeof(p));
	printf("%p\t%p\n", &p, p);

	//p = double_array;
	p = array;
	printf("%s\n", array[0]);
	printf("-------1-------\n");

	printf("%s\n", (*p));
	printf("-------2-------\n");
	//printf("%s\n", (*p)+1);
	//printf("%s\n", (*p+1));
	printf("%s\n", (*p)[1]);
	printf("-------3-------\n");
	printf("%s\n", (*(p[0])));
	printf("++++++++++++++\n");

	return 0;
}
