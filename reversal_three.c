#include <stdio.h>

int main(void) {
	int num, first, mid, last;
	
	printf("Enter a three-digit number: ");
	scanf("%d", &num);
	
	first = num/100;
	mid = (num%100)/10;
	last = (num%100)%10;
	
	printf("The reversal is %d%d%d\n",last,mid,first);
	
	return 0;
}
