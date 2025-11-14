#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, temp, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0) {
        count++;
        temp /= 10;
    }

    int *arr = (int *)malloc(count * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < count; i++) {
        arr[i] = num % 10;
        num /= 10;
    }

    printf("Reversed number = ");
    for (int i = 0; i < count; i++) {
        printf("%d", arr[i]);
    }

    free(arr);
    return 0;
}
