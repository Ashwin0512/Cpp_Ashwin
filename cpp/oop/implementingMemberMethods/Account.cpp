#include "Account.h"
#include<iostream>
using namespace std;

void Account::set_balance(double bal)   {
    balance = bal;
}
double Account::get_balance()   {
    return balance;
}
void Account::set_name(string n)   {
    name = n;
}
string Account::get_name()  {
    return name;
}
bool Account::deposit(double amount) {
    balance += amount;
    return balance;
}
bool Account::withdraw(double amount)   {
    if (balance - amount > 0)
    {
        balance -= amount;
        return true;
    }
    else
    {
        return false;
    }
}

Account::Account(string name)   {
    cout<<"String arg constructor called"<<endl;
}

Account::Account(double balance)    {
    cout<<"double arg constructor called"<<endl;
}

Account::Account(string name, double balance)   {
    cout<<"two args constructor called"<<endl;
}

Account::~Account() {
    cout<<"destructor called for "<<name<<endl;
}
