#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string name, add;
    int age, DOB;
    cout << "hallo world\n";
    cout << " I am learnin c++\n";

    cout << "enter your name : ";
    getline(cin, name);
    cout << "enter add : ";
    getline(cin, add);
    // cin >> name;
    // cout << "name is " << name;
    cout << "enter age : ";
    cin >> age;
    cout << "enter DOB  : ";
    cin >> DOB;

    // cin >> add;
    cout << "name is-> " << name << endl
         << "age is-> " << age << endl
         << "DOB is-> " << DOB << endl
         << "add is-> " << add;
    // cout << add;
    return 0;
}
