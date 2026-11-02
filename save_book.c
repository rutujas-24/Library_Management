#include"library.h"

void save_book(void)
{
	FILE *fp=fopen("lirary.dat","w");
	Book *temp=head;

	if(fp==NULL)
	{
		printf("Unable to open file\n");
		return;
	}

	while(temp!=NULL)
	{
		fprintf(fp,"%s|%s|%d|%d\n",temp->name,temp->author,temp->pages,temp->count);

		temp=temp->next;
	}
	fclose(fp);
	printf("Library data saved successfullu\n");
}
