//taken refrence from gpt
#include <stdio.h>

int main() {
    int m, n, p, q;
    int i, j, k;

    printf("Enter number of rows and columns for Matrix A: ");
    scanf("%d %d", &m, &n);

    int A[m][n];
    printf("Enter elements of Matrix A (row-wise):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", (*(A + i) + j));  // pointer version of A[i][j]
        }
    }

    printf("Enter number of rows and columns for Matrix B: ");
    scanf("%d %d", &p, &q);

    int B[p][q];
    printf("Enter elements of Matrix B (row-wise):\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", (*(B + i) + j));  // pointer version of B[i][j]
        }
    }

    if (n != p) {
        printf("Matrix multiplication not possible! Columns of A must equal rows of B.\n");
        return 0;
    }

    int C[m][q];

    // Initialize result matrix
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            *(*(C + i) + j) = 0;  // C[i][j] = 0
        }
    }

    // Matrix multiplication using pointers
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < n; k++) {
                *(*(C + i) + j) += (*(*(A + i) + k)) * (*(*(B + k) + j));
            }
        }
    }

    printf("\nMatrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", *(*(A + i) + j));
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("%d\t", *(*(B + i) + j));
        }
        printf("\n");
    }

    printf("\nResultant Matrix (A × B):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d\t", *(*(C + i) + j));
        }
        printf("\n");
    }

    return 0;
}
