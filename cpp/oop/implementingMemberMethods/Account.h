#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>
#include<bits/stdc++.h>

class Account
{
public:
    std::string name;
    double balance;

    void set_balance(double bal);
    double get_balance();

    void set_name(std::string n);
    std::string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
    
    // 4 OVERLOADED CONSTRUCTORS CALLED
    // Account();
    // Account(std::string name);
    // Account(double balance);
    // Account(std::string name, double balance);

    // // DESTRUCTOR CALLED
    // ~Account();

    Account()   {
        std::cout<<"No args constructor called"<<std::endl;
    }
    Account(std::string name);
    Account(double balance);
    Account(std::string name, double balance);
    ~Account();
};

#endif