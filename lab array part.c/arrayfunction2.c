#include <stdio.h>
void countPosNeg(int arr[], int n, int *positive, int *negative) {
    *positive = 0;
    *negative = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)
            (*positive)++;
        else if (arr[i] < 0)
            (*negative)++;
    }
}
void countEvenOdd(int arr[], int n, int *even, int *odd) {
    *even = 0;
    *odd = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            (*even)++;
        else
            (*odd)++;
    }
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int positive, negative, even, odd;

    countPosNeg(arr, n, &positive, &negative);
    countEvenOdd(arr, n, &even, &odd);

    printf("Count of positive numbers: %d\n", positive);
    printf("Count of negative numbers: %d\n", negative);
    printf("Count of even numbers: %d\n", even);
    printf("Count of odd numbers: %d\n", odd);

    return 0;
}
