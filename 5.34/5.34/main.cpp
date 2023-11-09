#include <stdio.h>
#include <stdlib.h>
double power(double base, int exponent) {
	if (exponent == 0) {
		return 1;  // base case: any number raised to the power of 0 is 1
	}
	else if (exponent > 0) {
		return base * power(base, exponent - 1);  // recursion for positive exponents
	}
	else {
		return 1 / base * power(base, exponent + 1);  // recursion for negative exponents
	}
}
int main() {
	double base;
	int exponent;
	printf("Enter the base: ");
	scanf("%lf", &base);
	printf("Enter the exponent: ");
	scanf("%d", &exponent);
	double result = power(base, exponent);
	printf("Result: %.2lf\n", result);
	return 0;
}
