#include <stdio.h>
#include <stdbool.h>

int main(void) {
	bool found = false;
	int n, i, a[50], value;
	
	printf("How many elements? ");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	printf("Enter value to search: ");
	scanf("%d",&value);
	
	for(i=0;i<n;i++)
		if(a[i] == value)
			found = true;
			
	if(found == true)
		printf("\n%d is in the array.\n",value);
	else
		printf("\n%d is not in the array.\n",value);
		
	return 0;
}
