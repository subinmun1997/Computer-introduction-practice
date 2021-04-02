#include <stdio.h>
#define PI 3.14f

int main(void) {
	float rad;
	printf("Enter the radius: ");
	scanf("%f",&rad);
	
	printf("volume of a sphere: %f\n",(4.0f/3.0f)*PI*rad*rad*rad);
	return 0;
}
