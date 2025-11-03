
#include <stdio.h>

// Defining structure
struct Complex {
    float real;
    float imag;
};

int main() {
    struct Complex n1, n2, sum;

    // Input two complex numbers
    printf("Enter first complex number (real and imaginary): ");
    scanf("%f %f", &n1.real, &n1.imag);

    printf("Enter second complex number (real and imaginary): ");
    scanf("%f %f", &n2.real, &n2.imag);

    // Calculate sum
    sum.real = n1.real + n2.real;
    sum.imag = n1.imag + n2.imag;

    // Display result
    printf("\nSum = %.2f + %.2fi\n", sum.real, sum.imag);

    return 0;
}
