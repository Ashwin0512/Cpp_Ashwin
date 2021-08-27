#include<iostream>
#include<vector>
#include<string>
#include<math.h>
using namespace std;

class Account   {
public:
    string accNo;
    double balance;

    void deposit(double amount) {
        balance += amount;
        cout<<amount<<" credited, New balance is : "<<balance<<endl;
    }
    void withdraw(double amount)    {
        balance -= amount;
        cout<<amount<<" debited, New balance is : "<<balance<<endl;
    }
}; 

class Player    {
public: 
    // ATTRIBUTES
    string name;
    int health;
    int xp;

    // METHODS
    void talk(string text_to_say)   {
        cout<<name<<" says "<<text_to_say<<"\n";
    }
    bool isDead();

    
};

int main()  {
    Player ashwin;
    ashwin.name = "shwinn";
    ashwin.health = 100;
    ashwin.xp = 50;
    ashwin.talk("Let's attack Charlie");

    Player *aditya = new Player();
    (*aditya).name = "cherry";
    aditya->health = 99;
    aditya->xp = 34;
    // (*aditya).talk("C'mon Charlie !! Have a last breath");

    Account ashwin_account;
    ashwin_account.accNo = "38438485484959";
    ashwin_account.balance = 85345.67;
    ashwin_account.deposit(4000.33);
    ashwin_account.withdraw(10000);

    delete aditya;
}