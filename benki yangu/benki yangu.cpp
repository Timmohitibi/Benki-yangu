#include <iostream>
using namespace std;

// Bank Account class
class BankAccount {
private:
    double balance; // Stores the account balance

public:
    // Constructor to initialize balance
    BankAccount(double initial_balance = 0) {
        balance = initial_balance;
    }

    // Function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful! New balance: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful! New balance: $" << balance << endl;
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    // Function to check balance
    void checkBalance() const {
        cout << "Current balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account(1000); // Initialize account with $1000
    int choice;
    double amount;

    do {
        // Display menu
        cout << "\n--- Bank Management System ---" << endl;
        cout << "1. Deposit Money" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: $";
                cin >> amount;
                account.deposit(amount);
                break;
            case 2:
                cout << "Enter amount to withdraw: $";
                cin >> amount;
                account.withdraw(amount);
                break;
            case 3:
                account.checkBalance();
                break;
            case 4:
                cout << "Thank you for using the Bank Management System!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}

