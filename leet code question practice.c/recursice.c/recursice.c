#include <stdio.h>

void findMaxGroup(int arr[], int index, int n, int *maxSum, int *maxIndex) {
    if (index >= n)
        return;

    int sum = 0;
    for (int i = index; i < index + 3 && i < n; i++) {
        sum += arr[i];
    }

    printf("Sum of group %d = %d\n", (index / 3) + 1, sum);

    if (sum > *maxSum) {
        *maxSum = sum;
        *maxIndex = index;
    }

    findMaxGroup(arr, index + 3, n, maxSum, maxIndex);
}

int main() {
    int arr[12];
    int maxSum = 0, maxIndex = 0;

    printf("Enter 12 elements:\n");
    for (int i = 0; i < 12; i++) {
        scanf("%d", &arr[i]);
    }

    findMaxGroup(arr, 0, 12, &maxSum, &maxIndex);

    printf("\nGroup with maximum sum (%d): ", maxSum);
    for (int i = maxIndex; i < maxIndex + 3; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
