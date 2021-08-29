#include "Account.h"
#include "Player.h"
#include <iostream>
using namespace std;

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

    Account nehal_account("nehal",10000000);
    cout<<nehal_account.get_balance()<<"\n";

    cout<<"--------------------***************-------------------\n";

    Player shreya("shreya101",100,10);

}