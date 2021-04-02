#include <stdio.h>

int main(void) {
	float loan, rate, payment, first, second, third;
	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	printf("Enter interest rate: ");
	scanf("%f", &rate);
	printf("Enter monthly payment: ");
	scanf("%f", &payment);
	
	first = (loan-payment)+(loan*0.06/12);
	second = (first-payment)+(first*0.06/12);
	third = (second-payment)+(second*0.06/12);
	
	printf("Balance remaining after first payment: %.2f\n",first);
	printf("Balance remaining after first payment: %.2f\n",second);
	printf("Balance remaining after first payment: %.2f\n",third);
	return 0;
}
