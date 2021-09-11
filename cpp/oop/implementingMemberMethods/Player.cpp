#include "Player.h"
using namespace std;

Player::Player(string n,double h,double x) : name{n},health{h}, xp{x} {
    cout<<"Three args constructor called"<<endl;
}

Player::Player() : Player("None",100,100) {     // DELEGATING CONSTRUCTOR
    cout<<"No args constructor called"<<endl;
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