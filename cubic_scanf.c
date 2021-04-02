#include <stdio.h>

int main(void) {
	
	int height, length, width, volume;
	
	printf("Enter height of box: ");
	scanf("%d",&height);
	printf("Enter length of box: ");
	scanf("%d",&length);
	printf("Enter width of box: ");
	scanf("%d",&width);
	
	volume = height * length * width;
	
	printf("Volume (cubic inches): %d\n", volume);
	return 0;
}
