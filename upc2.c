#include <stdio.h>

int main(void) {
	int i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11, first, last, total;
	printf("Enter the first 11 digits of a UPC: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&i1,&i2,&i3,&i4,&i5,&i6,&i7,&i8,&i9,&i10,&i11);
	
	first = i1+i3+i5+i7+i9+i11;
	last = i2+i4+i6+i8+i10;
	
	total = 3*first + last;
	
	printf("Check digit: %d\n", 9 - ((total-1)%10));
	
	return 0;
}
