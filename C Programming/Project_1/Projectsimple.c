
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char name[50];
    char author[50];
    float price;
    float rating;
} Book;

Book *books = NULL;
int total = 0;

void addBook();
void displayBooks();
void searchBook();
void updateBook();
void deleteBook();
void sortBooks();
void top3Books();

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

    int choice;

    while (1)
    {
        printf("\n");
        printf("============================================\n");
        printf("          BOOK MANAGEMENT SYSTEM            \n");
        printf("============================================\n");
        printf("|                                          |\n");
        printf("|   1. Add a New Book                      |\n");
        printf("|   2. Display All Books                   |\n");
        printf("|   3. Search for a Book                   |\n");
        printf("|   4. Update a Book                       |\n");
        printf("|   5. Delete a Book                       |\n");
        printf("|   6. Sort Books                          |\n");
        printf("|   7. Display Top 3 Books                 |\n");
        printf("|   8. Exit                                |\n");
        printf("|                                          |\n");
        printf("============================================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\n............................Add Your Book...........................\n");
            addBook();
            break;

        case 2:
            printf("\n............................Display all books...........................\n");
            displayBooks();
            break;

        case 3:
            printf("\n............................Search your books...........................\n");
            searchBook();
            break;

        case 4:
            printf("\n............................Updated Your Book...........................\n");
            updateBook();
            break;

        case 5:
            printf("\n............................Delete you book book...........................\n");
            deleteBook();
            break;

        case 6:
            printf("\n............................Sort you book books...........................\n");
            sortBooks();
            break;

        case 7:
            printf("\n............................Top 3 book books...........................\n");
            top3Books();
            break;

        case 8:
            free(books);
            printf("\nThank you for using Book Management System!\n");
            return 0;

        default:
            printf("Invalid choice!\n");
        }
    }
}

// Add Book using realloc()
void addBook()
{
    Book *temp;

    temp = realloc(books, (total + 1) * sizeof(Book));

    if (temp == NULL)
    {
        printf("Memory allocation failed!\n");
        return;
    }

    books = temp;

    printf("Enter Book ID: ");
    scanf("%d", &books[total].id);

    printf("Enter Book Name: ");
    scanf(" %49[^\n]", books[total].name);

    printf("Enter Author Name: ");
    scanf(" %49[^\n]", books[total].author);

    printf("Enter Price: ");
    scanf("%f", &books[total].price);

    printf("Enter Rating: ");
    scanf("%f", &books[total].rating);

    total++;

    printf("Book added successfully!\n");
}

// Display all books
void displayBooks()
{
    if (total == 0)
    {
        printf("No books available!\n");
        return;
    }

    for (int i = 0; i < total; i++)
    {
        printf("\nBook ID: %d\n", books[i].id);
        printf("Book Name: %s\n", books[i].name);
        printf("Author: %s\n", books[i].author);
        printf("Price: %.2f\n", books[i].price);
        printf("Rating: %.1f\n", books[i].rating);
    }
}

// Search book
void searchBook()
{
    int id, found = 0;

    printf("Enter Book ID: ");
    scanf("%d", &id);

    for (int i = 0; i < total; i++)
    {
        if (books[i].id == id)
        {
            printf("Book Name: %s\n", books[i].name);
            printf("Author: %s\n", books[i].author);
            printf("Price: %.2f\n", books[i].price);
            printf("Rating: %.1f\n", books[i].rating);

            found = 1;
            break;
        }
    }

    if (found == 0)
        printf("Book not found!\n");
}

// Update book
void updateBook()
{
    int id, found = 0, choice;

    printf("Enter Book ID: ");
    scanf("%d", &id);

    for (int i = 0; i < total; i++)
    {
        if (books[i].id == id)
        {
            found = 1;
            while (1)
            {

                printf("1. Update Price\n");
                printf("2. Update Rating\n");
                printf("3. Exit!..\n");
                printf("Enter choice: ");
                scanf("%d", &choice);

                if (choice == 1)
                {
                    printf("Enter new price: ");
                    scanf("%f", &books[i].price);
                }
                else if (choice == 2)
                {
                    printf("Enter new rating: ");
                    scanf("%f", &books[i].rating);
                }
                else if (choice == 3)
                {
                    printf("Exit successfully!\n");
                    break;
                }

                else
                {
                    printf("Invalid choice!\n");
                    return;
                }

                printf("Book updated successfully!\n");
                break;
            }
        }
    }

    if (found == 0)
        printf("Book not found!\n");
}

// Delete book
void deleteBook()
{
    int id, found = 0;

    printf("Enter Book ID: ");
    scanf("%d", &id);

    for (int i = 0; i < total; i++)
    {
        if (books[i].id == id)
        {
            found = 1;

            for (int j = i; j < total - 1; j++)
            {
                books[j] = books[j + 1];
            }

            total--;

            if (total == 0)
            {
                free(books);
                books = NULL;
            }
            else
            {
                Book *temp = realloc(books, total * sizeof(Book));

                if (temp != NULL)
                    books = temp;
            }

            printf("Book deleted successfully!\n");
            break;
        }
    }

    if (found == 0)
        printf("Book not found!\n");
}

// Sort books by price
void sortBooks()
{
    Book temp;
    int choice;

    if (total == 0)
    {
        printf("No books available!\n");
        return;
    }

    while (1)
    {
        printf("\n");
        printf("========================================\n");
        printf("             SORT BOOKS                 \n");
        printf("========================================\n");
        printf("  1. Sort by Book ID                    \n");
        printf("  2. Sort by Book Price                 \n");
        printf("  3. Sort by Book Rating                \n");
        printf("  4. Exit                               \n");
        printf("========================================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 4)
        {
            printf("Exit successfully!\n");
            break;
        }

        if (choice < 1 || choice > 4)
        {
            printf("Invalid choice! Please try again.\n");
            continue;
        }

        // Bubble sort
        for (int i = 0; i < total - 1; i++)
        {
            for (int j = 0; j < total - 1 - i; j++)
            {
                if (choice == 1)
                {
                    // Sort by Book ID: ascending
                    if (books[j].id > books[j + 1].id)
                    {
                        temp = books[j];
                        books[j] = books[j + 1];
                        books[j + 1] = temp;
                    }
                }
                else if (choice == 2)
                {
                    // Sort by Price: ascending
                    if (books[j].price > books[j + 1].price)
                    {
                        temp = books[j];
                        books[j] = books[j + 1];
                        books[j + 1] = temp;
                    }
                }
                else if (choice == 3)
                {
                    // Sort by Rating: ascending
                    if (books[j].rating > books[j + 1].rating)
                    {
                        temp = books[j];
                        books[j] = books[j + 1];
                        books[j + 1] = temp;
                    }
                }
            }
        }

        if (choice == 1)
        {
            printf("Books sorted by ID!\n");
        }
        else if (choice == 2)
        {
            printf("Books sorted by price!\n");
        }
        else if (choice == 3)
        {
            printf("Books sorted by rating!\n");
        }

        displayBooks();
    }
}
// Display top 3 books by rating
void top3Books()
{
    Book temp;
    int limit;
    int choice;

    if (total == 0)
    {
        printf("No books available!\n");
        return;
    }

    if (total < 3)
    {
        limit = total;
    }
    else
    {
        limit = 3;
    }

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
        scanf("%d", &choice);

        if (choice == 3)
        {
            printf("Exit successfully!\n");
            break;
        }

        if (choice != 1 && choice != 2)
        {
            printf("Invalid choice! Please try again.\n");
            continue;
        }

        // Sort books in descending order
        for (int i = 0; i < total - 1; i++)
        {
            for (int j = 0; j < total - 1 - i; j++)
            {
                if (choice == 1)
                {
                    // Sort by price: highest first
                    if (books[j].price < books[j + 1].price)
                    {
                        temp = books[j];
                        books[j] = books[j + 1];
                        books[j + 1] = temp;
                    }
                }
                else if (choice == 2)
                {
                    // Sort by rating: highest first
                    if (books[j].rating < books[j + 1].rating)
                    {
                        temp = books[j];
                        books[j] = books[j + 1];
                        books[j + 1] = temp;
                    }
                }
            }
        }

        if (choice == 1)
        {
            printf("\n===== TOP 3 BOOKS BY PRICE =====\n");

            for (int i = 0; i < limit; i++)
            {
                printf("\nBook Name: %s\n", books[i].name);
                printf("Price: %.2f\n", books[i].price);
            }
        }
        else if (choice == 2)
        {
            printf("\n===== TOP 3 BOOKS BY RATING =====\n");

            for (int i = 0; i < limit; i++)
            {
                printf("\nBook Name: %s\n", books[i].name);
                printf("Rating: %.1f\n", books[i].rating);
            }
        }
    }
}