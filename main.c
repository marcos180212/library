#include <stdio.h>
#include <string.h>

#define MAX 3 

typedef struct {
	int edition;
   	char title[50];
	char author[50];
	char isbn[20];
	char publisher[50];
	char year[5];
} Book;

void clear(Book *b);

Book shelf[MAX];

int main() {


	for (int i = 0; i < MAX; ++i)
	{
		clear(&shelf[i]);
	}

	for (int i = 0; i < MAX; ++i)
	{	
		printf("Title: ");
		fflush(stdin);
		fgets(shelf[i].title, 50, stdin);
		shelf[i].title[strcspn(shelf[i].title, "\n")] = 0;

		printf("Author: ");
		fflush(stdin);
		fgets(shelf[i].author, 50, stdin);
		shelf[i].author[strcspn(shelf[i].author, "\n")] = 0;

		printf("%s", "ISBN: ");
		fflush(stdin);
		fgets(shelf[i].isbn, 20, stdin);
		shelf[i].isbn[strcspn(shelf[i].isbn, "\n")] = 0;

		printf("%s", "Publisher: ");
		fflush(stdin);
		fgets(shelf[i].publisher, 50, stdin);
		shelf[i].publisher[strcspn(shelf[i].publisher, "\n")] = 0;

		printf("%s", "Year: ");
		fflush(stdin);
		fgets(shelf[i].year, 5, stdin);
		shelf[i].year[strcspn(shelf[i].year, "\n")] = 0;

	}

	// for (int i = 0; i < MAX; ++i)
	// {
	// 	printf("%s\n", shelf[i].title);
	// }

	/* book 1 specification */
	// strcpy( shelf.title,"Harry Potter and the Prisoner of Azkaban");
	// strcpy( shelf.author, "J. K. Rowlings");
	// strcpy( shelf.isbn, "0-7475-4215-5");
	// strcpy( shelf.publisher, "Bloomburg");
	// strcpy( shelf.year, "1999");
	// shelf.edition = 1; 

	/* print Book1 info */
	// printf("Title: %s\n", shelf.title);
	// printf("Edition: %d\n", shelf.edition);
	// printf("Author: %s\n", shelf.author);
	// printf("ISBN: %s\n", shelf.isbn);
	// printf("Publisher: %s\n", shelf.publisher);
	// printf("Year: %s\n", shelf.year);

   return 0;
}

void clear(Book *b)
{
	strcpy(b->title, "\0");
	strcpy(b->author, "\0");
	strcpy(b->isbn, "\0");
	strcpy(b->publisher, "\0");
	strcpy(b->year, "\0");
	b->edition = 0;
}
