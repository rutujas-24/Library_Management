#include "library.h"

//display the available count of a specific book
void count_book(void)
{
	char name[50];
	char author[50];
	Book *temp=head;
	int found=0;

	if(head==NULL)
	{
		printf("library is empty\n");
		return;
	}

	printf("enter book name:");
	scanf(" %49[^\n]",name);
	
	printf("enter author name:");
	scanf(" %49[^\n]",author);

	while(temp!=NULL)
	{
		if(strcmp(temp->name,name)==0&&strcmp(temp->author,author)==0)
		{
			printf("Book name:%s\n",temp->name);
			printf("Author:%s\n",temp->author);
			printf("Number of pages:%d\n",temp->pages);
			printf("Available books:%d\n",temp->count);
			
			found=1;
			break;
		}
		temp=temp->next;
	}
	if(found==0)
	{
		printf("Book not found\n");
	}
}
