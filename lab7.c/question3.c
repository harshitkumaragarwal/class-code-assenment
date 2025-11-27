#include <stdio.h>

int FIBO(int num) {
    if (num == 0)
        return 0;   
    else if (num == 1)
        return 1;  
    else
        return FIBO(num - 1) + FIBO(num - 2); 
}

int main() {
    int n;

    printf("Enter the number of terms in Fibonacci sequence: ");
    scanf("%d", &n);

    printf("Fibonacci sequence up to %d terms:\n", n);

    for (int i = 0; i < n; i++) {
        printf("%d ", FIBO(i));
    }
    printf("\n");


    return 0;
}
