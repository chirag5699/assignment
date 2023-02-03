#include <iostream>
using namespace std;
class bank
{
public:
    double acno;
    float balance;
    string name;
    string actype;

    void informetion()
    {
        cout << "\naccount holder name :";
        getline(cin, name);
        cout << "\n enter account namber :";
        cin >> acno;
        cout << "\nenter account type(saving,current) : ";
        cin >> actype;
        cout << "\naccount balance to diposite :";
        cin >> balance;
    }

    void deposit()
    {

        int depositAmount;
        cout << "\nenter account namber :";
        cin >> acno;
        cout << "\nenter account type(saving,current) : ";
        cin >> actype;
        cout << "\nenter the amount to diposit :  ";
        cin >> depositAmount;
        balance = balance + depositAmount;
        cout << "\nAmount deposited successfuly";
        cout << "\n---Your New Balance---:" << balance;
    }
    void withdraw()
    {
        int withdraw;
        cout << "\nenter account namber :";
        cin >> acno;
        cout << "\nenter account type(saving,current) : ";
        cin >> actype;
        cout << "you are new balance ::" << balance;
        cout << "\nenter withdraw ammont : ";
        cin >> withdraw;
        if (balance >= withdraw)
        {
            balance = balance - withdraw;
            cout << "\nprocess :::: current balance :" << balance;
        }
        else if (balance <= withdraw)
        {
            cout << "sorry you are not withdraw----\n---pleash enter more then  amont balance--- :->" << balance;
        }
        else
        {
            cout << "sorry you are exit";
        }
    }
    void display()
    {
        cout << "\n-------------------------------------";
        cout << "\nName:" << name;
        cout << "\nAccount No.:" << acno;
        cout << "\nAccount Type:" << actype;
        cout << "\nAccount Balance:" << balance;
        cout << "\n-------------------------------------";
    }
};
int main()

{
    long long int acno;
    float balance;
    string name;
    string actype;

    bank dev;
    int choice;
    cout << "-------->>>  will come to dev bank   <<<---------\n";
    cout << "enter Detail accont holder";
    cout << "\naccount holder name :";
    getline(cin, name);
    cout << "\n enter account namber :";
    cin >> acno;
    cout << "\nenter account type(saving,current) : ";
    cin >> actype;
moreinf:
    cout << "***********************************************************************";
    cout << "\n1) informetion \n2) deposit \n3) withdraw \n4) display :::";
    cin >> choice;
    cout << "****************************************************************";
    switch (choice)

    {
    case 1:

        dev.informetion();

        break;

    case 2:

        dev.deposit();

        break;

    case 3:

        dev.withdraw();

        break;

    case 4:

        dev.display();

    default:
        cout << "sorry ";
        break;
    }
    cout << "\nDo you want to choice ?\n press 1 \n press 2 : \n";
    cin >> choice;

    if (choice == 1)
    {
        goto moreinf;
    }
    else if (choice == 2)
        goto exit;

exit:
    cout << ")--thank  your bank visit--(";  

    return 0;
}