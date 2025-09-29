#include <iostream>
using namespace std;

int main() {
    int numCourses;
    cout << "Enter the number of courses: ";
    cin >> numCourses;

    double totalPoints = 0.0;
    int totalCredits = 0;

    for (int i = 0; i < numCourses; i++) {
        char grade;
        int credits;
        int gradePoints = 0;

        cout << "\nEnter letter grade for course " << i + 1 << " (A, B, C, D, F): ";
        cin >> grade;
        cout << "Enter number of credits for this course: ";
        cin >> credits;

        // Convert letter grade to grade points
        if (grade == 'A' || grade == 'a')
            gradePoints = 4;
        else if (grade == 'B' || grade == 'b')
            gradePoints = 3;
        else if (grade == 'C' || grade == 'c')
            gradePoints = 2;
        else if (grade == 'D' || grade == 'd')
            gradePoints = 1;
        else if (grade == 'F' || grade == 'f')
            gradePoints = 0;
        else {
            cout << "Invalid grade entered. Try again.\n";
            i--; // repeat this course entry
            continue;
        }

        totalPoints += gradePoints * credits;
        totalCredits += credits;
    }

    if (totalCredits > 0) {
        double gpa = totalPoints / totalCredits;
        cout << "\nYour GPA is: " << gpa << endl;
    } else {
        cout << "No credits entered. GPA cannot be calculated.\n";
    }

    return 0;
}