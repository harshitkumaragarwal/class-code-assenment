#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    switch(n) {
        case 1:
            printf("The value is 1\n");
            break;
        case 2:
            printf("The value is 2\n");
          break;
        case 3:
            printf("The value is 3\n");
            break;
        default:
            printf("Value not 1, 2, or 3");
    }
    return 0;
}
