#include <stdio.h>
#include <string.h>
 
struct book {
   	char title[50];
	int edition;
	char author[50];
	char isbn[20];
	char publisher[50];
	char year[4];
};
 
int main( ) {

	struct book b;

	/* book 1 specification */
	strcpy( b.title,"Harry Potter and the Prisoner of Azkaban");
	strcpy( b.author, "J. K. Rowlings");
	strcpy( b.isbn, "0-7475-4215-5");
	strcpy( b.publisher, "Bloomburg");
	strcpy( b.year, "1999");
	b.edition = 1; 

	/* print Book1 info */
	printf("Title: %s\n", b.title);
	printf("Edition: %d\n", b.edition);
	printf("Author: %s\n", b.author);
	printf("ISBN: %s\n", b.isbn);
	printf("Publisher: %s\n", b.publisher);
	printf("Year: %s\n", b.year);

   return 0;
}