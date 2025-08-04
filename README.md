# Student Database Management System

A simple and effective C-based Student Database CLI application to manage academic records. This project demonstrates dynamic memory allocation, linked list data structures, modular programming, and file handling in C.


# Project Overview

This command-line application mimics basic operations of a student database system. It allows users to:

- Add, edit, delete, and view student records
- Search and sort records
- Save data to a file and load on startup
- Manage data using singly linked lists with persistent storage


# Features

- **Add Student Record**  
- **Search Student by ID**  
- **Display All Records**  
- **Edit Records by Field (Name, DOB, Marks, Contact, Email)**  
- **Delete a Student Record**  
- **Save to File (`students.dat`)**  
- **Reverse Records View (in-memory only)**  
- **Prevents Duplicate Student IDs**  
- **Persistent Data Storage Across Sessions**

# Data Structure

Each record includes the following fields:

| Field            | Description                                        |
|------------------|----------------------------------------------------|
| `Student ID`     | Unique ID (e.g., `V24HE2A1`) — auto parsed         |
| `Name`           | Full name of the student                           |
| `DOB`            | Date of birth (`dd-mm-yyyy` format)                |
| `Percentage`     | Marks for Matriculation, Inter/Diploma, Graduation |
| `Contact Number` | Mobile number                                      |
| `Email ID`       | Valid email address                                |



# Prerequisites

- GCC Compiler
- Linux-based terminal (preferred)
