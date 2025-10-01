/*#include <iostream>

using namespace std;

int main()
{
    float test_average;
    float final_grade;
    float lab_average;
    float homework_average;
    float reading_average;

    cout<<"enter homework"
}
*/

#include <iostream>
using namespace std;

int main() {
    // Variables for grades
    double testAvg, labAvg, hwAvg, readingAvg, finalExam;
    char tookFinal; // Y or N
    
    // Ask if the final was taken
    cout << "Did you take your final exam yet? (Y/N): ";
    cin >> tookFinal;
    
    // Input all the other grades
    cout << "Enter your Test Average: ";
    cin >> testAvg;
    cout << "Enter your Lab Average: ";
    cin >> labAvg;
    cout << "Enter your Homework Average: ";
    cin >> hwAvg;
    cout << "Enter your Reading Assignment Average: ";
    cin >> readingAvg;
    
    if (tookFinal == 'Y' || tookFinal == 'y') {
        cout << "Enter your Final Exam Grade: ";
        cin >> finalExam;

        // Full grade calculation including final
        double finalGrade = (testAvg * 0.60) + (labAvg * 0.10) +
                            (hwAvg * 0.17) + (readingAvg * 0.03) +
                            (finalExam * 0.10);

        cout << "Your Final Course Grade (with final exam): " << finalGrade << "%" << endl;
    } 
    else {
        // Grade so far (only 90% of course weight)
        double partialGrade = (testAvg * 0.60) + (labAvg * 0.10) +
                              (hwAvg * 0.17) + (readingAvg * 0.03);

        // Scale it to 100% so you can see how you’re doing
        double scaledCurrentGrade = (partialGrade / 0.90);

        cout << "Your Current Grade (scaled without final exam): " << scaledCurrentGrade << "%" << endl;

        // Grade if the final exam is a zero
        double withZeroFinal = partialGrade; // already counts as 90%
        withZeroFinal += (0 * 0.10); // add final as 0%

        cout << "Your Grade if you score 0 on the Final: " << withZeroFinal << "%" << endl;
    }

    return 0;
}
