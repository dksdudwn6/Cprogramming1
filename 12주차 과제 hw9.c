#include <stdio.h>

char swapCase(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    else if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A');
    }
    else {
        return c; 
    }
}

int main() {
    char input[1000];

    printf("Input> ");
    fgets(input, sizeof(input), stdin);

    for (int i = 0; input[i] != '\0'; i++) {
        input[i] = swapCase(input[i]);
    }

    printf("Output> %s\n", input);

    return 0;
}
