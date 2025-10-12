#include <stdio.h>

int ISPRIME(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

void PRINT_PRIMES(int start, int end) {
    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (ISPRIME(i)) {  
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int lower, upper;

    printf("Enter the range (start and end): ");
    scanf("%d %d", &lower, &upper);

    PRINT_PRIMES(lower, upper);  

    return 0;
}
