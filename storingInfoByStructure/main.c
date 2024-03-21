#include <stdio.h>
#include <stdlib.h>

struct Book {
    char name[100];
    char author[100];
    int pages;
    float price;
};

int main()
{
    struct Book book1;

    printf("Enter book name: ");
    scanf("%s",book1.name);

    printf("Enter author name: ");
    scanf("%s",book1.author);

    printf("Enter number of pages: ");
    scanf("%d",&book1.pages);

    printf("Enter price: ");
    scanf("%f",&book1.price);

    printf("\nBook Information:\n");
    printf("Name: %s\n",book1.name);
    printf("Author: %s\n",book1.author);
    printf("Number of pages: %d\n",book1.pages);
    printf("Price: $%.2f\n",book1.price);

    return 0;
}
