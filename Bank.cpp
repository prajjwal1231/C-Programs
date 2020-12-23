#include <iostream>
using namespace std;

class Bank {
private:
    int acno;
    char name[30];
    long balance;

public:
	static long bankbalance;
    void openAccount()
    {   cout<<"                             //// WELCOME TO THE BANK ////"<<endl;
        cout << "Enter Account Number:- ";
        cin >> acno;
        cout << "Enter Name:- ";
        cin >> name;
        cout << "Enter  Balance:- ";
        cin >> balance;
        cout<<endl;
        bankbalance=bankbalance+balance;
    }
    void showAccount()
    {
        cout << "Account Number:- " << acno << endl;
        cout << "Name:- " << name << endl;
        cout << "Balance:- " << balance << endl;
    }
    void Deposit()
    {
        long damount;
        cout << "Enter Amount You Want To Deposit:- "<<endl;
        cin >> damount;
        balance = balance + damount;
        bankbalance=bankbalance+damount;
    }
    void Withdrawal()
    {
        long wamount;
        cout << "Enter Amount U want to withdraw? ";
        cin >> wamount;
        if (wamount <= balance)
            {
			balance = balance - wamount;
            bankbalance=bankbalance-wamount;
            }
        else
            {cout << "Less Balance..." << endl;}
    }
    void showBankbalance()
    {
    	cout<<"Total Bank Balance is :-"<<bankbalance;
	}
    int Search(int);
};
long Bank::bankbalance=0;

int Bank::Search(int a)
{
    if (acno == a) {
        showAccount();
        return (1);
    }
    return (0);
}

int main()
{
    Bank c[3];

    int found = 0, a, ch, i;
    for (i = 0; i <= 2; i++) {
        c[i].openAccount();
    }

    do {
        
        cout << "\n\n1:Display All\n2:By Account No\n3:Deposit\n4:Withdraw\n5:Show Bank Balance\n6:Exit" << endl;
        cout << "Enter Option: ";
        cin >> ch;

        switch (ch) {
        case 1: 
            for (i = 0; i <= 2; i++) {
                c[i].showAccount();
            }
            break;
        case 2: 
            cout << "Account Number? ";
            cin >> a;
            for (i = 0; i <= 2; i++) {
                found = c[i].Search(a);
                if (found)
                    break;
            }
            if (!found)
                cout << "Error Record Not Found !!" << endl;
            break;
        case 3: 
            cout << "Enter Account Number To Deposit Amount :- ";
            cin >> a;
            for (i = 0; i <= 2; i++) {
                found = c[i].Search(a);
                if (found) {
                    c[i].Deposit();
                    break;
                }
            }
            if (!found)
                cout << "Error Record Not Found !!" << endl;
            break;
        case 4: 
            cout << "Enter Account Number To Withdraw Amount :-";
            cin >> a;
            for (i = 0; i <= 2; i++) {
                found = c[i].Search(a);
                if (found) {
                    c[i].Withdrawal();
                    break;
                }
            }
            if (!found)
                cout << "Error Record Not Found" << endl;
            break;
        case 5:
        	cout<<"Total Bank Balance is :-"<<Bank::bankbalance<<endl;
        case 6: 
            cout << "Thank You For Using Have a nice day" << endl;
            break;
        }
    } while (ch != 6);
    return 0;
}

