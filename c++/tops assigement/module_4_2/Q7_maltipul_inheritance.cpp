#include <iostream>
#include <bits/stdc++.h>

using namespace std;
// Assume that the test results of a batch of students are stored in three different classes. Class Students are storing the roll number. Class Test stores the marks obtained in two subjects and class result contains the total marks obtained in the test. The class result can inherit the details of the marks obtained in the test and roll number of students. (Multipul Inheritance)

class Students // base class
{
public:
    string Name;
    int RollNo;

    void indeta()
    {
        cout << "::::::::::::::::::::::::::::::::::::::\n";
        cout << "Enter student name    : \n";
        cin >> Name;
        cout << " Enter student RollNo : \n";
        cin >> RollNo;
        cout << ":::::::::::::::::::::::::::::::::::::::\n";

        cout << "-------------------------------------------\n";

        cout << "[:::::::::::  student Marklist  ::::::::::]\n";
        cout << " student Name       : " << Name << endl;
        cout << "Student Roll No    : " << RollNo << endl;

        cout << "-------------------------------------------\n";
    }
};
class Exam : public Students
{
public:
    int Totalmarks = 0;
    float percentage;
    int Marks[5];
    void marksdeta()

    {
        int i;
        cout << "[-----    percentage count   ---] \n";
        cout << "Enter five subject  marks  : \n";
        for (int i = 0; i < 5; i++)
        {
            cout << "\nEnter subject marks   " << i + 1 << ":";
            cin >> Marks[i];
        Totalmarks += Marks[i];
        }
         percentage = (Totalmarks * 100) / (float)500;
        //cout << "five subect marks is :" << Marks[i] << endl;
    }
};
class Result : public Exam
{
public:
    int i;
    float avrage;
    void calculet()

    {

         avrage = Totalmarks / 5;

        cout << "Total Marks =  " << Totalmarks << endl;
        cout << "percentage  =  "  << percentage << endl;
        cout << "Average marks = " << avrage << endl; 
    }
};

int main()
{
    int num;
    cout << "Enter the num of student  :  \n";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        Exam e;
        e.indeta();
        Result r;
        r.marksdeta();
        r.calculet();
    }

    return 0;
}
