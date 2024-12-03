#include "User.h"
#include "FinanceManager.h"
#include "Transaction.h"
#include "Analytics.h"
#include "MockAPI.h"
#include <iostream>
#include <vector>

void displayMenu() {
    User user;
    FinanceManager financeManager;
    std::vector<Transaction> transactions;
    int choice;

    do {
        std::cout << "\n--- FinTech System Menu ---\n";
        std::cout << "1. Register User\n2. View Profile\n3. Add Wallet Money\n";
        std::cout << "4. View Finance Summary\n5. Simulate Market Change\n6. Add Investment/Transaction\n7. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            user.registerUser();
            break;
        case 2:
            user.viewProfile();
            break;
        case 3: {
            double amount;
            std::cout << "Enter amount to add to wallet: ";
            std::cin >> amount;
            user.addWalletMoney(amount);
            break;
        }
        case 4:
            financeManager.viewFinanceSummary();
            break;
        case 5:
            MockAPI::simulateMarketChange();
            break;
        case 6: {
            std::string type;
            double amount;
            std::string date;
            std::cout << "Enter Transaction Type (Investment/Savings/Withdrawal): ";
            std::cin >> type;
            std::cout << "Enter Amount: ";
            std::cin >> amount;
            std::cout << "Enter Date: ";
            std::cin >> date;

            Transaction transaction(type, amount, date);
            financeManager.addTransaction(transaction);
            break;
        }
        case 7:
            std::cout << "Exiting system. Goodbye!\n";
            break;
        default:
            std::cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 7);
}

int main() {
    displayMenu();
    return 0;
}
