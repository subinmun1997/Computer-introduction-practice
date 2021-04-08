#include <stdio.h>

int main(void) {
	int i;
	int values[5];
	
	printf("Enter 5 integers: ");
	
	for(i=0;i<5;i++) {
		scanf("%d",&values[i]);
	}
	
	printf("Displaying integers: ");
	
	for(i=0;i<5;i++) {
		printf("%d ",values[i]);
	}
	return 0;
}
