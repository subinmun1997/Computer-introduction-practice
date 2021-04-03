#include <stdio.h>

int main(void) {
	int i, n;
	
	printf("This program prints a table of squares.\n\n");
	printf("Enter number of entries in table: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
		printf("%d %d\n",i,i*i);
}
