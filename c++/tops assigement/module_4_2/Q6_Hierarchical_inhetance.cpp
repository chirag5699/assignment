#include <iostream>
#include <bits/stdc++.h>

// Create a class person having members name and age. Derive a class student having member percentage. Derive another class teacher having member salary. Write necessary member function to initialize, read and write data. Write also Main function (Multiple Inheritance)
using namespace std;
class persion
{
public:
    string name;
    int age;
   
    void membersinput()
    {
        
        cout << "\nEnter member name : ";
        getline(cin, name);
        getline(cin, name);
        cout << "\nEnter members age : ";
        cin >> age;
    }

    void mamberoutput()
    {
        cout << "Name :  " << name << endl;
        cout << "Age  :  " << age << endl;
    }
};
class student : public persion
{
public:
    float percentage;
    int marks[5];
    int totalmarks = 0;
    int j = 1;
    void studantinput()
    {
        membersinput();
        int i;
        cout << "::::  percentage count  ::::\n";
        cout << "Enter 5 subject marks :  ";
        for (int i = 0; i < 5; i++)
        {
            cout << "\nEnter subject marks   " << i + 1 << ":";
            cin >> marks[i];
            // j++;
            totalmarks += marks[i];
        }
        cout << "\nTotal marks --> :   " << totalmarks;
    }
    void studantoutput()
    {
        cout << "\n|-------------------------------|\n";
        cout << " Student details are :-->   \n";
        percentage = ((float)totalmarks / (float)500) * (float)100;
       // mamberoutput();
        cout << "Percentage --> : " << fixed << setprecision(2) << percentage << endl;
        cout << "name \t age  \t percentage \n";
       cout << name << "|\t" << age << "|\t" << percentage;
    }
};
class teacher : public persion
{
public:
    int salary;
    void teacherinput()
    {
        cout << "\nTeachar detels\n ";
       // membersinput();
        cout << "\n Enter teachar salary : ";
        cin >> salary;
    }
    void teacharoutput()
    {
        cout << "|---------------------------------------|\n";
        cout << " Techar details are : \n";
        mamberoutput();

        cout << "salary : " << salary;
        cout << "\nname  \t  age  \t  salary \n";
        cout << name << " |\t" << age << " |\t" << salary;
    }
};
int main()
{
    int num1, num2;
    cout << "Enter the Namber of student detels:  \n";
    cin >> num1;
    student s[num1];

    for (int i = 0; i < num1; i++)
    {

        s[i].studantinput();
        s[i].studantoutput();

        // cout << "--------------------------\n";
    }



    cout << "\n************************************";
    cout << "\nEnter  the namber of Teachar detels :  ";
    cin >> num2;
    teacher t[num2];

    for (int i = 0; i < num2; i++)
    {
        t[i].teacherinput();
        t[i].teacharoutput();
    }

    return 0;
}