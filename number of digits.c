#include <stdio.h>

int main(void) {
	int num, count=0;
	printf("Enter a nonnegative integer: ");
	scanf("%d",&num);
	
	do {
		num = num/10;
		count++;
	}while(num>0);
	
	printf("The number has %d digit(s).\n",count);
	
	return 0;
}
