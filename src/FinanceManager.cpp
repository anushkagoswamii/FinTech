#include "FinanceManager.h"
#include <iostream>

FinanceManager::FinanceManager() : totalInvestedAmount(0.0), totalSavings(0.0) {}

void FinanceManager::addTransaction(const Transaction& transaction) {
    transactions.push_back(transaction);
}

void FinanceManager::viewFinanceSummary() {
    calculateTotalInvestments();
    calculateTotalSavings();
    std::cout << "\n--- Financial Summary ---\n";
    std::cout << "Total Invested: $" << totalInvestedAmount << "\n";
    std::cout << "Total Savings: $" << totalSavings << "\n";
}

void FinanceManager::calculateTotalInvestments() {
    totalInvestedAmount = 0.0;
    for (const auto& transaction : transactions) {
        if (transaction.getType() == "Investment") {
            totalInvestedAmount += transaction.getAmount();
        }
    }
}

void FinanceManager::calculateTotalSavings() {
    totalSavings = 0.0;
    for (const auto& transaction : transactions) {
        if (transaction.getType() == "Savings") {
            totalSavings += transaction.getAmount();
        }
    }
}

void FinanceManager::showProfitLossGraph() {
    // You can integrate matplotlib-cpp or any graphing library to visualize this data.
}
