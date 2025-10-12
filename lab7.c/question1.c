#include <stdio.h>

unsigned long long factorial(int num) {
    unsigned long long fact = 1;
    for (int i = 1; i <= num; i++)
        fact *= i;
    return fact;
}

unsigned long long binomial_coefficient(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n_values[] = {5, 6, 7};

    printf("n\tr\tC(n,r)\n");

    for (int i = 0; i < sizeof(n_values)/sizeof(n_values[0]); i++) {
        int n = n_values[i];
        for (int r = 0; r <= n; r++) {
            unsigned long long C = binomial_coefficient(n, r);
            printf("%d\t%d\t%llu\n", n, r, C);
        }
    }

    return 0;
}
