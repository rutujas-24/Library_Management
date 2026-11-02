#include "library.h"

//Display all available books
void list_book(void)
{
	Book *temp=head;        //temp points to the first book

	if(temp==NULL)
	{
		printf("Library is empty\n");
		return;
	}

	printf("\n-----AVAILABLE BOOKS------\n");

	while(temp!=NULL)               //continue untill there are no more books
	{
		printf("Book Name=%s\n",temp->name);
	
		printf("Author Name=%s\n",temp->author);
	
		printf("Pages:%d\n",temp->pages);
		printf("Available:%d\n",temp->count);

		temp=temp->next;                 //move to next node
	}
}




