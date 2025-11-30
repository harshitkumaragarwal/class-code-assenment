#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, pos, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory dynamically
    int *arr = (int*)malloc((n + 1) * sizeof(int));

    if (arr == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    printf("Enter position to insert (1-based index): ");
    scanf("%d", &pos);

    // Shift elements to the right
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[pos - 1] = element;  // take some help of chat gpt

    n++; // new size after insertion

    printf("\nArray after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
