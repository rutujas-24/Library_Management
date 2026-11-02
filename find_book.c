#include"library.h"

void find_book(void)
{
	char name[50];
	Book *temp=head;
	int found=0;

	printf("Enter book name:");
	scanf(" %49[^\n]",name);
	
	while(temp!=NULL)
		{
			if(strcmp(temp->name,name)==0)
			{
				printf("Book Found\n");
				printf("Book Name:%s\n",temp->name);
		
				printf("Author name:%s\n",temp->author);
				
				printf("Pages:%d\n",temp->pages);
				printf("Available:%d\n",temp->count);
				
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

