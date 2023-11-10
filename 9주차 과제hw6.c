#include <stdio.h>

int main() {
    int numbers[5];
    int oddCount = 0, evenCount = 0;

    printf("Please input five integers:\n");
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &numbers[i]);
    }

    printf("Odd numbers:");
    for (int i = 0; i < 5; ++i) {
        if (numbers[i] % 2 != 0) {
            printf(" %d", numbers[i]);
            oddCount++;
        }
    }

    printf("\nEven numbers:");
    for (int i = 0; i < 5; ++i) {
        if (numbers[i] % 2 == 0) {
            printf(" %d", numbers[i]);
            evenCount++;
        }
    }

    printf("\n");

    return 0;
}﻿
