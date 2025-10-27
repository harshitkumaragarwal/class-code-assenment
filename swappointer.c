#include <stdio.h>

int main() {
    int a, b;
    int *p1, *p2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Assign addresses to pointers
    p1 = &a;
    p2 = &b;

    // Swap without using a third variable
    *p1 = *p1 + *p2;  // a = a + b
    *p2 = *p1 - *p2;  // b = a - b (original a)
    *p1 = *p1 - *p2;  // a = a - b (original b)

    // Display results
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
