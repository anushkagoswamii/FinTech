#ifndef MOCKAPI_H
#define MOCKAPI_H

#include <string>

class MockAPI {
public:
    static double getStockPrice(const std::string& stockSymbol);
    static void simulateMarketChange();
};

#endif
