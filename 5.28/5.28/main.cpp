#include <stdio.h>
#include <stdlib.h>
char change_case(char c) {
	if (c >= 'A' && c <= 'Z') {
		return c + 32;
	}
	else if (c >= 'a' && c <= 'z') {
		return c - 32;
	}
	else {
		return c;
	}
}
int main() {
	char input;
	printf("請輸入一個字母：");
	scanf("%c", &input);
	char changed = change_case(input);
	printf("轉換結果：%c\n", changed);
	return 0;
}