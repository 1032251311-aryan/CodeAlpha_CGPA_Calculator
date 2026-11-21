
#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
using namespace std;

struct Course {
    string name;
    double grade;
    int credits;
};

int main() {

    int semesters;
    double totalGradePoints = 0;
    int totalCredits = 0;

    cout << "=====================================\n";
    cout << "          CGPA CALCULATOR\n";
    cout << "=====================================\n";

    cout << "Enter number of semesters: ";
    cin >> semesters;

    if (semesters <= 0) {
        cout << "Invalid number of semesters!\n";
        return 0;
    }

    for (int s = 1; s <= semesters; s++) {

        int n;
        double semesterGradePoints = 0;
        int semesterCredits = 0;

        vector<Course> courses;

        cout << "\nEnter number of courses in Semester " << s << ": ";
        cin >> n;

        if (n <= 0) {
            cout << "Invalid number of courses!\n";
            return 0;
        }

        for (int i = 0; i < n; i++) {

            Course c;

            cout << "\nCourse " << i + 1 << endl;

            cout << "Enter course name (one word): ";
            cin >> c.name;

            cout << "Enter grade points (0-10): ";
            cin >> c.grade;

            cout << "Enter credit hours: ";
            cin >> c.credits;

            if (c.grade < 0 || c.grade > 10 || c.credits <= 0) {
                cout << "Invalid grade or credits!\n";
                return 0;
            }

            semesterGradePoints += c.grade * c.credits;
            semesterCredits += c.credits;

            courses.push_back(c);
        }

        double gpa = semesterGradePoints / semesterCredits;

        totalGradePoints += semesterGradePoints;
        totalCredits += semesterCredits;

        cout << "\n========== SEMESTER " << s << " RESULT ==========\n";

        cout << left << setw(18) << "Course"
             << setw(15) << "Grade"
             << "Credits\n";

        for (const Course &c : courses) {
            cout << left << setw(18) << c.name
                 << setw(15) << c.grade
                 << c.credits << endl;
        }

        cout << fixed << setprecision(2);
        cout << "\nSemester GPA: " << gpa << endl;
    }

    double cgpa = totalGradePoints / totalCredits;

    cout << "\n=====================================\n";
    cout << "          FINAL CGPA RESULT\n";
    cout << "=====================================\n";

    cout << fixed << setprecision(2);
    cout << "Total Credits: " << totalCredits << endl;
    cout << "Overall CGPA: " << cgpa << endl;

    cout << "\nThank you for using CGPA Calculator!\n";

    return 0;
}
