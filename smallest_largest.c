#include <stdio.h>

int main(void) {
	int n1,n2,n3,n4,small1,small2,large1,large2;
	int smallest, largest;
	printf("Enter four integers: ");
	scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
	
	if(n1<n2) {
		small1 = n1;
		large1 = n2;
	} else {
		small1 = n2;
		large1 = n1;
	}
	
	if(n3<n4) {
		small2 = n3;
		large2 = n4;
	} else {
		small2 = n4;
		large2 = n3;
	}
	
	if(small1 < small2)
		smallest = small1;
	else
		smallest = small2;
	
	if(large1 < large2)
		largest = large2;
	else
		largest = large1;
		
	printf("Largest: %d\n", largest);
	printf("Smallest: %d\n",smallest);
	
	return 0;
}
