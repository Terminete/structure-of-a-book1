// c structure
#include <stdio.h>//scanf(),printf()
#include<string.h>//strcpy()

struct book{
    char title[30];
    char author[30];
    int publication_year;
    char ISBN[30];
    float price;
}book1;
int main(){
    //struct book book1;
    //strcpy(book1.title"Introduction  c programming");
    printf("Enter title of the book: ");
    scanf("%s",&book1.title);
    strcpy(book1.author,"John smith");
    book1.publication_year=2000;
    strcpy(book1.ISBN,"978013110627");
    book1.price=47.88;
    
    printf("Author: %s \n",book1.author);
    printf("publication_year: %d \n",book1.publication_year);
    printf("ISBN: %s \n",book1.ISBN);
    printf("price: %f \n",book1.price);
    
    return 0;
}