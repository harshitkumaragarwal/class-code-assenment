#include <stdio.h>

int main() {
    int num, choice;
    int posCount = 0, negCount = 0, zeroCount = 0;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0)
            posCount++;
        else if (num < 0)
            negCount++;
        else
            zeroCount++;

        printf("Do you want to enter another number? (1 = Yes / 0 = No): ");
        scanf("%d", &choice);

    } while (choice == 1);

    printf("Positive numbers: %d\n", posCount);
    printf("Negative numbers: %d\n", negCount);
    printf("Zeroes: %d\n", zeroCount);

    return 0;
}
