#ifndef library_h
#define library_h

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//structure for one book

typedef struct book
{
	char name[50];
	char author[50];
	int pages;
	int count;
	struct book *next;
}Book;
extern Book*head;     //global linked list head
//Menu Choice

typedef enum
{
	ADD='a',
	LIST='l',
	COUNT='c',
	EDIT='e',
	TAKE='t',
	FIND='f',
	SAVE='s',
	QUIT='q',
}Menu;


//Function declarations

void add_book(void);
void list_book(void);
void count_book(void);
void edit_book(void);
void take_book(void);
void find_book(void);
void save_book(void);
void load_book(void);

#endif

