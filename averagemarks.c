#include <stdio.h>

struct Student {
    char name[30];
    float marks;
};

int main() {
    struct Student s[5];
    float total = 0;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", s[i].name);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
        total += s[i].marks;
    }

    printf("\nAverage Marks = %.2f\n", total / 5);

    return 0;
}
