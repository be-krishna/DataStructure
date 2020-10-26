#include <iostream>
using namespace std;

class Bank
{
    char depositorName[30];
    char accountType;
    int accountNumber;
    float accountBalance;

public:
    void addAccount()
    {
        cout << "\nEnter account number: ";
        cin >> accountNumber;
        cout << "\nEnter depositors name: ";
        cin >> depositorName;
        cout << "\nEnter account type: ";
        cin >> accountType;
        cout << "\nEnter account balance: ";
        cin >> accountBalance;
    }

    void depositBal(float amount)
    {
        accountBalance += amount;
        cout << "\nTransaction Successful! Available balance: " << accountBalance;
    }
    void withdrawBal(float amount)
    {
        if (accountBalance < 1000 || (accountBalance - amount) < 1000)
        {
            cout << "\nTransaction Failed! Min amount balance reached!";
        }
        else if (amount > accountBalance)
        {
            cout << "\nTransaction Failed! Insufficient funds in account!";
        }
        else
        {
            accountBalance -= amount;
            cout << "\nTransaction successful! Balance Left: " << accountBalance;
        }
    }
    void showDetail()
    {
        cout << "\nAccount Holder: " << depositorName;
        cout << "\nAccount Number: " << accountNumber;
        cout << "\nAccount balance: " << accountBalance;
        cout << "\nAccount Type (S-Saving/C-Current) : " << accountType;
    }
};

int main()
{
    system("cls");

    Bank account;
    account.addAccount();
    account.showDetail();
    account.depositBal(10000);
    account.withdrawBal(15000);
    cout << endl;
}
