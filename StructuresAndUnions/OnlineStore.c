#include<stdio.h>
#include<string.h>
// Union Of Structures
struct OnlineStore{
    // Common Attribute 
    int price;
    union {
        // Book
        struct{
        char author[20];
        char genre[20];
        char design[20];
        }book;
        // Shirt 
        struct{
        char size[10];
        char brand[20];
        char color[10];
        }shirt;
    }items;
};
int main(){
    struct OnlineStore p;
    strcpy(p.items.book.author, "Chetan Bhagat");
    strcpy(p.items.book.genre, "Romance");
    strcpy(p.items.book.design, "PaperBack");
    p.price = 499;
    printf("Author: %s\n", p.items.book.author);
    printf("Author: %s\n", p.items.book.genre);
    printf("Author: %s\n", p.items.book.design);
    printf("Author: %d\n", p.price);
    
    printf("Size of the book: %d bytes\n", sizeof(p));
    return 0;
}