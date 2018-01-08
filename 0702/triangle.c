#include <stdio.h> 
int main(void) 
{ 
	
	int i = 0, k=0, m = 0;
	int j = 6;
	
	printf("please a number:");
	scanf("%d", &j);

	for(k=1; j>=1; j--,k++){
		for(m=k-1;m>0;m--)
			printf(" ");
		for(i=1;i<=2*j-1;i++){
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n-------------triangle--------------\n"); printf("\n"); printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");

	printf("***********");
	printf("\n");
	printf(" *********");
	printf("\n");
	printf("  *******");
	printf("\n");
	printf("   *****");
	printf("\n");
	printf("    ***");
	printf("\n");
	printf("     *");
	printf("\n");
	
	return 0;
}
