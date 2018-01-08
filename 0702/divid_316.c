#include <stdio.h>

void main(){
	int i=0, j;
	for(;;i++){
		j=(316-i*13) % 11;
		if(!j)
			break;
		printf("13*%d+11*%d=316\n", i, j);
	}
}
