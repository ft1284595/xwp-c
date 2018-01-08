#include <stdio.h>

void main()
{
	char c;
	do
	{
		c = getchar();
		if(c >= 'A' && c <= 'Z')
			c+=32;
		putchar(c);
	}while(c!='\n');
}
