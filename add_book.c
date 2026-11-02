#include "library.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//checking same book with same author is already exists
static int book_exists(char*name,const char*author)
{
	Book *temp=head;

	while(temp!=NULL)
	{
		if(strcmp(temp->name,name)==0 && strcmp(temp->author,author)==0)
		{
			return 1;
		}
		temp=temp->next;
	}
	return 0;
}

// adding new book to the linked list

void add_book(void)
{
	Book *new_book;
	Book *temp;

	new_book=malloc(sizeof(Book));

	if(new_book==NULL)
	{
		printf("Memory allocation failed\n");
	}

	printf("Enter book name:");
	scanf(" %49[^\n]",new_book->name);
        
	printf("Enter author name:");
        scanf(" %49[^\n]",new_book->author);
	
	/*//check duplicate before inserting
	if(book_exists(new_book->name,new_book->author))
	{
		printf("this book already exists\n");
		free(new_book);
		return;
	}*/

	printf("Enter number of pages:");
	scanf("%d",&new_book->pages);

	printf("Enter number of books available:");
        scanf("%d",&new_book->count);

	new_book->next=NULL;

	//first node
	if(head==NULL)
	{
		head=new_book;
	}
	else
	{
		//go to last node
		temp=head;
	        while(temp->next!=NULL)
		{
			temp=temp->next;
		}

		//connect new node
		temp->next=new_book;
	}

	printf("Book added successfully\n");
}







