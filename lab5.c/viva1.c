#include<stdio.h>

int main() {
    int n = 4; 
    int size = 2*n - 1;
    int i, j;

    for(i = 1; i <= size; i++) {
        for(j = 1; j <= size; j++) {
            if(i == 1||i == size||j == 1||j == size)
                printf("4 ");
            else if(i == 2||i == size-2||j == 2||j == size-1)
                printf("3 ");
            else if(i == 3| i == size-2 || j == 3||j == size-2)
                printf("2 ");
            else
                printf("1 ");
        }
        printf("\n");
    }
    return 0;
}




