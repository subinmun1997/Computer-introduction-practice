#include <stdio.h>

int main(void) {
	int num, first, last;
	printf("Enter a two-digit number: ");
	scanf("%d", &num);
	
	first = num/10;
	last = num%10;
	
	printf("The reversal is: %d%d\n",last,first);
	
	return 0;
}
