# Student Information Program

## Question
*Description:*  
The program captures and stores student information such as their name, roll number, and marks. It dynamically allocates memory for storing the student's name and displays the collected information after taking inputs.

## Program Details

- *File Name:* structure.c

## Variable Initialization

- struct student - A structure that holds the following data members:
  - char *name - Pointer to store the student's name, allocated with memory dynamically.
  - int rollno - To store the student's roll number.
  - float marks - To store the student's marks.

- *Pointer p*: A pointer to an instance of the structure student, used to access and modify its members.

## Program Flow

1. *Memory Allocation*:
   - The program dynamically allocates memory for the name member of the structure student using malloc.
   - It checks if the memory allocation is successful. If not, the program displays an error message and terminates.

2. *Taking User Input*:
   - The program prompts the user to enter the student's name, roll number, and marks.
   - It uses fgets to input the name to allow spaces and scanf for roll number and marks.

3. *Removing Newline Character*:
   - If the fgets function adds a newline character after the name input, the program replaces it with a null character.

4. *Displaying Output*:
   - The program prints the student's information, including the name, roll number, and marks, formatted appropriately.

5. *Memory Deallocation*:
   - The program frees the dynamically allocated memory for the name member using the free function to prevent memory leaks.
