#include <stdio.h>

int main(void) {
	int i=1, n;
	
	printf("This program prints a table of squares.\n\n");
	printf("Enter number of entries in table: ");
	scanf("%d",&n);
	
	while(i<=n) {
		printf("%d   %d\n",i,i*i);
		i++;
	}
	return 0;
}
