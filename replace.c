#include <stdio.h>

int main(void) {
	int n, i, a[50], pos;
	printf("How many elements: ");
	scanf("%d",&n);
	printf("Enter %d elements: \n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the position: ");
	scanf("%d",&pos);
	if(pos<0 || pos>n-1)
		printf("Invalid position");
	else {
		printf("Enter the new elements: ");
		scanf("%d", &a[pos]);
		printf("The resultant array :\n");
		for(i=0;i<n;i++)
			printf("%d ",a[i]);
	}
	return 0;
}
