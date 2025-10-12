#include <stdio.h>

int main() {
    int n1, n2;
    int reversed1 = 0, reversed2 = 0;
    int remainder1, remainder2;
    int sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    while (n1 != 0) {
        remainder1 = n1 % 10;
        reversed1 = reversed1 * 10 + remainder1;
        n1 = n1 / 10;
    }

    while (n2 != 0) {
        remainder2 = n2 % 10;
        reversed2 = reversed2 * 10 + remainder2;
        n2 = n2 / 10;
    }

    sum = reversed1 + reversed2;

    printf("Reversed number 1: %d\n", reversed1);
    printf("Reversed number 2: %d\n", reversed2);
    printf("Sum of reversed numbers: %d\n", sum);

    return 0;
}
