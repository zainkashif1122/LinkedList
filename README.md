# Linked List Data Structure

Explore my C++ Linked List Data Structure project, which includes essential linked list operations like inserting and deleting nodes at the head or tail, reversing the list, and searching for specific values! This templated linked list provides flexibility to handle various data types. The project includes a `LinkedList` class and a `Node` class, as well as a menu-driven `Main.cpp` file for interactive testing.

![Screen Shot](screenshot.jpg)

## Table of Contents
1. [Introduction](#introduction)
2. [Project Overview](#project-overview)
3. [Features](#features)
4. [Installation](#installation)
5. [Live Preview of the Program](#live-preview-of-the-program)
6. [File Structure](#file-structure)
7. [Technologies Used](#technologies-used)
8. [Code Explanation](#code-explanation)
9. [Future Improvements](#future-improvements)
10. [Conclusion](#conclusion)

## Introduction
This C++ project showcases a templated linked list, supporting multiple data types and various operations, such as inserting at the head or tail, deleting nodes, searching, and displaying. A user-friendly menu in `Main.cpp` lets users experiment with these operations directly.

## Project Overview
The linked list implementation in this project includes a `Node` class to represent each node in the list and a `LinkedList` class to define core operations and list management functionality.

## Features
- **Insert at Head**  
  Adds a new node with a given value at the beginning of the list.

- **Delete at Head**  
  Removes the first node, displaying an error if the list is empty.

- **Insert at Tail**  
  Adds a new node at the end of the list.

- **Delete at Tail**  
  Removes the last node, with underflow protection if the list is empty.

- **Search for Value**  
  Searches for a specified value in the list and provides feedback on whether the value is found.

- **Reverse List**  
  Reverses the entire list, switching the order of all nodes.

- **Find Nth Node**  
  Displays the data at a specified position in the list.

- **Insert After a Value**  
  Inserts a new node after a node containing a specified value.

## Installation
To run this **Linked List Data Structure** program, ensure a C++ compiler (e.g., g++ or Visual Studio) is installed. Then, follow these steps:

1. **Download the Source Code**  
   Clone or download the files from this repository.

2. **Compile the Code**  
   Open a terminal, navigate to the project folder, and compile with:
   ```bash
   g++ Main.cpp -o LinkedList
   ```

3. **Run the Program**  
   Execute the compiled program with:
   ```bash
   ./LinkedList
   ```

## Live Preview of the Program
Experience the linked list operations through a recording that demonstrates inserting, searching, and reversing nodes.

[`Screen Recording`](recording.mp4)

> **Note**: The recording quality has been adjusted to fit GitHub's 25MB limit.

## File Structure

- [`Node.h`](Node.h)  
  Defines the `Node` class template, containing a data field and a pointer to the next node.

- [`LinkedList.h`](LinkedList.h)  
  Contains the `LinkedList` class template, which provides methods for managing the linked list, including inserting, deleting, searching, reversing, and finding nodes.

- [`Main.cpp`](Main.cpp)  
  The main program that offers a menu-driven interface to interact with the linked list.

## Technologies Used

- **Software/Compilers**: Visual Studio, Visual Studio Code
- **Languages**: C++

## Code Explanation

The code consists of two main classes, `Node` and `LinkedList`, and an interactive `Main.cpp` for user interaction.

- **Node Class**  
  A templated class that represents a single node in the linked list, containing data and a pointer to the next node.

- **LinkedList Class**  
  Manages the list with key operations:
    - **Insert at Head/Tail**: Adds nodes at the beginning or end of the list.
    - **Delete at Head/Tail**: Removes nodes from the beginning or end.
    - **Search**: Locates a value in the list.
    - **Reverse**: Reverses the list order.
    - **Find Nth Node**: Retrieves data at a given position.
    - **Insert After a Value**: Adds a node after a specified value in the list.

## Future Improvements
- **Exception Handling**  
  Add exception handling for invalid operations, like accessing nodes in an empty list.

- **Doubly Linked List**  
  Extend the project to include a doubly linked list, allowing backward traversal.

## Conclusion
This Linked List Data Structure project in C++ demonstrates core linked list operations using a flexible, template-based design. The interactive menu allows users to practice and visualize these operations in action.
