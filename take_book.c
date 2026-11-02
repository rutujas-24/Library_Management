#include "library.h"

void take_book(void)
{
	char name[50];
	char author[50];
	Book *temp=head;

	printf("Enter book name:");
	scanf(" %49[^\n]",name);

	printf("enter author name:");
	scanf(" %49[^\n]",author);

	while(temp!=NULL)
	{
		if(strcmp(temp->name,name)==0&&strcmp(temp->author,author)==0)
		{
			if(temp->count>0)
			{
				temp->count--;
				printf("Book taken succesfully\n");
				printf("Remaining books %d\n",temp->count);
			}
			else
			{
				printf("Book is not available\n");
			}
			return;
		}
		temp=temp->next;
	}
	printf("Book not found\n");
}

