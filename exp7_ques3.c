#include <stdio.h>

struct Book {
    int book_id;
    char title[50];
    char author[50];
    float price;
};

void printBook(struct Book b) {
    printf("\nBook Details:\n");
    printf("ID: %d\nTitle: %s\nAuthor: %s\nPrice: %.2f\n",
           b.book_id, b.title, b.author, b.price);
}

int main() {
    struct Book b;

    printf("Enter book_id, title, author, price:\n");
    scanf("%d %s %s %f", &b.book_id, b.title, b.author, &b.price);

    printBook(b);

    return 0;
}
