#include <stdio.h>

int main() {
    int n, num, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;  

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", (ptr + i));  
    }

    printf("Enter the number to find frequency: ");
    scanf("%d", &num);

    for (int i = 0; i < n; i++) {
        if (*(ptr + i) == num) {  
            count++;
        }
    }

    printf("The number %d appears %d times.\n", num, count);

    return 0;
}
