#include <stdio.h>

int main(void) {
	
	int height, length, width, volume;
	
	height=8;
	length=12;
	width=10;
	
	volume = height*length*width;
	
	printf("Dimensions: %d x %d x %d\n",height,length,width);
	printf("Volume (cubic inches): %d\n",volume);
	
	return 0;
}
