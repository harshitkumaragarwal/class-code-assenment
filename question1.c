#include <stdio.h>

unsigned long long factorial_recursive(int num) {
    if (num == 0)
        return 1;
    else
        return num * factorial_recursive(num - 1);
}

unsigned long long factorial_iterative(int num) {
    unsigned long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

unsigned long long binomial_coefficient(int n, int r) {
    return factorial_iterative(n) / (factorial_iterative(r) * factorial_iterative(n - r));
}

int main() {
    int n_values[] = {5, 6, 7};
    int r_values[] = {0, 1, 2, 3, 4, 5, 6, 7};
    
    printf("n\tBinomial Coefficient C(n,r)\n");
    printf("---\n");
    
    for (int i = 0; i < sizeof(n_values)/sizeof(n_values[0]); i++) {
        int n = n_values[i];
        for (int j = 0; j <= n; j++) {
            int r = j;
            unsigned long long fact_rec = factorial_recursive(n);
            unsigned long long fact_itr = factorial_iterative(n);
            unsigned long long C = binomial_coefficient(n, r);
            
            printf("%d\t%d\t%llu\t\t%llu\t\t%llu\n", n, r, fact_rec, fact_itr, C);
        }
    }
    
    return 0;
}
