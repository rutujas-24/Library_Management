#include "library.h"
Book *head=NULL;

int main(void)
{
	char choice;
	
	load_book();

	while(1)
	{
		printf("--------------Menu----------------\n");
		printf("a/A:Add a new book\n");
		printf("l/L:list available book\n");
		printf("c/C:Display count of specific book\n");
		printf("e/E:Edit book information\n");
		printf("t/T:Take a book\n");
		printf("f/F:Find a book\n");
		printf("s/S:Save books information\n");
		printf("q/Q:Quit\n");
		printf("------------------------------------\n");

		printf("enter the choice:");
		scanf(" %c",&choice);

		switch(choice)
		{
			case 'a':
			case'A':
				add_book();
				 break;
		        case 'l':
			case 'L':	 
				 list_book();
				 break;
			case 'c':
			case 'C':	 
				 count_book();
				 break;
			case 'e':
			case 'E':	 
				 edit_book();
				 break;
			case 't':
			case 'T':	 
				 take_book();
				 break;
			case 'f':
			case 'F':
				 find_book();
				 break;
			case 's':
			case 'S':
				 save_book();
				 break;
			case 'q':
			case 'Q':
				 printf("Existing application\n");
				 return 0;
			default:printf("Invalid choice\n");
		}
	}while(choice!='q' &&choice!='Q');
	return 0;
}



		
