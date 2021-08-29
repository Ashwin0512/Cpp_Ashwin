#include <iostream>
using namespace std;

class Account
{
private:
    string name;
    double balance;

public:
    // DECLARED INLINE
    void set_balance(double bal)
    {
        balance = bal;
    }
    double get_balance()
    {
        return balance;
    }

    // DECLARED OUTSIDE CLASS DECLARATION
    void set_name(string n);
    string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);

    Account()   {
        cout<<"No args constructor called"<<endl;
    }
    Account(string name);
    Account(double balance);
    Account(string name, double balance);
    ~Account();
};

void Account::set_name(string n)
{
    name = n;
}

string Account::get_name()
{
    return name;
}

bool Account::deposit(double amount)
{
    balance += amount;
    return true;
}

bool Account::withdraw(double amount)
{
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

int main()
{
    Account ashwin_account;
    ashwin_account.set_name("354549848622@SBI");
    ashwin_account.set_balance(56222.22);
    cout << ashwin_account.get_name() << endl;
    cout << ashwin_account.get_balance() << endl;
    ashwin_account.deposit(10000);
    cout << ashwin_account.get_balance() << endl;
    ashwin_account.withdraw(2000);
    cout << ashwin_account.get_balance() << endl;
}