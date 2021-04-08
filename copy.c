#include <stdio.h>

int main(void) {
	int n, i, a[50], b[50];
	printf("How many elements? ");
	scanf("%d",&n);
	printf("Enter %d elements: \n",n);
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		b[i] = a[i];
		
	printf("Resultant array elements are:\n");
	for(i=0;i<n;i++)
		printf("%d ",b[i]);
		
	return 0;
}
