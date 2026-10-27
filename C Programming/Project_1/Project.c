/* Problem Statement:
A Book Management System is required to efficiently organize and manage
information about books. The system should support various operations,
including adding, removing, searching, updating, and displaying book records
based on attributes such as Book ID, Book Name, Author Name, Category,
Price, and Rating. Additionally, the system should provide the capability to
show details of books written by a specific author, display the top 3 books
based on price and rating, and access information about all the books in the
database.*/

#include <stdio.h>
typedef struct bookdata
{
    int book_id;
    char book_name[20];
    char book_author_name[20];
    float book_price;
    float book_bookrating;
} bookdata;

void addbooks(bookdata *, int *, int);
void display(bookdata *, int *);
void updatedbooks(bookdata *, int *);
void add_1_books(bookdata *, int *);
void search_books(bookdata *, int *);
void delete_books(bookdata *, int *);
void sorting_book(bookdata *, int *);
void top_3_books(bookdata *, int *);
int main()
{

    bookdata allbookdata[100];
    int totalBooks = 0;
    int books = 0;
    printf("How many books add :- ");
    scanf("%d", &books);

    addbooks(allbookdata, &totalBooks, books);

    while (1)
    {
        int enter_no;
        printf("\n......................Mune.....................\n ");
        printf("Enter 1 Add one new book\n");
        printf("Enter 2 Updated you book\n");
        printf("Enter 3 Display all books\n");
        printf("Enter 4 search books\n");
        printf("Enter 5 delete books\n");
        printf("Enter 6 Sort you books\n");
        printf("Enter 7 Top 3 books\n");
        printf("Enter 8 Exit!..\n");
        scanf("%d", &enter_no);

        if (enter_no == 1)
        {
            printf("\n............................Add Your Book...........................\n");
            add_1_books(allbookdata, &totalBooks);
        }
        else if (enter_no == 2)
        {
            printf("\n............................Updated Your Book...........................\n");
            updatedbooks(allbookdata, &totalBooks);
        }
        else if (enter_no == 3)
        {
            printf("\n............................Display all books...........................\n");
            display(allbookdata, &totalBooks);
        }
        else if (enter_no == 4)
        {
            printf("\n............................Search your books...........................\n");
            search_books(allbookdata, &totalBooks);
        }
        else if (enter_no == 5)
        {
            printf("\n............................Delete you book book...........................\n");
            delete_books(allbookdata, &totalBooks);
        }
        else if (enter_no == 6)
        {
            printf("\n............................Sort you book books...........................\n");
            sorting_book(allbookdata, &totalBooks);
        }
        else if (enter_no == 7)
        {
            printf("\n............................Top 3 book books...........................\n");
            top_3_books(allbookdata, &totalBooks);
        }
        else if (enter_no == 8)
        {
            printf("Sucessfully  Exit!..\n");
            break;
        }
        else
        {
            printf("Please Enter valid value !..\n");
        }
    }

    return 0;
}
void top_3_books(bookdata *allbooks, int *totalBooks)
{
    int choise;
    while (1)
    {

        printf("\n......................Menu..............................\n");
        printf("Enter 1: Top 3 by price\n");
        printf("Enter 2 : Top 3 by ratiing\n");
        printf("Enter 3 : Exit!..\n");
        scanf("%d", &choise);

        if (choise == 1)
        {
            for (int i = 0; i < *totalBooks - 1; i++)
            {
                for (int j = 0; j < *totalBooks - 1 - i; j++)
                {
                    if (allbooks[j].book_price < allbooks[j + 1].book_price)
                    {
                        bookdata temp = allbooks[j];
                        allbooks[j] = allbooks[j + 1];
                        allbooks[j + 1] = temp;
                    }
                }
            }
            printf("Top 3 Books by Price!\n");
            int limit = (*totalBooks < 3) ? *totalBooks : 3;
            for (int i = 0; i < limit; i++)
            {
                printf("\nBook number %d\n", i + 1);
                printf("Boook Author Name : %s \n", allbooks[i].book_author_name);
                printf("Book id  : %d \n", allbooks[i].book_id);
                printf("Book name  :%s \n", allbooks[i].book_name);
                printf("Book Ratting : %.1f\n", allbooks[i].book_bookrating);
                printf("Book Price :%.1f \n", allbooks[i].book_price);
            }
        }
        else if (choise == 2)
        {
            for (int i = 0; i < *totalBooks - 1; i++)
            {
                for (int j = 0; i < *totalBooks - 1 - i; j++)
                {
                    if (allbooks[j].book_bookrating < allbooks[j + 1].book_bookrating)
                    {
                        bookdata temp = allbooks[j];
                        allbooks[j] = allbooks[j + 1];
                        allbooks[j + 1] = temp;
                    }
                }
            }
            printf("Top 3 Books by Ratting!\n");
            int limit = (*totalBooks < 3) ? *totalBooks : 3;
            for (int i = 0; i < limit; i++)
            {
                printf("\nBook number %d\n", i + 1);
                printf("Boook Author Name : %s \n", allbooks[i].book_author_name);
                printf("Book id  : %d \n", allbooks[i].book_id);
                printf("Book name  :%s \n", allbooks[i].book_name);
                printf("Book Ratting : %.1f\n", allbooks[i].book_bookrating);
                printf("Book Price :%.1f \n", allbooks[i].book_price);
            }
        }
        else if (choise == 3)
        {
            printf("Sucessfully  Exit!..\n");
            break;
        }
        else
        {
            printf("Please Enter valid value !..\n");
        }
        
    }
}

void sorting_book(bookdata *allbooks, int *totalBooks)
{
    int choise;
    int found = 0;
    while (1)
    {

        printf("\n......................Menu..............................\n");
        printf("Enter 1 : sort by id \n");
        printf("Enter 2: sort by price\n");
        printf("Enter 3 : sort by ratiing\n");
        printf("Enter 4 : Exit!..\n");

        scanf("%d", &choise);

        if (choise == 1)
        {
            for (int i = 0; i < *totalBooks - 1; i++)
            {
                for (int j = 0; j < *totalBooks - 1; j++)
                {
                    if (allbooks[j].book_id > allbooks[j + 1].book_id)
                    {
                        bookdata temp = allbooks[j];
                        allbooks[j] = allbooks[j + 1];
                        allbooks[j + 1] = temp;
                    }
                }
            }
            printf("Books sorted by ID successfully!\n");
            for (int i = 0; i < *totalBooks; i++)
            {

                printf("Book Number %d\n", i + 1);
                printf("Boook Author Name : %s \n", allbooks[i].book_author_name);
                printf("Book id  : %d \n", allbooks[i].book_id);
                printf("Book name  :%s \n", allbooks[i].book_name);
                printf("Book Ratting : %.1f\n", allbooks[i].book_bookrating);
                printf("Book Price :%.1f \n", allbooks[i].book_price);
            }
        }
        else if (choise == 2)
        {
            for (int i = 0; i < *totalBooks - 1; i++)
            {
                for (int j = 0; j < *totalBooks - 1; j++)
                {
                    if (allbooks[j].book_price > allbooks[j + 1].book_price)
                    {
                        bookdata temp = allbooks[j];
                        allbooks[j] = allbooks[j + 1];
                        allbooks[j + 1] = temp;
                    }
                }
            }
            printf("Books sorted by Price successfully!\n");
            for (int i = 0; i < *totalBooks; i++)
            {

                printf("\nBook number %d\n", i + 1);
                printf("Boook Author Name : %s \n", allbooks[i].book_author_name);
                printf("Book id  : %d \n", allbooks[i].book_id);
                printf("Book name  :%s \n", allbooks[i].book_name);
                printf("Book Ratting : %.1f\n", allbooks[i].book_bookrating);
                printf("Book Price :%.1f \n", allbooks[i].book_price);
            }
        }
        else if (choise == 3)
        {
            for (int i = 0; i < *totalBooks - 1; i++)
            {
                for (int j = 0; j < *totalBooks - 1; j++)
                {
                    if (allbooks[j].book_bookrating > allbooks[j + 1].book_bookrating)
                    {
                        bookdata temp = allbooks[j];
                        allbooks[j] = allbooks[j + 1];
                        allbooks[j + 1] = temp;
                    }
                }
            }
            printf("Books sorted by Ratting successfully!\n");
            for (int i = 0; i < *totalBooks; i++)
            {

                printf("book Number %d", i + 1);
                printf("Boook Author Name : %s \n", allbooks[i].book_author_name);
                printf("Book id  : %d \n", allbooks[i].book_id);
                printf("Book name  :%s \n", allbooks[i].book_name);
                printf("Book Ratting : %.1f\n", allbooks[i].book_bookrating);
                printf("Book Price :%.1f \n", allbooks[i].book_price);
            }
        }
        else if (choise == 4)
        {
            printf("Sucessfully  Exit!..\n");
            break;
        }
        else
        {
            printf("Please Enter your valid Sorting value !..\n");
        }
    }
}
void delete_books(bookdata *deleted, int *totalBooks)
{
    int id;
    int found = 0;
    printf("Enter your delete id ");
    scanf("%d", &id);
    for (int i = 0; i < *totalBooks; i++)
    {
        if (deleted[i].book_id == id)
        {
            found = 1;
            for (int j = i; i < *totalBooks - 1; j++)
            {
                deleted[j] = deleted[j + 1];
            }
            (*totalBooks)--;

            printf("Book deleted successfully!\n");
        }
    }
    if (found == 0)
    {
        printf("Book not found!\n");
    }
}
void search_books(bookdata *search, int *totalbooks)
{
    int id;
    int found = 0;
    printf("Enter your serarch id ");
    scanf("%d", &id);
    for (int i = 0; i < *totalbooks; i++)
    {
        if (search[i].book_id == id)
        {
            printf("book  is found!... \n");
            printf("Boook Author Name : %s \n", search[i].book_author_name);
            printf("Book id  : %d \n", search[i].book_id);
            printf("Book name  :%s \n", search[i].book_name);
            printf("Book Ratting : %.1f\n", search[i].book_bookrating);
            printf("Book Price :%.1f \n", search[i].book_price);
            printf("Your book sucessfully display!..\n");
            found = 1;
        }
    }
    if (found == 0)
    {
        printf("Book is not found!...");
    }
}

void add_1_books(bookdata *add, int *totalbooks)
{
    {
        for (int i = 0; *totalbooks >= 100; i++)
        {
            printf("Book storage is full!\n");
            return;
        }
        int i = *totalbooks + 1; // number
        printf("Enter your book Author Name :  ");
        scanf("%19s", add[i].book_name);
        printf("Enter your book id : ");
        scanf("%d", &add[i].book_id);
        printf("Enter you book price :  ");
        scanf("%f", &add[i].book_price);
        printf("Enter you book bookrating : ");
        scanf("%f", &add[i].book_bookrating);

        (*totalbooks)++;

        printf(" One new book added sucessfully!.. Total books is %d !\n", i);
    }
}

void addbooks(bookdata *add, int *totalBooks, int books)
{
    for (int i = 0; *totalBooks >= 100; i++)
    {
        printf("Book storage is full!\n");
        return;
    }
    for (int i = 0; i < books; i++)
    {
        int i = *totalBooks;
        printf("Enter your book Author Name :  ");
        scanf("%19s", add[i].book_author_name);
        printf("Enter your book  Name :  ");
        scanf("%19s", add[i].book_name);
        printf("Enter your book id : ");
        scanf("%d", &add[i].book_id);
        printf("Enter you book price :  ");
        scanf("%f", &add[i].book_price);
        printf("Enter you book bookrating : ");
        scanf("%f", &add[i].book_bookrating);

        (*totalBooks)++;

        printf(" %d Book added  successfully!\n", i + 1);
    }
}

void display(bookdata *add, int *totalBooks)
{
    for (int i = 0; i < *totalBooks; i++)
    {
        printf(" The book Author name is : %s \n", add[i].book_name);
        printf("The book id is : %d \n", add[i].book_id);
        printf(" The book Price is $%.1f \n", add[i].book_price);
        printf(" The book Ratting is : %.1f \n", add[i].book_bookrating);
    }
    printf("All books successfully displya!\n");
}

void updatedbooks(bookdata *allbookdata, int *totalBooks)
{
    int book_id;
    int found = 0;
    printf("Enter your book id");
    scanf("%d", &book_id);

    for (int i = 0; i < *totalBooks; i++)
    {
        int choise;
        if (allbookdata[i].book_id == book_id)
        {
            found = 1;
            printf("1 = update price  \n");
            printf("2 = update ratting  \n");

            printf("Enter you number : ");
            scanf("%d", &choise);

            int price;
            int ratting;

            if (choise == 1)
            {
                printf("Enter your price \n");
                scanf("%.1f", &price);
                allbookdata[i].book_price = price;
                printf("Your price add sucessfully \n");
            }
            else if (choise == 2)
            {
                printf("Enter your Ratting \n");
                scanf("%.1f", &ratting);
                allbookdata[i].book_bookrating = ratting;
                printf("Your price add sucessfully \n");
            }
            else
            {
                printf("Please Enter valid value !..\n");
            }
        }
    }
    if (found = 0)
    {
        printf("Your book is not found!");
    }
}
