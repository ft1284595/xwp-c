#include <stdio.h>
#include <string.h>

int main(void)
{
	char buf[5] = "hello";
	size_t len = strlen(buf);
	printf("%ld\n", len);

	return 0;
}
