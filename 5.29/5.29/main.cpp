#include <stdio.h>
#include <stdlib.h>
unsigned int gcd(unsigned int a, unsigned int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}
unsigned int lcm(unsigned int a, unsigned int b) {
	return (a * b) / gcd(a, b);
}
int main() {
	unsigned int num1, num2;
	printf("請輸入兩個整數：");
	scanf("%u %u", &num1, &num2);
	unsigned int result = lcm(num1, num2);
	printf("最小公倍數：%u\n", result);
	return 0;
}