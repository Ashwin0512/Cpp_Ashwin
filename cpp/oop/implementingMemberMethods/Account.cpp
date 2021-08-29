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

Account::Account(string n) : name{n}, balance{0}  {
    cout<<"String arg constructor called"<<endl;
}

Account::Account(double b) : name{"None"}, balance{b}   {
    cout<<"double arg constructor called"<<endl;
}

Account::Account(string n, double b) : name{n}, balance{b}  {
    cout<<"two args constructor called"<<endl;
}

Account::~Account() { 
    cout<<"destructor called for "<<name<<endl;
}
