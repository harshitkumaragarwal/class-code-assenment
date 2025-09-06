#include <stdio.h>

int main() {
    int year;
    double population = 100000; 

    printf("Year\tPopulation\n");
    for (year = 1; year <= 10; year++) {
        population = population + (population * 0.10);  
        printf("%d\t%.0f\n", year, population);         
    }

    return 0;
}
