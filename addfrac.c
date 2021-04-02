#include <stdio.h>

int main(void) {
	int x1,x2,y1,y2,total_x,total_y;
	
	printf("Enter first fraction: ");
	scanf("%d %d",&x1,&y1);
	printf("Enter second fraction: ");
	scanf("%d %d",&x2,&y2);

	
	total_x = (x1*y2) + (x2*y1);
	total_y = y1*y2;
	
	printf("The sum is %d/%d\n",total_x,total_y);
	return 0;
}
