#include <stdio.h>

int main() {
    int a, b, c, d, limit;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("Ramanujan Numbers up to %d are:\n", limit);

    for (a = 1; a * a * a <= limit; a++) {
        for (b = a; b * b * b <= limit; b++) {
            for (c = a + 1; c * c * c <= limit; c++) {
                for (d = c; d * d * d <= limit; d++) {
                    if (a * a * a + b * b * b == c * c * c + d * d * d &&
                        a * a * a + b * b * b <= limit) {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n",
                               a * a * a + b * b * b, a, b, c, d);
                    }
                }
            }
        }
    }

    return 0;
}

