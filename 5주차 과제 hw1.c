#include <stdio.h>

#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) {
        return 0; // 1 ������ ���ڴ� �Ҽ��� �ƴ�
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // num�� i�� ������ �������� �Ҽ��� �ƴ�
        }
    }
    return 1; // �Ҽ���
}

int main() {
    int number;

    printf("���� ������ �Է��ϼ���: ");
    scanf("%d", &number);

    if (is_prime(number)) {
        printf("It is a prime number.\n");
    }
    else {
        printf("It is not a prime number.\n");
    }

    return 0;
}


	





