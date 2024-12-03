#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>

class Transaction {
private:
    std::string type;  // Savings, Investment, Withdrawal
    double amount;
    std::string date;

public:
    Transaction(std::string type, double amount, std::string date);
    std::string getType() const;
    double getAmount() const;
    std::string getDate() const;
};

#endif
