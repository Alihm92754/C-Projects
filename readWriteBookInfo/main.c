#include <stdio.h>

#define MAX_BOOKS 100

// Structure to represent a book
struct Book {
    char name[100];
    char author[100];
    float price;
};

int main() {
    struct Book books[MAX_BOOKS];
    int numBooks;

    // Prompt the user to enter the number of books
    printf("Enter the number of books: ");
    scanf("%d", &numBooks);

    // Input book information from the user
    for (int i = 0; i < numBooks; i++) {
        printf("Enter details for Book %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", books[i].name);
        printf("Author: ");
        scanf("%s", books[i].author);
        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    // Open file for writing
    FILE *file = fopen("books.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Write book information to the file
    for (int i = 0; i < numBooks; i++) {
        fprintf(file, "%s %s %.2f\n", books[i].name, books[i].author, books[i].price);
    }

    // Close the file
    fclose(file);

    // Open file for reading
    file = fopen("books.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    // Read and display book information from the file
    printf("\nBook Information from file:\n");
    for (int i = 0; i < numBooks; i++) {
        fscanf(file, "%s %s %f", books[i].name, books[i].author, &books[i].price);
        printf("Name: %s, Author: %s, Price: %.2f\n", books[i].name, books[i].author, books[i].price);
    }

    // Close the file
    fclose(file);

    return 0;
}
