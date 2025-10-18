#include <stdio.h>

int main() {
    int i, j, n = 5, choice;

    printf("Choose a pattern to print:\n");
    printf("1. Square using '*'\n");
    printf("2. Right Triangle using '#'\n");
    printf("3. Inverted Triangle using '@'\n");
    printf("4. Pyramid using '$'\n");
    printf("5. Diamond using '&'\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:
            printf("\n1. Square using '*'\n");
            for (i = 1; i <= n; i++) {
                for (j = 1; j <= n; j++) {
                    printf("* ");
                }
                printf("\n");
            }
            break;

        case 2:
            printf("\n2. Right Triangle using '#'\n");
            for (i = 1; i <= n; i++) {
                for (j = 1; j <= i; j++) {
                    printf("# ");
                }
                printf("\n");
            }
            break;

        case 3:
            printf("\n3. Inverted Triangle using '@'\n");
            for (i = n; i >= 1; i--) {
                for (j = 1; j <= i; j++) {
                    printf("@ ");
                }
                printf("\n");
            }
            break;

        case 4:
            printf("\n4. Pyramid using '$'\n");
            for (i = 1; i <= n; i++) {
                for (j = i; j < n; j++) {
                    printf(" ");
                }
                for (j = 1; j <= (2 * i - 1); j++) {
                    printf("$");
                }
                printf("\n");
            }
            break;

        case 5:
            printf("\n5. Diamond using '&'\n");
            // upper part
            for (i = 1; i <= n; i++) {
                for (j = i; j < n; j++) {
                    printf(" ");
                }
                for (j = 1; j <= (2 * i - 1); j++) {
                    printf("&");
                }
                printf("\n");
            }
            // lower part
            for (i = n - 1; i >= 1; i--) {
                for (j = n; j > i; j--) {
                    printf(" ");
                }
                for (j = 1; j <= (2 * i - 1); j++) {
                    printf("&");
                }
                printf("\n");
            }
            break;

        default:
            printf("\nInvalid choice! Please enter a number between 1 and 5.\n");
    }

    return 0;
}
