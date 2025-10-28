#include<stdio.h>
#include<string.h>

#define max 100  // maximum number of books

// structure to store book details
struct book {
    int id;
    char title[50];
    char author[50];
    int quantity;
};

// function declarations
void addbook(struct book library[], int *count);
void displaybook(struct book library[], int count);
void searchbook(struct book library[], int count);

int main() {
    struct book library[max];
    int count = 0;
    int choice;

    while (1) {
        printf("\n====== Library Management System ======\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addbook(library, &count);
                break;

            case 2:
                displaybook(library, count); 
                break;

            case 3:
                searchbook(library, count);
                break;

            case 4:
                printf("Exiting program. Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}