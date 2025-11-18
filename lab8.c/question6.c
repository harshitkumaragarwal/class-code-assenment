#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'Z';

    int *pInt = &a;
    float *pFloat = &b;
    char *pChar = &c;

    printf("Initial Address");
    printf("pInt   = %p\n", pInt);
    printf("pFloat = %p\n", pFloat);
    printf("pChar  = %p\n", pChar);
    
    pInt++;
    pFloat++;
    pChar++;

    printf("After Increment");
    printf("pInt   = %p (increased by %zu bytes)\n", pInt, sizeof(int));
    printf("pFloat = %p (increased by %zu bytes)\n", pFloat, sizeof(float));
    printf("pChar  = %p (increased by %zu bytes)\n", pChar, sizeof(char));

    pInt--;
    pFloat--;
    pChar--;

    printf("\n---- After Decrement (back to original) ----\n");
    printf("pInt   = %p\n", pInt);
    printf("pFloat = %p\n", pFloat);
    printf("pChar  = %p\n", pChar);

    return 0;
}
