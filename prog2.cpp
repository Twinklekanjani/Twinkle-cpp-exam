#include <iostream>

using namespace std;

class BankAcc
{
private:
    int accountNumber;
    double balance;
    string ownerName;

public:
    void createAcc(int accNo, string name, double bal)
    {
        accountNumber = accNo;
        ownerName = name;
        balance = bal;
    }

    void credit(double amount)
    {
        balance += amount;
        cout << "Credited " << amount << "Credited Successfully!" << endl;
    }

    void debit(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Debited " << amount << "Debited successfully!" << endl;
        }
        else
        {
            cout << "Insufficient Balance!" << endl;
        }
    }

    void display()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Owner Name: " << ownerName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAcc acc;
    int accNo;
    string name;
    double bal;

    cout << "Enter Account Number: ";
    cin >> accNo;
    cout << "Enter Owner Name: ";
    cin >> name;
    cout << "Enter Balance: ";
    cin >> bal;

    acc.createAcc(accNo, name, bal);

    int choice;
    double amount;
    do
    {
        cout << "\n1. Display Account\n2. Credit\n3. Debit\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            acc.display();
            break;
        case 2:
            cout << "Enter amount to credit: ";
            cin >> amount;
            acc.credit(amount);
            break;
        case 3:
            cout << "Enter amount to debit: ";
            cin >> amount;
            acc.debit(amount);
            break;
        case 4:
            cout << "Exiting... Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);

    return 0;
}
