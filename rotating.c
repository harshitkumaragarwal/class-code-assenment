#include <stdio.h>
#include <string.h>

int main() {
    int i, j, n = 5;
    char shape[20], symbol;

    printf("Enter the shape name (square / triangle / inverted / pyramid / diamond): ");
    scanf("%s", shape);

    printf("Enter the symbol you want to use: ");
    scanf(" %c", &symbol); 
    for (i = 0; shape[i]; i++) {
        if (shape[i] >= 'A' && shape[i] <= 'Z')
            shape[i] += 32; 
    }

    printf("\n");

    if (strcmp(shape, "square") == 0) {
        printf("Square using '%c'\n", symbol);
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                printf("%c ", symbol);
            }
            printf("\n");
        }
    }

    else if (strcmp(shape, "triangle") == 0) {
        printf("Right Triangle using '%c'\n", symbol);
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= i; j++) {
                printf("%c ", symbol);
            }
            printf("\n");
        }
    }

    else if (strcmp(shape, "inverted") == 0) {
        printf("Inverted Triangle using '%c'\n", symbol);
        for (i = n; i >= 1; i--) {
            for (j = 1; j <= i; j++) {
                printf("%c ", symbol);
            }
            printf("\n");
        }
    }

    else if (strcmp(shape, "pyramid") == 0) {
        printf("Pyramid using '%c'\n", symbol);
        for (i = 1; i <= n; i++) {
            for (j = i; j < n; j++) {
                printf(" ");
            }
            for (j = 1; j <= (2 * i - 1); j++) {
                printf("%c", symbol);
            }
            printf("\n");
        }
    }

    else if (strcmp(shape, "diamond") == 0) {
        printf("Diamond using '%c'\n", symbol);
        for (i = 1; i <= n; i++) {
            for (j = i; j < n; j++) {
                printf(" ");
            }
            for (j = 1; j <= (2 * i - 1); j++) {
                printf("%c", symbol);
            }
            printf("\n");
        }
        for (i = n - 1; i >= 1; i--) {
            for (j = n; j > i; j--) {
                printf(" ");
            }
            for (j = 1; j <= (2 * i - 1); j++) {
                printf("%c", symbol);
            }
            printf("\n");
        }
    }

    else {
        printf("Invalid shape name! Please type one of: square, triangle, inverted, pyramid, diamond.\n");
    }

    return 0;
}
