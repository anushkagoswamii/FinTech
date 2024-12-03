#include "Transaction.h"

Transaction::Transaction(std::string type, double amount, std::string date) 
    : type(type), amount(amount), date(date) {}

std::string Transaction::getType() const {
    return type;
}

double Transaction::getAmount() const {
    return amount;
}

std::string Transaction::getDate() const {
    return date;
}
