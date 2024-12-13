#include <stdio.h>
#include <string.h>

int main() 
{
    int maxBooks = 100;       // Maximum number of books
    int finePerDay = 10;      // Fine per day for late return
    int bookCount = 0, borrowedCount = 0;
    int isBorrowed[100] = {0}; // Tracks whether a book is borrowed (0 = available, 1 = borrowed)
    int studentIDs[100] = {0}; // Tracks student IDs for borrowed books

    struct 
    {
        int bookID;
        char title[100];
        char author[100];
    } books[100];

    while (1) 
    {
        int choice;
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. Borrow Book\n");
        printf("3. Return Book\n");
        printf("4. Generate Reports\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) 
        {
            if (bookCount >= maxBooks) 
            {
                printf("Library is full. Cannot add more books.\n");
                continue;
            }
            printf("Enter Book ID: ");
            scanf("%d", &books[bookCount].bookID);
            printf("Enter Book Title (use underscores for spaces): ");
            scanf("%s", books[bookCount].title);
            printf("Enter Book Author (use underscores for spaces): ");
            scanf("%s", books[bookCount].author);
            bookCount++;
            printf("Book Added Successfully.\n");

        } 
        else if (choice == 2) 
        {
            int bookID, studentID, found = 0;
            printf("Enter Student ID: ");
            scanf("%d", &studentID);
            printf("Enter Book ID: ");
            scanf("%d", &bookID);

            for (int i = 0; i < bookCount; i++) 
            {
                if (books[i].bookID == bookID) 
                {
                    found = 1;
                    if (isBorrowed[i] == 1) 
                    {
                        printf("Book is already borrowed.\n");
                    } 
                    else 
                    {
                        isBorrowed[i] = 1;
                        studentIDs[i] = studentID;
                        borrowedCount++;
                        printf("Book Borrowed Successfully by Student %d.\n", studentID);
                    }
                    break;
                }
            }
            if (!found) 
            {
                printf("Book not found.\n");
            }

        } 
        else if (choice == 3) 
        {
            int bookID, studentID, daysLate, found = 0;
            printf("Enter Student ID: ");
            scanf("%d", &studentID);
            printf("Enter Book ID: ");
            scanf("%d", &bookID);
            printf("Enter Number of Days Late: ");
            scanf("%d", &daysLate);

            for (int i = 0; i < bookCount; i++) 
            {
                if (books[i].bookID == bookID && isBorrowed[i] == 1 && studentIDs[i] == studentID) 
                {
                    found = 1;
                    isBorrowed[i] = 0;
                    borrowedCount--;
                    if (daysLate > 0) 
                    {
                        printf("Fine of Rs. %d Applied.\n", daysLate * finePerDay);
                    }
                    printf("Book Returned Successfully.\n");
                    break;
                }
            }
            if (!found) 
            {
                printf("Record not found for Student ID %d and Book ID %d.\n", studentID, bookID);
            }

        } 
        else if (choice == 4) 
        {
            printf("\nList of All Available Books:\n");
            for (int i = 0; i < bookCount; i++) 
            {
                if (isBorrowed[i] == 0) 
                {
                    printf("Book ID: %d, Title: \"%s\", Author: \"%s\"\n", books[i].bookID, books[i].title, books[i].author);
                }
            }

            printf("\nList of Borrowed Books:\n");
            for (int i = 0; i < bookCount; i++) 
            {
                if (isBorrowed[i] == 1) 
                {
                    printf("Student ID: %d, Borrowed: \"%s\"\n", studentIDs[i], books[i].title);
                }
            }

        } 
        else if (choice == 5) 
        {
            printf("Exiting...\n");
            break;

        } 
        else 
        {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
} 
