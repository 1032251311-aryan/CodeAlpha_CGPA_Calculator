
# CodeAlpha CGPA Calculator

A C++ based CGPA Calculator developed as Task 1 of my CodeAlpha C++ Programming Internship.

## About the Project

The CGPA Calculator is a console-based application that calculates the Grade Point Average (GPA) for individual semesters and the overall Cumulative Grade Point Average (CGPA).

It accepts course names, grade points, and credit hours from the user and performs weighted GPA calculations.

## Features

- Supports multiple semesters.
- Accepts multiple courses in each semester.
- Allows course names containing spaces.
- Accepts grade points between 0 and 10.
- Accepts credit hours for each course.
- Calculates semester-wise GPA.
- Calculates overall CGPA.
- Displays individual course details.
- Validates user inputs.
- Displays results up to two decimal places.

## Technologies Used

- C++
- Standard Template Library (STL)
- Vectors
- Structures
- Functions
- String Handling
- Input Validation

## Formula Used

### Semester GPA

GPA = Total Weighted Grade Points / Total Credits

### Overall CGPA

CGPA = Total Weighted Grade Points Across All Semesters / Total Credits Across All Semesters

Where:

Weighted Grade Points = Grade Points × Credit Hours

## Project Structure

CodeAlpha_CGPA_Calculator/
|
|-- main.cpp
|-- README.md

## How to Run

1. Clone or download this repository.
2. Open the project folder in VS Code.
3. Open the terminal.
4. Compile the program using:

   g++ main.cpp -o cgpa

5. Run the executable:

   Windows:
   .\cgpa.exe

   Linux / macOS:
   ./cgpa

## Sample Input

2

2
Mathematics
9
4
Physics
8
3

2
Programming
10
4
Chemistry
8
3

## Sample Output

Semester 1 GPA: 8.57
Semester 2 GPA: 9.14

Total Credits: 14
Total Grade Points: 124

Overall CGPA: 8.86

## Input Validation

The application checks:
- Number of semesters must be positive.
- Number of courses must be positive.
- Grade points must be between 0 and 10.
- Credit hours must be positive.
- Course names cannot be empty.
- Invalid numeric inputs are rejected.

## Internship Information

Internship Provider: CodeAlpha
Domain: C++ Programming
Task: Task 1 - CGPA Calculator

## Author

Developed as part of the CodeAlpha C++ Programming Internship.

