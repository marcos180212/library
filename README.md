# library

Books contain information. There is also information about books: title, author, isbn, edition, etc.

Create a C program that:

    define a Book structure that includes:
        title
        edition
        author
        isbn
        publisher
        year
    In the main, use the Book structure to create an array of structures called shelf, that can hold 50 books.
    Create a function, clear, that will clear all the attributes of a book.
        clear should have one parameter - a reference (a pointer) to a book (remember to use the -> inside the clear function).
    In the main
        use the clear function in a loop to initialize all the books on the shelf.
        use a loop to ask the user for book details.

Book 1
Title: Harry Potter and the Prisoner of Azkaban
Edition: 1
Author: J. K. Rowlings
ISBN: 0-7475-4215-5
Publisher: Bloomburg
Year: 1999

Another? (Y/N):

        store the entered details as a book on the shelf.
        When done, print the titles of the books on the shelf.
