#include "Analytics.h"
#include <iostream>

double Analytics::calculateProfitLoss(const std::vector<Transaction>& transactions) {
    double totalInvested = 0.0;
    double totalReturn = 0.0;

    for (const auto& transaction : transactions) {
        if (transaction.getType() == "Investment") {
            totalInvested += transaction.getAmount();
        }
        // Assuming a return type transaction for simplicity, could be added for withdrawal
        else if (transaction.getType() == "Return") {
            totalReturn += transaction.getAmount();
        }
    }

    return totalReturn - totalInvested; // Profit or loss
}

void Analytics::generateProfitLossGraph(const std::vector<Transaction>& transactions) {
    // Use matplotlib-cpp or another graphing library to generate a profit/loss graph
    double profitLoss = calculateProfitLoss(transactions);
    std::cout << "Profit/Loss: $" << profitLoss << "\n";
    // Optionally, generate a graph based on the profit/loss and other metrics.
}
