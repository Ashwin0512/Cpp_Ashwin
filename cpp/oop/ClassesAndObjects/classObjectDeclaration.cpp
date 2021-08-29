#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Player    {
    // ATTRIBUTES
    string name;
    int health;
    int xp;

    // METHODS
    void talk(string);
    bool isDead();
};

class Account   {
    string name;
    double balance;

    bool deposit(double amount);
    bool withdraw(double amount); 
};

int main()  {
    Player ashwin;
    Player nehal;

    Player *vandana = new Player;
    delete vandana;

    vector<Player> team1 {ashwin};
    team1.push_back(nehal);


    Account ashwin_account;
    Account aditya_account;
}