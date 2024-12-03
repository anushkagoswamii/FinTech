#ifndef ANALYTICS_H
#define ANALYTICS_H

#include <vector>
#include "Transaction.h"

class Analytics {
public:
    static double calculateProfitLoss(const std::vector<Transaction>& transactions);
    static void generateProfitLossGraph(const std::vector<Transaction>& transactions);
};

#endif
