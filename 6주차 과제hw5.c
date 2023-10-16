#include <stdio.h>

void decimalToBinary(int n) {
	if (n == 0) {
		return 0;
	}
	decimalToBinary(n / 2);
	printf("%d", n % 2);
}

int main() {
	int num;

	printf("Please enter a number: ");
	scanf("%d", &num);

	if (num < 0) {
		printf("Please enter a number : \n");
	}
	else if (num == 0) {
		printf("0 \n");
	}
	else {
		printf(" ", num);
		decimalToBinary(num);
		printf("\n");
	}
	return 0;
}

