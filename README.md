Library Management System in C

1. Project Overview

The Library Management System is a menu-driven application developed using the C programming language.

It helps manage book records using a Singly Linked List and stores book information in a file for future use.

2. Technologies Used

- Programming Language: C
- Compiler: GCC
- Operating System: Linux / Ubuntu
- Data Structure: Singly Linked List
- File Handling: File I/O
- Build Tool: Makefile

3. Features

The project provides the following operations:

1. Add Book – Add a new book with its name, author, number of pages and available copies.
2. List Books – Display all available book records.
3. Count Books – Display the available copies of a specific book.
4. Edit Book – Modify book name, author name, number of pages or number of books.
5. Take Book – Issue or take a book from the library.
6. Find Book – Search for a book by its name.
7. Save Books – Save book information into a file.
8. Quit – Exit the application.

4. Data Structure

The project uses a Singly Linked List.

Each node contains:

- Book name
- Author name
- Number of pages
- Number of available copies
- Pointer to the next node

Each node represents one book record.

5. File Structure

Library_Managment/
│
├── main.c
├── library.h
├── add_book.c
├── list_book.c
├── count_book.c
├── edit_book.c
├── take_book.c
├── find_book.c
├── save_book.c
├── file.c
├── makefile
└── library.dat

6. Compilation and Execution

Step 1: Compile the project

make

Step 2: Run the application

./library

Step 3: Clean object files and executable

make clean

7. File Handling

The project uses "library.dat" to store book information.

Book records are stored in the following format:

Book_Name|Author_Name|Pages|Count

The saved information can be loaded when the application starts.

8. Concepts Used

- Structures
- Pointers
- Dynamic Memory Allocation
- Singly Linked List
- Functions
- Conditional Statements
- Switch Case
- Loops
- String Handling
- File Handling
- Makefile

9. Conclusion

This project demonstrates the practical implementation of C programming concepts, especially linked lists, pointers, dynamic memory allocation and file handling.

It provides a simple way to add, search, edit, display and manage library book records.
