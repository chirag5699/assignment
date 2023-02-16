#include <iostream>
#include <string.h>

// Assume a class cricketer is declared. Declare a derived class batsman from cricketer. Data member of batsman. Total runs, Average runs and best performance. Member functions input data, calculate average runs, Display data. (Single Inheritance)

using namespace std;
class cricketer // base class
{
public:
    string name;
    int runs[5], j = 1;
    void input()
    {
        cout << "-----------------------------------";
        cout << " \nEnter batsman Name : ";
        cin >> name;
        cout << "Enter batsman ran of 5 match :";
        for (int i = 0; i < 5; i++)
        {
            cout << "\nEnter run of match-" << j << ":";
            cin >> runs[i];
            j++;
        }
    }
};
class batsman : public cricketer // derived class : base class
{
public:
    // int runs[5];
    float averageRun;
    int totalruns = 0;

    void Totalruns()
    {
        for (int i = 0; i < 5; i++)
        {
            totalruns += runs[i];
        }
    }
    // int totalruns=0;
    void Averageruns()
   // {
        //for (int i = 0; i < 5; i++)
        {
        averageRun = (float)totalruns / 5;
        }
   // }
    int performance = 0;
    void bestper()
    {

        for (int i = 0; i < 5; i++)
        {
            if (runs[i] > averageRun)
            {
                performance++;
            }
            else
            {
            }
        }
    }
    // string name;

    void display()
    {
        cout << "----------------------------------------------------\n";
        cout << name << "\t\t|" << totalruns << "\t\t|" << averageRun << "\t\t|" << performance << "\t\n";
        cout << "\n----------------------------------------------------";
    }
};
int main()

{
    int num;
    cout << "Enter the number of batsman: ";
    cin >> num;
    // cricketer c1;
    batsman b1[num];
    for (int i = 0; i < num; i++)
    {
        b1[i].input();
        b1[i].Totalruns();
        b1[i].Averageruns();
        b1[i].bestper();
    }

    cout << "\nName\t  |Total run\t  |average run\t  |best performance\n";
    for (int i = 0; i < num; i++)
    {
        b1[i].display();
    }

    return 0;
}
