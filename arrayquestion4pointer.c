// with the help of chat gpt some some 
#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, p, q;
    int i, j, k;

    printf("Enter number of rows and columns for Matrix A: ");
    scanf("%d %d", &m, &n);

    // Dynamically allocate memory for Matrix A
    int *A = (int *)malloc(m * n * sizeof(int));
    printf("Enter elements of Matrix A in row-major order:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", (A + i * n + j)); // pointer arithmetic
        }
    }

    printf("Enter number of rows and columns for Matrix B: ");
    scanf("%d %d", &p, &q);

    // Dynamically allocate memory for Matrix B
    int *B = (int *)malloc(p * q * sizeof(int));
    printf("Enter elements of Matrix B in row-major order:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", (B + i * q + j));
        }
    }

    // Check multiplication condition
    if (n != p) {
        printf("Matrix multiplication not possible! Number of columns of A must equal number of rows of B.\n");
        free(A);
        free(B);
        return 0;
    }

    // Dynamically allocate memory for Matrix C
    int *C = (int *)malloc(m * q * sizeof(int));

    // Initialize Matrix C to 0
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            *(C + i * q + j) = 0;
        }
    }

    // Perform matrix multiplication
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < n; k++) {
                *(C + i * q + j) += (*(A + i * n + k)) * (*(B + k * q + j));
            }
        }
    }

    // Display Matrix A
    printf("\nMatrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", *(A + i * n + j));
        }
        printf("\n");
    }

    // Display Matrix B
    printf("\nMatrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("%d\t", *(B + i * q + j));
        }
        printf("\n");
    }

    // Display Resultant Matrix C
    printf("\nResultant Matrix (A x B):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d\t", *(C + i * q + j));
        }
        printf("\n");
    }

    // Free allocated memory
    free(A);
    free(B);
    free(C);

    return 0;
}
