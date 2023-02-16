#include <iostream>
using namespace std;

class ATM
{

public:
    string name;
    int PinNo;
    string Address;
    string location;
    long int AccNo;

public:
    int Balance = 0.00;
    int DepositAmount;
    int withdrawamont;
    ATM()
    {
        cout << "Enter acc holdar Name :   \n";
        cin >> name;
        cout << "*******************************\n";
        cout << "Enter acc holder accno :   \n";
        cin >> AccNo;
        cout << "********************************* \n";
        cout << "Enter acc holdar Address :  \n";
        cin >> Address;
        cout << "********************************* \n";
        cout << "Enter acc holdar location :  \n";
        cin >> location;
        cout << "********************************* \n";
        cout << "Enter 4 Digit Pin No  :   \n";
        cin >> PinNo;
    }
    void print()
    {
        cout << "Account Holder Name      : " << name << endl;
        cout << "Account Holder Adderss   : " << Address << endl;
        cout << "Account Holder location  : " << location << endl;
        cout << "Account Holder accno     : " << PinNo << endl;
        cout << "your current Balance     : " << Balance << endl;
    }

    void Deposit()
    {

        cout << "\n::::::::::::::::::::: * ATM ACCOUNT DEPOSIT * ::::::::::::::::::::: \n\n";
        cout << "present avaliable your balance is : " << Balance << endl;
        cout << "\nEnter the ammount to be diposite : \n";
        cin >> DepositAmount;
        Balance = Balance + DepositAmount;
        cout << "your  deposited  amount successfuly \n ";
        cout << "---Your New Balance---:" << Balance << endl;
    }
    void Withdrawal()
    {
        cout << "\n::::::::::::::::::::: * ATM ACCOUNT WITHDRAWL * ::::::::::::::::::::: \n\n";
        cout << "---Your New Balance---:" << Balance << endl;
        cout << "Enter the  Withdraw Amount :  \n";
        cin >> withdrawamont;
        if (Balance >= withdrawamont)
        {
            Balance = Balance - withdrawamont;
            cout << "plise... wiate... transaction.. raning \n     successfuly transaction  \n";
            cout << "your  new available Balance is :  " << Balance << endl;
        }
        else if (Balance <= withdrawamont)
        {
            cout << "\n";
            cout << "sorry you are not withdraw amount \n";
            cout << " your avaliable balance in account :" << Balance << endl;
            cout << "pleas..enter more then amount balance  : \n";
        }
        else
        {
            cout << "sorry you are exit \n plise withdeaw amount \n";
        }
    }
    void balancecheking()
    {
        cout << "------ checking account balance------- \n";
        cout << "your balance is : " << Balance << endl;
        cout << "-----------------------------------------------\n";
    }
    void Inquriy()
    {
        // cout << " swipe your atm card \n";
        // cout << "4 digit pin no : \n";
        // cin >> PinNo;
        // cout << "Enter Account  holdar Name :  \n";
        // cin >> name;
        // cout << "\nyour Balance is " << Balance << endl;
    }
    void Exit()
    {
        cout << "insufficient availabla balance in your account " << Balance << endl;
        cout << "thank you your  visit ATM  \n";
    }
};
int main()
{
    char choice;
    int PinNo, Balance;
    cout << "\\********************************************\\\n";
    cout << "-------- [   Will come to   ATM   ] -------- \n";
    cout << "   current date :  Mon fub  15:20:59  2023   \n";
    ATM a;
hi:
    cout << " ---- Do you want to choice ---- ?\n";
    cout << "1) press choice==1 to access your account : \n";
    cout << "0) press choice==0 to get help : \n";
    // cout << "account access pin no : \n";
    cin >> choice;
    if (choice == '1')
    {
    screen:
        cout << "\n\tEnter Your Pin And Access Bank Account : \n";
        cout << "4 digit pin no : \n";
        cin >> PinNo;

        if (PinNo == 5699)
        {

            cout << "\naccount current  balance to : " << Balance << endl;
        menu:
            cout << "-----------------------------------\n";
            cout << "enter your selecsion :  \n";
            cout << "1) deposit _____:\n";
            cout << "2) Withdrawal___:\n";
            cout << "3) Inquriy______:\n";
            cout << "4) Exit_________:\n";
            cout << "------------------------------------\n";
            int select;
            cin >> select;
            cout << "**************************************\n";

            ATM a1;
            switch (select)
            {
            case 1:
            {
                a1.Deposit();
                break;
            }

            case 2:
            {
                a1.Withdrawal();
                break;
            }
            case 3:
            {
                // a1.Inquriy();
                a1.print();
                break;
            }
            case 4:
            {
                a1.Exit();
                break;
            }
            default:
            {
                cout << "\n\t\"PLEASE ENTER VALID INPUT !!\"";
                goto menu;
                break;
            }

                cout << "Please enter 1 select and press return key to continue  \n";
                cout << "\nDo you want to choice ?\n press 1 continue  \n press 2  : \n";
                int continu;
                cout << "Enter continu : ";
                cin >> continu;

                if (continu == 1)
                {
                    goto screen;
                }

                else if (continu == 2)
                {
                    goto exit;
                }
            }

        help:

            cout << " help this \n continue to account for choice 1";

            cout << "enter right pin no :\n";
            cout << "press 1 to contnue : ";
            cin >> choice;
            if (choice == '1')
            {
                goto hi;
            }
        exit:

            cout << "you hed made your attempt which failed !! \n no more attemts allowed !! \n sorry ";

            return 0;
        }
    }
