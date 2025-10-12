#include <stdio.h>

float calculateBMI(float weight, float height) {
    float bmi = weight / (height * height);
    return bmi;
}

void displayCategory(float bmi) {
    if (bmi < 18.5)
        printf("Underweight\n");
    else if (bmi >= 18.5 && bmi < 25)
        printf("Normal weight\n");
    else if (bmi >= 25 && bmi < 30)
        printf("Overweight\n");
    else
        printf("Obese\n");
}

int main() {
    float weight, height, bmi;

    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    bmi = calculateBMI(weight, height);

    printf("\nYour BMI is: %.2f\n", bmi);
    printf("Category: ");
    displayCategory(bmi);

    return 0;
}
