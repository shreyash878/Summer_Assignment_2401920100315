# Library Management System
## Description
This project demonstrates the use of Java Interfaces and Classes in an online library management system.
The system supports two types of users:
* Kid User
* Adult User
Each user can:
* Register an account
* Request a book
The project implements different rules for registration and book borrowing based on the user's age and the category of the book.
## Technologies Used
* Java
* Object-Oriented Programming (OOP)
* Interfaces

## Project Structure

LibraryManagement/

├── LibraryUser.java

├── KidUser.java

├── AdultUser.java

└── LibraryInterfaceDemo.java

## Features

### Kid User

* Can register only if age is less than 12.
* Can borrow only "Kids" category books.
* Borrowed books must be returned within 10 days.

### Adult User

* Can register only if age is greater than 12.
* Can borrow only "Fiction" category books.
* Borrowed books must be returned within 7 days.

## Concepts Demonstrated

* Interface implementation
* Method overriding
* Encapsulation using classes
* Conditional statements
* Object creation and method invocation

## Author

Submitted as part of a Java OOP Assignment.
