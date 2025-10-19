#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", (ptr + i)); 
    }

    int positive = 0, negative = 0, even = 0, odd = 0;

    for (i = 0; i < n; i++) {
        if (*(ptr + i) > 0)
            positive++;
        else if (*(ptr + i) < 0)
            negative++;

        if (*(ptr + i) % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("\nCount of positive numbers: %d", positive);
    printf("\nCount of negative numbers: %d", negative);
    printf("\nCount of even numbers: %d", even);
    printf("\nCount of odd numbers: %d\n", odd);

    return 0;
}
