#ifndef FINANCEMANAGER_H
#define FINANCEMANAGER_H

#include <vector>
#include "Transaction.h"

class FinanceManager {
private:
    double totalInvestedAmount;
    double totalSavings;
    std::vector<Transaction> transactions;

public:
    FinanceManager();
    void addTransaction(const Transaction& transaction);
    void viewFinanceSummary();
    void calculateTotalInvestments();
    void calculateTotalSavings();
    void showProfitLossGraph();
};

#endif
