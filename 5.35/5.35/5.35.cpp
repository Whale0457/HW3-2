#include <stdio.h>
unsigned long long int fibonacci(unsigned int n) {
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else {
		unsigned long long int a = 0, b = 1, c;
		for (unsigned int i = 2; i <= n; i++) {
			c = a + b;
			a = b;
			b = c;
		}
		return b;
	}
}
int main() {
	unsigned int number;
	printf("�п�J�@�ӼƦr�G");
	scanf("%u", &number);
	printf("�ӼƦr���������i�ǫ��ƦC�Ȭ��G%llu\n", fibonacci(number));
	return 0;
}