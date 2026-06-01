#include <iostream>
using namespace std;
int main(){
    char Name[20];
    int Rno;
    int S1;
    int S2;
    int S3;
    int S4;
    int S5;
    cout << "Enter the Name of student\n";
    cin >> Name;
    cout << "Enter the Roll No. of student\n";
    cin >> Rno;
    cout << "Enter the 5 subjects marks one by one\n";
    cin >> S1;
    cin >> S2;
    cin >> S3;
    cin >> S4;
    cin >> S5;
    float percentage = ((S1+S2+S3+S4+S5)/500.0)*100;
    cout << "Report Card\nName: " << Name << "\nRoll No: " << Rno << "\nTotal: " 
    << (S1+S2+S3+S4+S5) << "\nAverage: " << (S1+S2+S3+S4+S5)/5.0 << "\nPercentage: " << 
    percentage << "%\n";
    cout << "Status: ";
    if (percentage >= 40)
    {
        cout << "Pass\n";
    }
    else
    {
        cout << "Fail\n";
    }
    
    if (percentage >= 90)
    {
        cout << "Grade: A+\n";
    }
    else if (percentage >= 80)
    {
        cout << "Grade: A\n";
    }
    else if (percentage >= 70)
    {
        cout << "Grade: B\n";
    }
    else if (percentage >= 60)
    {
        cout << "Grade: C\n";
    }
    else
    {
        cout << "Grade: D\n";
    }
    cout << "Scholorship Status: ";
    if (percentage >= 85)
    {
        cout << "Eligible";
    }
    else
    {
        cout << "Not Eligible";
    }
    return 0;
}