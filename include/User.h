#ifndef USER_H
#define USER_H

#include <string>

class User {
private:
    std::string name, phoneNumber, email, bankAccount, ifscCode;
    double walletBalance;
    int userID;
    static int userCount;
public:
    User();
    User(std::string name, std::string phone, std::string email, std::string bank, std::string ifsc, double wallet);
    void registerUser();
    void viewProfile();
    void saveToFile();
    void loadFromFile();
    void updateProfile(std::string newPhone, std::string newEmail);
    double getWalletBalance() const;
    void addWalletMoney(double amount);
};

#endif
