#include <stdio.h>

// Define the structure
struct Book {
    int book_id;
    char title[50];
    char author[50];
    float price;
};

void displayBook(struct Book b );

int main() {
    struct Book b1; 
    printf("Enter Book ID: ");
    scanf("%d", &b1.book_id);

    printf("Enter Book Title: ");
    scanf("%s", b1.title);

    printf("Enter Author Name: ");
    scanf("%s", b1.author);

    printf("Enter Book Price: ");
    scanf("%f", &b1.price);

    displayBook(b1);

    return 0;
}
void displayBook(struct Book b) {
    printf("\n--- Book Details ---\n");  // line taken from gpt for good looking terminal
    printf("Book ID     : %d\n", b.book_id);
    printf("Title       : %s\n", b.title);
    printf("Author      : %s\n", b.author);
    printf("Price       : %.2f\n", b.price);
}
