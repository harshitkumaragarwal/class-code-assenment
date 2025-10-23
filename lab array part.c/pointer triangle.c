#include <stdio.h>

int main() {
    int rows, i, j;
    char *ptr = "*";  

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c ", *ptr); 
        }
        printf("\n");
    }

    return 0;
}
