/*books.c - all about linked list*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct s_book {

 char title[64];
 int pages;
 struct s_book *next;
};

typedef struct s_book Book;

Book *first; // global variable

void addBook(char *title, int pages)
{
 Book *p, *newBook;

 // adding book if its first
 if(!first)
 {
  p = malloc(sizeof(Book));
  memset(p, 0, sizeof(Book));
  strncpy(p->title, title, 63);
  p->pages = pages;
  p->next = 0;
  first = p;

  return;
 }

 // if adding not first book
 for(p=first; p->next; p=p->next);

 newBook = malloc(sizeof(Book));
 memset(newBook, 0, sizeof(Book));
 strncpy(newBook->title, title, 63);
 newBook->pages = pages;
 newBook->next = 0;
 

 p->next = newBook;


 return;
}

// if search string is passes it will return a specific book else all books
void listBooks(char *searchStr)
{
 Book *p;

 for(p=first; p; p=p->next)
 {
  if(!searchStr || !strcmp(searchStr, p->title))
  {
   printf("Pages: %d \t Title: %s\n", p->pages, p->title);
  }
 }

 return;
}


int removeBook(char *searchStr)
{
 Book *p, *ph;
 
 for(p=first; p; ph=p, p=p->next)
  if(!searchStr || !strcmp(searchStr, p->title))
  {
   //removing first book
   if(first == p)
    first = p->next; //since we are removing the first book then let the first book in the list be the next book after the first book
   else
    ph->next = (p->next)?p->next:0; //removing the book if available

  free(p);

  return 1; //if book was found and removed
  }


 return 0; //book was not found
}



int main()
{
 int returnValue;

 first = 0;

 addBook("C Programming", 1000);
 addBook("Web Programming", 900);
 addBook("Java Programming", 1500);
 addBook("Kotlin Programming", 1400);
 addBook("C++ Programming", 500);

 printf("All Books\n");
 listBooks(0);

 printf("Search for a kotlin book\n");
 listBooks("Kotlin Programming");

 returnValue = removeBook("Java Programming");
 if(returnValue == 1)
 {
  printf("Book found and removed Successfully\n");
 }
 else
  printf("Book to remove not found\n");

 printf("After removing a book\n");
 listBooks(0);

 
 return 0;
}
