#include <stdio.h>
void findLargest(int *arr, int n, int *largest, int *second);

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest, second;
    findLargest(arr, n, &largest, &second);

    printf("\nLargest element = %d", largest);
    printf("\nSecond largest element = %d\n", second);

    return 0;
}
void findLargest(int *arr, int n, int *largest, int *second) {
    *largest = *arr;
    *second = *(arr + 1);
    
    if (*second > *largest) {
        int temp = *largest;
        *largest = *second;
        *second = temp;
    }

    for (int i = 2; i < n; i++) {
        if (*(arr + i) > *largest) {
            *second = *largest;
            *largest = *(arr + i);
        }
        else if (*(arr + i) > *second && *(arr + i) < *largest) {
            *second = *(arr + i);
        }
    }
}
