#include <stdio.h>

#define EMP_COUNT 100 

int main() {
    
char name[EMP_COUNT][50];  
float basic[EMP_COUNT];     
float da[EMP_COUNT];       
float gross[EMP_COUNT];    

    printf("Enter employee details\n");

    for (int i = 0; i < EMP_COUNT; i++) {
        printf("Employee %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", name[i]);  // Reads employee name
        printf("Enter basic pay ");
        scanf("%f", &basic[i]);

        // Calculate DA and Gross salary
        da[i] = 0.52 * basic[i];
        gross[i] = basic[i] + da[i];
    }

    // Display results
    printf("\n\nEmployee Name\t\tGross Salary\n");
    printf("-----------------------------------------\n");

    for (int i = 0; i < EMP_COUNT; i++) {
        printf("%-15s\t%.2f\n", name[i], gross[i]);
    }

    return 0;
}
