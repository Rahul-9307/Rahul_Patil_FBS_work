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

    printf("\n");
printf("============================================\n");
printf("                                            \n");
printf("       WELCOME TO BOOK MANAGEMENT           \n");
printf("                 SYSTEM                     \n");
printf("                                            \n");
printf("     Manage Your Books Easily and Quickly   \n");
printf("                                            \n");
printf("============================================\n");
printf("\n");
printf("       System Started Successfully!\n");
printf("\n");

    bookdata allbookdata[100];

    int totalBooks = 0;
    int books = 0;

    printf("\n");
    printf("==================================================\n");
    printf("               ADD NEW BOOKS                      \n");
    printf("==================================================\n");
    printf("\n");

    while (1)
    {
    printf("  How many books do you want to add? (1-100): ");
    scanf("%d", &books);

    if (books > 0 && books <= 100)
    {
        addbooks(allbookdata, &totalBooks, books);
        break;
    }
    else
    {
        printf("\nInvalid input! Please enter a number between 1 and 100.\n");
         printf("==================================================\n");
    }
}

    while (1)
    {
        int enter_no;

        printf("\n");
        printf("============================================\n");
        printf("          BOOK MANAGEMENT SYSTEM            \n");
        printf("============================================\n");
        printf("|                                          |\n");
        printf("|   1. Add a New Book                      |\n");
        printf("|   2. Update a Book                       |\n");
        printf("|   3. Display All Books                   |\n");
        printf("|   4. Search for a Book                   |\n");
        printf("|   5. Delete a Book                       |\n");
        printf("|   6. Sort Books                          |\n");
        printf("|   7. Display Top 3 Books                 |\n");
        printf("|   8. Exit                                |\n");
        printf("|                                          |\n");
        printf("============================================\n");
        printf("Enter your choice: ");

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
            printf("\nThank you for using Book Management System!\n");
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

        printf("\n");
        printf("========================================\n");
        printf("           TOP 3 BOOKS MENU             \n");
        printf("========================================\n");
        printf("  1. Top 3 Books by Price               \n");
        printf("  2. Top 3 Books by Rating              \n");
        printf("  3. Exit                               \n");
        printf("========================================\n");
        printf("Enter your choice: ");
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
            printf("\n========================================\n");
            printf("          TOP 3 BOOKS BY PRICE          \n");
            printf("========================================\n");
        }
        else if (choise == 2)
        {
            for (int i = 0; i < *totalBooks - 1; i++)
            {
                for (int j = 0; j < *totalBooks - 1 - i; j++)
                {
                    if (allbooks[j].book_bookrating < allbooks[j + 1].book_bookrating)
                    {
                        bookdata temp = allbooks[j];
                        allbooks[j] = allbooks[j + 1];
                        allbooks[j + 1] = temp;
                    }
                }
            }
            printf("\n========================================\n");
            printf("          TOP 3 BOOKS BY RATING         \n");
            printf("========================================\n");
        }
        else if (choise == 3)
        {
           printf("Exit Successfully!..");
            break;
        }
        else
        {
            printf("\nInvalid choice! Please try again.\n");
        }
        
        int limit = (*totalBooks < 3) ? *totalBooks : 3;
        for (int i = 0; i < limit; i++)
        {
             printf("\nBook Number : %d\n", i + 1);
            printf("----------------------------------------\n");
            printf("Author Name : %s\n", allbooks[i].book_author_name);
            printf("Book ID     : %d\n", allbooks[i].book_id);
            printf("Book Name   : %s\n", allbooks[i].book_name);
            printf("Book Rating : %.1f\n", allbooks[i].book_bookrating);
            printf("Book Price  : Rs. %.1f\n", allbooks[i].book_price);
        }
        printf("========================================\n");
    }
}

void sorting_book(bookdata *allbooks, int *totalBooks)
{
    int choise;
    int found = 0;
    while (1)
    {
        printf("\n");
        printf("========================================\n");
        printf("             SORT BOOKS                 \n");
        printf("========================================\n");
        printf("  1. Sort by Book ID                    \n");
        printf("  2. Sort by Book Price                  \n");
        printf("  3. Sort by Book Rating                 \n");
        printf("  4. Exit                               \n");
        printf("========================================\n");

        printf("Enter your choice: ");
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
            printf("\nBooks sorted by ID successfully!\n");
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
            printf("\nBooks sorted by price successfully!\n");
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
            printf("\nBooks sorted by rating successfully!\n");
        }
        else if (choise == 4)
        {
            printf("\nThank you for using Book Management System!\n");
            break;
        }
        else
        {
            printf("\nInvalid choice! Please try again.\n");
        }

        printf("\n========================================\n");
        printf("           SORTED BOOK DETAILS          \n");
        printf("========================================\n");
        for (int i = 0; i < *totalBooks; i++)
        {

            printf("\nBook Number : %d\n", i + 1);
            printf("----------------------------------------\n");
            printf("Author Name : %s\n", allbooks[i].book_author_name);
            printf("Book ID     : %d\n", allbooks[i].book_id);
            printf("Book Name   : %s\n", allbooks[i].book_name);
            printf("Book Rating : %.1f\n", allbooks[i].book_bookrating);
            printf("Book Price  : Rs. %.1f\n", allbooks[i].book_price);
        }
        printf("\n========================================\n");
    }
}
void delete_books(bookdata *deleted, int *totalBooks)
{
    int id;
    int found = 0;
    printf("\n");
    printf("========================================\n");
    printf("             DELETE BOOK                \n");
    printf("========================================\n");
    printf("\nEnter Book ID to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < *totalBooks; i++)
    {
        if (deleted[i].book_id == id)
        {
            found = 1;
            for (int j = i; j < *totalBooks - 1; j++)
            {
                deleted[j] = deleted[j + 1];
            }
            (*totalBooks)--;

            printf("\n----------------------------------------\n");
            printf("       Book deleted successfully!       \n");
            printf("========================================\n");
        }
    }
    if (found == 0)
    {
        printf("\n----------------------------------------\n");
        printf("             Book not found!            \n");
        printf("========================================\n");
    }
}
void search_books(bookdata *search, int *totalbooks)
{
    int id;
    int found = 0;
    printf("\n");
    printf("========================================\n");
    printf("             SEARCH BOOK                \n");
    printf("========================================\n");

    printf("\nEnter Book ID: ");
    scanf("%d", &id);
    for (int i = 0; i < *totalbooks; i++)
    {
        if (search[i].book_id == id)
        {

            found = 1;

            printf("\n========================================\n");
            printf("             BOOK DETAILS               \n");
            printf("========================================\n");

            printf("\nAuthor Name : %s\n", search[i].book_author_name);
            printf("Book ID     : %d\n", search[i].book_id);
            printf("Book Name   : %s\n", search[i].book_name);
            printf("Book Rating : %.1f\n", search[i].book_bookrating);
            printf("Book Price  : Rs. %.1f\n", search[i].book_price);

            printf("----------------------------------------\n");
            printf("Book displayed successfully!\n");
            printf("========================================\n");

            break;
        }
    }
    if (found == 0)
    {
        printf("\n========================================\n");
        printf("             BOOK NOT FOUND             \n");
        printf("========================================\n");
    }
}

void add_1_books(bookdata *add, int *totalbooks)
{
    {
        if (*totalbooks >= 100)
        {
            printf("Book storage is full!\n");
            return;
        }
        int index = *totalbooks; // number
        printf("Enter your book Author Name :  ");
        scanf(" %19[^\n]", add[index].book_author_name);
        printf("Enter your book  Name :  ");
        scanf(" %19[^\n]", add[index].book_name);
        printf("Enter your book id : ");
        scanf("%d", &add[index].book_id);
        printf("Enter you book price :  ");
        scanf("%f", &add[index].book_price);
        printf("Enter you book bookrating : ");
        scanf("%f", &add[index].book_bookrating);

        (*totalbooks)++;

        printf(" One new book added sucessfully!..\n Total books is %d !\n", index + 1);
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
        int index = *totalBooks;
        printf("Enter your book id : ");
        scanf("%d", &add[index].book_id);
        printf("Enter your book Author Name :  ");
        scanf(" %49[^\n]", add[index].book_author_name);
        printf("Enter your book  Name :  ");
        scanf(" %49[^\n]", add[index].book_name);
        printf("Enter you book price :  ");
        scanf("%f", &add[index].book_price);
        printf("Enter you book bookrating : ");
        scanf("%f", &add[index].book_bookrating);

        (*totalBooks)++;

        printf("%d Book added  successfully!\n", i + 1);
        printf("\n..............................................................\n");
    }
}

void display(bookdata *add, int *totalBooks)
{

    if (*totalBooks == 0)
    {
        printf("\n");
        printf("============================================================\n");
        printf("                 NO BOOKS AVAILABLE                         \n");
        printf("============================================================\n");
        return;
    }

    for (int i = 0; i < *totalBooks; i++)
    {
        printf("\nBook ID   : %d\n", add[i].book_id);
        printf("Book Author Name : %s\n", add[i].book_author_name);
        printf("Book Name : %s\n", add[i].book_name);
        printf("Price     : Rs. %.1f\n", add[i].book_price);
        printf("Rating    : %.1f\n", add[i].book_bookrating);

        printf("----------------------------------------\n");
    }

    printf("All books displayed successfully!\n");
}

void updatedbooks(bookdata *allbookdata, int *totalBooks)
{
    printf("\n");
    printf("========================================\n");
    printf("            UPDATE BOOK DETAILS        \n");
    printf("========================================\n");
    int book_id;
    int found = 0;
    printf("\nEnter  book ID : ");
    scanf("%d", &book_id);

    for (int i = 0; i < *totalBooks; i++)
    {
        int choise;
        if (allbookdata[i].book_id == book_id)
        {
            found = 1;

            while (1)
            {
                /* code */

                printf("\n----------------------------------------\n");
                printf("1. Update Book Price\n");
                printf("2. Update Book Rating\n");
                printf("3. Exit!.\n");
                printf("----------------------------------------\n");

                printf("Enter your choice: ");
                scanf("%d", &choise);

                float price;
                float ratting;

                if (choise == 1)
                {
                    printf("\nEnter New Price: Rs. ");
                    scanf("%f", &price);

                    allbookdata[i].book_price = price;

                    printf("\nBook price updated successfully!\n");
                }
                else if (choise == 2)
                {
                    printf("\nEnter New Rating: ");
                    scanf("%f", &ratting);

                    allbookdata[i].book_bookrating = ratting;

                    printf("\nBook rating updated successfully!\n");
                }
                else if (choise == 3)
                {
                    printf("Exit Successfully!..");
                    break;
                }
                else
                {
                    printf("\nInvalid choice! Please try again.\n");
                }

                printf("========================================\n");
               
            }
        }
    }

    if (found == 0)
    {
        printf("\nBook not found!\n");
        printf("========================================\n");
    }
}