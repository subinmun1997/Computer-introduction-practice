#include <stdio.h>

int main(void) {
	int a[50],i,n;
	printf("How many elements? ");
	scanf("%d",&n);
	printf("Enter %d elements: \n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	printf("Current elements in array are :");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
		
	printf("\nEnter the new element: ");
	scanf("%d",&a[n]);
	n++;
	printf("\nThe resultant array is: ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}
