#include "library.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void load_book(void)
{
	FILE *fp;
	char line[150];
	char *name;
	char *author;
	char *pages;
	char *count;
	
	Book *new_book;
	Book *temp;

	fp=fopen("library.dat","r");

	if(fp==NULL)
	{
		return;
	}

	while(fgets(line,sizeof(line),fp)!=NULL)
	{
		name=strtok(line,"|");
		author=strtok(NULL,"|");
		pages=strtok(NULL,"|");
		count=strtok(NULL,"|\n");
		
		if(name!=NULL && author!=NULL && pages!=NULL && count!=NULL)
		{
			new_book=malloc(sizeof(Book));
		
			if(new_book==NULL)
			{
				printf("Memory allocation failes\n");
				fclose(fp);
				return;
			}

		strcpy(new_book->name,name);
		strcpy(new_book->author,author);
		new_book->pages=atoi(pages);
		new_book->count=atoi(count);
		new_book->next=NULL;

		if(head==NULL)
		{
			head=new_book;
		}
		else
		{
			temp=head;

			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=new_book;
		}
	
	}
    }
    fclose(fp);
}
