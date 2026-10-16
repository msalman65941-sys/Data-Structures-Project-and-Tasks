
#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
using namespace std;

// Student information
struct Student
{
    int id;
    string name;
    int semester;
    float cgpa;
};

// Initial dynamic array
Student* students = new Student[2];

int studentCount = 0;
int capacity = 2;

// Increase array capacity
void increaseCapacity()
{
    int newCapacity = capacity * 2;

    Student* newArray = new Student[newCapacity];

    for (int i = 0; i < studentCount; i++)
    {
        newArray[i] = students[i];
    }

    delete[] students;

    students = newArray;
    capacity = newCapacity;

    cout << "\nArray capacity increased to "
        << capacity << endl;
}

// Search student by ID
int searchStudent(int id)
{
    for (int i = 0; i < studentCount; i++)
    {
        if (students[i].id == id)
        {
            return i;
        }
    }

    return -1;
}

// Add a new student
void addStudent()
{
    if (studentCount == capacity)
    {
        increaseCapacity();
    }

    Student s;

    cout << "\nEnter Student ID: ";
    cin >> s.id;

    if (searchStudent(s.id) != -1)
    {
        cout << "Student ID already exists!\n";
        return;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter Student Name: ";
    getline(cin, s.name);

    cout << "Enter Semester: ";
    cin >> s.semester;

    cout << "Enter CGPA: ";
    cin >> s.cgpa;

    students[studentCount] = s;
    studentCount++;

    cout << "\nStudent added successfully!\n";
}

// Display all students
void displayStudents()
{
    if (studentCount == 0)
    {
        cout << "\nNo student records available.\n";
        return;
    }

    cout << "\n--- Student Records ---\n";

    cout << left
        << setw(12) << "ID"
        << setw(22) << "Name"
        << setw(12) << "Semester"
        << setw(10) << "CGPA" << endl;

    for (int i = 0; i < studentCount; i++)
    {
        cout << left
            << setw(12) << students[i].id
            << setw(22) << students[i].name
            << setw(12) << students[i].semester
            << fixed << setprecision(2)
            << students[i].cgpa << endl;
    }
}

// Search and display a student
void findStudent()
{
    int id;

    cout << "\nEnter Student ID to search: ";
    cin >> id;

    int index = searchStudent(id);

    if (index == -1)
    {
        cout << "\nStudent not found.\n";
    }
    else
    {
        cout << "\nStudent Found!\n";
        cout << "ID: " << students[index].id << endl;
        cout << "Name: " << students[index].name << endl;
        cout << "Semester: " << students[index].semester << endl;
        cout << "CGPA: " << students[index].cgpa << endl;
    }
}

// Sort students by ID using Bubble Sort
void sortByID()
{
    for (int i = 0; i < studentCount - 1; i++)
    {
        for (int j = 0; j < studentCount - i - 1; j++)
        {
            if (students[j].id > students[j + 1].id)
            {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    cout << "\nStudents sorted by ID (ascending).\n";
    displayStudents();
}

// Sort students by CGPA using Bubble Sort
void sortByCGPA()
{
    for (int i = 0; i < studentCount - 1; i++)
    {
        for (int j = 0; j < studentCount - i - 1; j++)
        {
            if (students[j].cgpa < students[j + 1].cgpa)
            {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    cout << "\nStudents sorted by CGPA (highest first).\n";
    displayStudents();
}

// Show array information
void showArrayInfo()
{
    cout << "\nCurrent number of students: " << studentCount << endl;
    cout << "Current array capacity: " << capacity << endl;
    cout << "Available spaces: " << capacity - studentCount << endl;
}

// Main function
int main()
{
    int choice;

    do
    {
        cout << "\n===== UNIVERSITY STUDENT MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by ID\n";
        cout << "4. Sort Students by ID\n";
        cout << "5. Sort Students by CGPA\n";
        cout << "6. Show Array studentCount and Capacity\n";
        cout << "0. Exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            findStudent();
            break;

        case 4:
            sortByID();
            break;

        case 5:
            sortByCGPA();
            break;

        case 6:
            showArrayInfo();
            break;

        case 0:
            cout << "\nProgram closed.\n";
            break;

        default:
            cout << "\nInvalid choice. Try again.\n";
        }

    } while (choice != 0);

    delete[] students;

    return 0;
}
