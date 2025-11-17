#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'X';
    
    int *pInt = &a;
    float *pFloat = &b;
    char *pChar = &c;

    printf("Integer value: %d\n", a);
    printf("Integer pointer address: %p\n", pInt);
    printf("Value at integer pointer: %d\n\n", *pInt);

    printf("Float value: %.2f\n", b);
    printf("Float pointer address: %p\n", pFloat);
    printf("Value at float pointer: %.2f\n\n", *pFloat);

    printf("Char value: %c\n", c);
    printf("Char pointer address: %p\n", pChar);
    printf("Value at char pointer: %c\n", *pChar);

    return 0;
}
