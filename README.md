# Data Structures & Algorithms — Coursework Repository

A collection of **C++ laboratory tasks, practical implementations, and a mid-semester project** completed as part of the Data Structures course in the BS Artificial Intelligence program.

This repository documents the practical side of the course: implementing core data structures, understanding how they work in memory, and applying searching, sorting, traversal, and manipulation techniques through small programs.

## Repository Overview

The work is organized as individual C++ source files. Each lab task can be compiled and executed independently.

| Area | Practical work represented in the repository |
|---|---|
| Arrays & Dynamic Memory | Array input/output, dynamic allocation, traversal, swapping, and memory release |
| Pointers | Pointer-based array access, pointer arithmetic, addresses, and searching |
| Abstract Data Types (ADTs) | Array ADT operations and encapsulation using classes |
| Linked Lists | Node creation, traversal, append, insertion, deletion, and linked-list operations |
| Stacks | Stack operations and checking whether a string is a palindrome |
| Queues | Array-based queue operations and a linked-list-based queue implementation |
| Searching & Sorting | Linear search, binary search, and Bubble Sort |
| Graphs | Adjacency-list and adjacency-matrix representations, BFS, and DFS |
| Trees | Binary Search Tree insertion, deletion, and tree traversals |

## Course Topics & Practical Implementations

### 1. Arrays and Dynamic Memory
- Declaring, initializing, and traversing arrays.
- Taking user input and displaying array elements.
- Swapping values between arrays.
- Finding minimum and maximum values.
- Searching for an element and reporting its index and memory address.
- Allocating arrays dynamically with `new[]` and releasing memory with `delete[]`.

### 2. Pointers
- Declaring and initializing pointers.
- Accessing array elements through pointers.
- Pointer arithmetic, including expressions such as `*(p + i)`.
- Understanding the relationship between array elements and memory addresses.

### 3. Abstract Data Types (ADTs)
- Implementing an array-based list using a C++ class.
- Maintaining the current number of stored elements.
- Displaying elements and retrieving the list length.
- Deleting an element by shifting subsequent array elements.

### 4. Singly Linked Lists
- Defining nodes with data and a pointer to the next node.
- Connecting nodes using pointers.
- Creating linked lists dynamically.
- Traversing and displaying a linked list.
- Appending new nodes.
- Inserting nodes at a specified position.
- Deleting nodes from a specified position.
- Sorting linked-list data and applying a binary-search-style approach.

### 5. Stacks
- Understanding the stack's **Last In, First Out (LIFO)** principle.
- Working with a stack using an array and a `top` index.
- Pushing characters onto a stack.
- Using a stack to check whether an entered string is a palindrome.

### 6. Queues
- Understanding the queue's **First In, First Out (FIFO)** principle.
- Implementing enqueue and dequeue operations using an array.
- Searching and sorting queue elements in a practical task.
- Implementing a queue with a linked list using `front` and `rear` pointers.
- Practicing queue utility operations such as checking whether it is empty, viewing the front element, and checking its size.

### 7. Searching and Sorting
- Linear search in arrays.
- Binary search in a sorted array.
- Bubble Sort for arranging values.
- Sorting linked-list values.
- Searching for values after sorting.

### 8. Graphs
- Representing graphs through an adjacency matrix.
- Representing graphs through an adjacency list.
- Adding edges and displaying adjacent vertices.
- Implementing **Breadth-First Search (BFS)** using a queue.
- Implementing **Depth-First Search (DFS)** using a stack.

### 9. Binary Search Trees
- Defining tree nodes with left and right child pointers.
- Inserting values into a Binary Search Tree.
- Finding the minimum value in a subtree.
- Deleting nodes in the main BST cases: leaf node, one child, and two children.
- Implementing inorder, preorder, and postorder traversals.

## Mid-Semester Project

### University Student Management System

The repository also contains a console-based student management project built around a **dynamic array**.

Implemented features:
- Add student records containing ID, name, semester, and CGPA.
- Display all stored student records.
- Search for a student by ID.
- Prevent duplicate student IDs.
- Automatically increase array capacity when the current array becomes full.
- Sort student records by ID using Bubble Sort.
- Sort student records by CGPA.
- Display the current number of students, array capacity, and available spaces.

The project applies dynamic memory allocation, structures, functions, searching, sorting, and basic record management in one program.

## Tools & Technologies

| Tool / Technology | Purpose |
|---|---|
| **C++** | Main programming language used for the practical implementations |
| **Visual Studio Code** | Code editing and development environment |
| **C++ compiler** | Compiling and running individual source files |
| **Git** | Version control |
| **GitHub** | Source-code hosting and repository management |

### C++ Concepts and Language Features
- Standard input/output with `iostream`
- Strings with `string`
- Structures and classes
- Functions and constructors
- Pointers and dynamic memory allocation
- `new` and `delete`
- Arrays and loops
- Conditional statements and switch cases
- Recursion in tree operations
- Standard Library containers such as `list`

## Repository Structure

The repository keeps practicals as separate source files rather than combining every task into one application.

```text
Data-Structures-Project-and-Tasks/
│
├── Lab Task 1.cpp
├── Lab Task 2.cpp
├── Lab 2 Task *.cpp
├── Lab 3 Task *.cpp
├── Lab 4 Task *.cpp
├── Lab 6 Task *.cpp
├── Lab 7 Task *.cpp
├── Lab 8 Task *.cpp
├── Lab 9 Task *.cpp
├── Lab 11 Task *.cpp
│
├── Mid Project.cpp
└── README.md
```

*The wildcard entries above represent the individual task files present in their respective lab groups.*

## How to Compile and Run

Each `.cpp` file contains its own program entry point, so compile and run **one source file at a time**.

### Using g++

1. Install a C++ compiler such as GCC (g++) and make sure it is available in your system PATH.
2. Open the repository folder in Visual Studio Code or a terminal.
3. Open a terminal in the repository directory.
4. Compile the required task:

```bash
g++ -std=c++11 "Lab 4 Task 5.cpp" -o lab_task
```

5. Run the generated program:

**Windows**
```powershell
.\lab_task.exe
```

**Linux / macOS**
```bash
./lab_task
```

Replace the source filename with the task you want to execute. For example, to compile the mid-semester project:

```bash
g++ -std=c++11 "Mid Project.cpp" -o student_management
```

## Learning Outcomes

Through these practical tasks and the mid-semester project, the repository demonstrates practice in:

- Choosing and implementing suitable data structures for different problems.
- Understanding how pointers connect and manipulate dynamically allocated data.
- Performing insertion, deletion, traversal, searching, and sorting.
- Applying linear data structures such as stacks, queues, and linked lists.
- Representing and traversing graphs.
- Building and manipulating a Binary Search Tree.
- Combining multiple data-structure concepts in a small, functional C++ application.
- Writing, compiling, testing, and maintaining separate C++ programs.

## Notes

- This is an academic learning repository containing coursework and practical implementations.
- Programs are independent exercises; they are not intended to be built as one combined application.
- Some tasks use fixed-size arrays to demonstrate fundamental concepts, while others use dynamic memory and pointers.
- The README describes the implementations present in this repository; it does not imply that every topic has been implemented as a production-ready library.

---

**Coursework focus:** Data Structures & Algorithms  
**Primary language:** C++  
**Repository:** [Data-Structures-Project-and-Tasks](https://github.com/msalman65941-sys/Data-Structures-Project-and-Tasks)
