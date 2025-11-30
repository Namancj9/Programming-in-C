#include <stdio.h>

typedef struct {
int book_id;
char title[100];
char author[50];
float price;
} Book;

void printBookDetails(Book b) {
printf("\nBook ID   : %d\n", b.book_id);
printf("Title     : %s\n", b.title);
printf("Author    : %s\n", b.author);
printf("Price     : %.2f\n", b.price);
}

int main() {
Book b1;


printf("Enter Book ID: ");
scanf("%d", &b1.book_id);

printf("Enter Title: ");
scanf(" %[^\n]", b1.title);  

printf("Enter Author Name: ");
scanf(" %[^\n]", b1.author);

printf("Enter Price: ");
scanf("%f", &b1.price);

printBookDetails(b1);

return 0;

}
