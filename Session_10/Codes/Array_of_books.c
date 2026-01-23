#include <stdio.h>
#include <string.h>

struct Book {
    char title[50];
    char author[50];
    int pages;
    float price;
};

int main() {
    struct Book library[2];  // array of 2 books

    // Book 1
    strcpy(library[0].title, "C Programming");
    strcpy(library[0].author, "Dennis Ritchie");
    library[0].pages = 350;
    library[0].price = 300;

    // Book 2
    strcpy(library[1].title, "Let Us C");
    strcpy(library[1].author, "Yashavant Kanetkar");
    library[1].pages = 400;
    library[1].price = 250;

    // Show books
    for(int i = 0; i < 2; i++) {
        printf("%s by %s, Pages: %d, Price: %.2f\n",
               library[i].title, library[i].author,
               library[i].pages, library[i].price);
    }

    return 0;
}
