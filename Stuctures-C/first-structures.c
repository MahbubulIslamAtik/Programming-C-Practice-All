#include<stdio.h>
#include<string.h>

struct Books{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main(){
    struct Books Book1;
    struct Books Book2;

    strcpy(Book1.title, "C Programming");
    strcpy(Book1.author, "Nuha Ali");
    strcpy(Book1.subject, "C Programming Learn");
    Book1.book_id = "54545";

    strcpy(Book2.title, "Telecom Billing");
    strcpy(Book2.author, "Zara Ali");
    strcpy(Book2.subject, "Telecom Billing Learn");
    Book2.book_id = "879846";

    printf("Book one title: %s\n", Book1.title);
    printf("Book one author: %s\n", Book1.author);
    printf("Book one subject: %s\n", Book1.subject);
    printf("Book one book id: %d\n", Book1.book_id);

    printf("Book two title: %s\n", Book2.title);
    printf("Book two author: %s\n", Book2.author);
    printf("Book two subject: %s\n", Book2.subject);
    printf("Book two book id: %d\n", Book2.book_id);

    return 0;
}