#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare variables to store student information.
    string name;
    string department;
    int age;
    float gpa;

    /*
       A variable is a named memory location used to store data.
       cin takes input from the user.
       cout displays output on the screen.
    */

    // Take input from the user.
    cout << "Enter name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter GPA: 3.6";
    cin >> gpa;

    // Read department, including spaces if present.
    cin.ignore();
    cout << "Enter department: Software Engr";
    getline(cin, department);

    // Calculate the estimated birth year.
    int birthYear = 2026 - age;

    // Display formatted student information.
    cout << "\nStudent Information" << endl;
    cout << "-------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;
    cout << "Department: " << department << endl;
    cout << "Estimated Birth Year: " << birthYear << endl;

    return 0;
}


// This is a single-line comment.


/*
   This is a multi-line comment.
   It can cover several lines.
*/