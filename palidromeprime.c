#include <stdio.h>
#include <math.h>

// Function to check if number is palindrome
int isPalindrome(int n) {
    int original = n, reversed = 0, remainder;
    while (n > 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    return (original == reversed);
}

// Function to check if number is prime
int isPrime(int n) {
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

// Function to check if number is Armstrong
int isArmstrong(int n) {
    int original = n, sum = 0, digits = 0, temp = n;

    // Count number of digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp > 0) {
        int remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    return (sum == original);
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Check for first number
    printf("\nResults for %d:\n", num1);
    if (isPalindrome(num1))
        printf("→ Palindrome number\n");
    else
        printf("→ Not a Palindrome number\n");

    if (isPrime(num1))
        printf("→ Prime number\n");
    else
        printf("→ Not a Prime number\n");

    if (isArmstrong(num1))
        printf("→ Armstrong number\n");
    else
        printf("→ Not an Armstrong number\n");

    // Check for second number
    printf("\nResults for %d:\n", num2);
    if (isPalindrome(num2))
        printf("→ Palindrome number\n");
    else
        printf("→ Not a Palindrome number\n");

    if (isPrime(num2))
        printf("→ Prime number\n");
    else
        printf("→ Not a Prime number\n");

    if (isArmstrong(num2))
        printf("→ Armstrong number\n");
    else
        printf("→ Not an Armstrong number\n");

    return 0;
}
