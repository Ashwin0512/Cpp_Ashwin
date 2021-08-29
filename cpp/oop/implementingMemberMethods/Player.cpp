#include "Player.h"
using namespace std;

Player::Player() : name{"None"}, health{100}, xp{100} {
    cout<<"No args constructor called"<<endl;
}

// Player::Player(string n) : name{n}, health{100}, xp{100} {
//     cout<<"String args constructor called"<<endl;
// }

// Player::Player(double h) : health{h}, name{"None"}, xp{100} {
//     cout<<"Health args constructor called"<<endl;
// }

// Player::Player(double x) : health{100}, name{"None"}, xp{x} {
//     cout<<"xp args constructor called"<<endl;
// }

// Player::Player(string n,double h) : health{h}, name{n}, xp{100} {
//     cout<<"Health, name args constructor called"<<endl;
// }
//
// Player::Player(string n,double x) : health{100}, name{n}, xp{x} {
//     cout<<"xp, name args constructor called"<<endl;
// }

// Player::Player(double h,double x) : health{h}, name{"None"}, xp{x} {
//     cout<<"Health,xp args constructor called"<<endl;
// }

Player::Player(string n,double h,double x) : name{n},health{h}, xp{x} {
    cout<<"Three args constructor called"<<endl;
}

Player::~Player()   {
    cout<<"destructor called"<<endl;
}

void Player::set_name(string n)  {
    name = n;
}

string Player::get_name()   {
    return name;
}

void Player::set_health(double h)   {
    health = h;
}

double Player::get_health() {
    return health;
}

void Player::set_xp(double x)   {
    xp = x;
}

double Player::get_xp() {
    return xp;
}