#include "library.h"

//edit information of an existing book

void edit_book(void)
{
	char name[50];
	char author[50];
	int choice;
	Book *temp=head;

	if(head==NULL)
	{
		printf("Library is empty");
		return;
	}

	printf("Enter current book name:");
	scanf(" %49[^\n]",name);


	printf("Enter current author name:");
        scanf(" %49[^\n]",author);

	//search for the book
	while(temp!=NULL)
	{
		if(strcmp(temp->name,name)==0 && strcmp(temp->author,author)==0)
		{
		    printf("\n Book Found:\n");
		    printf("1.Edit book name\n");
		    printf("2.Edit Author name\n");

		    printf("Enter the choice:");
		    scanf("%d",&choice);

		    switch(choice)
		    {
			    case 1:
				    printf("Enter new book name:");
				    scanf(" %49[^\n]",temp->name);
				    printf("Book name updated successfully!\n");
				    break;

		           case 2:
                                    printf("Enter new author name:");
                                    scanf(" %49[^\n]",temp->author);
                                    printf("Author name updated successfully!\n");
                                    break;

		           default:
				    printf("Invalid choice\n");
		    }
		    return;


		}
		temp=temp->next;
	}
	printf("Book not found\n");
	
}








