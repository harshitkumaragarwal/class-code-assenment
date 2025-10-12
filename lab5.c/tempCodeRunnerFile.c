#include <stdio.h>

int main() {
    int i, j, k, n, num = 1;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        
        for (k = 1; k <= n - i; k++) {
            printf("   "); 
        }

        for (j = 1; j <= i; j++) {
            printf("%3d ", num); 
            num++;
        }

        printf("\n");
    }

    return 0;
}