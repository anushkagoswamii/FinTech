#include "MockAPI.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

double MockAPI::getStockPrice(const std::string& stockSymbol) {
    // Just for demonstration, simulate a random stock price change
    srand(time(0));
    return 50.0 + (rand() % 50);  // Random price between 50 and 100
}

void MockAPI::simulateMarketChange() {
    // Simulate some market change logic (e.g., stock price changes randomly)
    srand(time(0));
    std::cout << "Stock prices have changed!\n";
}
