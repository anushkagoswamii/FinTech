#include "User.h"
#include <iostream>
#include <fstream>

int User::userCount = 0;

User::User() : walletBalance(0.0), userID(0) {}

User::User(std::string name, std::string phone, std::string email, std::string bank, std::string ifsc, double wallet)
    : name(name), phoneNumber(phone), email(email), bankAccount(bank), ifscCode(ifsc), walletBalance(wallet) {
    userID = ++userCount;
}

void User::registerUser() {
    std::cout << "Enter Name: ";
    std::cin.ignore();
    std::getline(std::cin, name);
    std::cout << "Enter Phone Number: ";
    std::cin >> phoneNumber;
    std::cout << "Enter Email: ";
    std::cin >> email;
    std::cout << "Enter Bank Account: ";
    std::cin >> bankAccount;
    std::cout << "Enter IFSC Code: ";
    std::cin >> ifscCode;
    std::cout << "Enter Initial Wallet Balance: ";
    std::cin >> walletBalance;
    userID = ++userCount;
    saveToFile();
    std::cout << "Registration Successful! Your User ID is: " << userID << "\n";
}

void User::viewProfile() {
    std::cout << "\n--- User Profile ---\n";
    std::cout << "Name: " << name << "\nPhone: " << phoneNumber 
              << "\nEmail: " << email << "\nWallet Balance: $" << walletBalance << "\n";
}

void User::saveToFile() {
    std::ofstream file("../data/user_data.txt", std::ios::app);
    file << userID << "," << name << "," << phoneNumber << "," << email 
         << "," << walletBalance << "\n";
    file.close();
}

void User::loadFromFile() {
    std::ifstream file("../data/user_data.txt");
    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << "\n";
    }
    file.close();
}
