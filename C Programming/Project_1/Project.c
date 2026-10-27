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
    char book_category[20];
    float book_price;
    float book_bookrating;
} bookdata;

void addbooks(bookdata *, int *, int);
void display(bookdata *, int *);
void updatedbooks(bookdata *, int *);
void add_1_books(bookdata*,int*);
void displaySortedBooks(struct Book books[], int totalBooks);

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
       printf("......................Mune.....................\n ");
       printf("Enter 1 Add one new book\n");
       printf("Enter 2 Updated you book\n");
       printf("Enter 3 Display all books\n");
       printf("Enter 4 Exit!..\n");
       scanf("%d",&enter_no);

      if (enter_no == 1)
      {
          add_1_books(allbookdata,&totalBooks);
        
      }else if (enter_no == 2)
      {
          updatedbooks(allbookdata, &totalBooks);
        
      }else if (enter_no == 3)
      {
        printf("\n............................display all books...........................\n");
        display(allbookdata, &totalBooks);
      }else if (enter_no == 4)
            {
               displaySortedBooks(allbookdata, totalBooks);
            }
      else
      {
        printf("Sucessfully  Exit!..\n"); 
        break;
      }
    }
    

    return 0;
}

void add_1_books(bookdata* add,int* totalbooks){
{
    for (int i = 0; *totalbooks >= 100; i++)
    {
        printf("Book storage is full!\n");
        return;
    }
       int i = *totalbooks +1;//number
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
        scanf("%19s", add[i].book_name);
        printf("Enter your book id : ");
        scanf("%d", &add[i].book_id);
        printf("Enter you book price :  ");
        scanf("%f", &add[i].book_price);
        printf("Enter you book bookrating : ");
        scanf("%f", &add[i].book_bookrating);

        (*totalBooks)++;

        printf(" %d Book added  successfully!\n", i+1);
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
    printf("Enter your book id");
    scanf("%d", &book_id);

    for (int i = 0; i < *totalBooks; i++)
    {
        if (allbookdata[i].book_id == book_id)
        {
            printf("Your book is found!");
        }
    }

    for (int i = 0; i < *totalBooks; i++)
    {
        int choise;
        if (allbookdata[i].book_id == book_id)
        {
            printf("Your book is found\n");
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
            }else
            {
                printf("Enter valid number");
            }
        }
    }
}

void displaySortedBooks(struct Book allbookdata[], int totalBooks)
{
    if (totalBooks == 0)
    {
        printf("No books available!\n");
        return;
    }

    int choice, order;
    struct Book temp[100];

    printf("\n1. Sort by Price\n");
    printf("2. Sort by Rating\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice != 1 && choice != 2)
    {
        printf("Invalid choice!\n");
        return;
    }

    printf("\n1. Lowest to Highest\n");
    printf("2. Highest to Lowest\n");
    printf("Enter order: ");
    scanf("%d", &order);

    if (order != 1 && order != 2)
    {
        printf("Invalid order!\n");
        return;
    }

    // Copy original books
    for (int i = 0; i < totalBooks; i++)
    {
        temp[i] = allbookdata[i];
    }

    // Bubble Sort
    for (int i = 0; i < totalBooks - 1; i++)
    {
        for (int j = 0; j < totalBooks - i - 1; j++)
        {
            int swapNeeded = 0;

            if (choice == 1)
            {
                if ((order == 1 && temp[j].price > temp[j + 1].price) ||
                    (order == 2 && temp[j].price < temp[j + 1].price))
                {
                    swapNeeded = 1;
                }
            }
            else
            {
                if ((order == 1 && temp[j].rating > temp[j + 1].rating) ||
                    (order == 2 && temp[j].rating < temp[j + 1].rating))
                {
                    swapNeeded = 1;
                }
            }

            if (swapNeeded)
            {
                struct Book swap = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = swap;
            }
        }
    }

    // Display sorted books
    for (int i = 0; i < totalBooks; i++)
    {
        printf("\nID: %d\n", temp[i].id);
        printf("Name: %s\n", temp[i].name);
        printf("Author: %s\n", temp[i].author);
        printf("Category: %s\n", temp[i].category);
        printf("Price: %.2f\n", temp[i].price);
        printf("Rating: %.1f\n", temp[i].rating);
    }
}