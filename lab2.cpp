#include <iostream>

using namespace std;

int main()
{
    // Eric Nguyen, Lab 2
    int grade1;
    int grade2;
    int grade3;
    int grade4;
    float avg_grade;
    
    cout << "What's your first grade?" << endl;
    cin >> grade1;
    
    cout << "What's your second grade?" << endl;
    cin >> grade2;
    
    cout << "What's your third grade?" << endl;
    cin >> grade3;
    
    cout << "What's your fourth grade?" << endl;
    cin >> grade4;
    
    avg_grade = (grade1 + grade2 + grade3 + grade4) / 4.0;
    cout << "Your average grade is: " << avg_grade << endl;

    return 0;
}
