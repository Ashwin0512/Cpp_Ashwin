#ifndef __PLAYER_H_
#define __PLAYER_H_
#include<string>
#include<iostream>

class Player    {
    private:
    std::string name;
    double health;
    double xp;

    public:
    Player();
    // Player(std::string n);
    // Player(doubl`e h);
    // Player(double x);
    // Player(std::string n, double h);
    // Player(std::string n, double x);
    // Player(double h, double x);
    Player(std::string n,double h,double x);
    ~Player();

    void set_name(std::string);
    std::string get_name();
    void set_health(double);
    double get_health();
    void set_xp(double);
    double get_xp();
};
#endif