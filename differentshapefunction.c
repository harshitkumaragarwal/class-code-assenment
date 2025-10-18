#include <stdio.h>
#include <string.h>

void printSquare(int n, char symbol);
void printTriangle(int n, char symbol);
void printInverted(int n, char symbol);
void printPyramid(int n, char symbol);
void printDiamond(int n, char symbol);

int main() {
    int n = 5;
    char shape[20], symbol;

    printf("Enter the shape name (square / triangle / inverted / pyramid / diamond): ");
    scanf("%s", shape);

    printf("Enter the symbol you want to use: ");
    scanf(" %c", &symbol); 

    for (int i = 0; shape[i]; i++){
        if (shape[i] >= 'A' && shape[i] <= 'Z')
            shape[i] += 32;
    }

    printf("\n");

    if (strcmp(shape, "square") == 0)
        printSquare(n, symbol);
    else if (strcmp(shape, "triangle") == 0)
        printTriangle(n, symbol);
    else if (strcmp(shape, "inverted") == 0)
        printInverted(n, symbol);
    else if (strcmp(shape, "pyramid") == 0)
        printPyramid(n, symbol);
    else if (strcmp(shape, "diamond") == 0)
        printDiamond(n, symbol);
    else
        printf("Invalid shape name! Try: square, triangle, inverted, pyramid, diamond.\n");

    return 0;
}
void printSquare(int n, char symbol){
    printf("Square using '%c'\n", symbol);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            printf("%c ", symbol);
        }
        printf("\n");
    }
}

void printTriangle(int n,char symbol){
    printf("Right Triangle using '%c'\n", symbol);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", symbol);
        }
        printf("\n");
    }
}

void printInverted(int n, char symbol){
    printf("Inverted Triangle using '%c'\n", symbol);
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", symbol);
        }
        printf("\n");
    }
}

void printPyramid(int n, char symbol){
    printf("Pyramid using '%c'\n", symbol);
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++){
            printf("%c", symbol);
        }
        printf("\n");
    }
}

void printDiamond(int n, char symbol){
    printf("Diamond using '%c'\n", symbol);
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++){
            printf("%c", symbol);
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--){
        for (int j = n; j > i; j--){
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++){
            printf("%c", symbol);
        }
        printf("\n");
    }
}
