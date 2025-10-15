#ifndef LAB4EXC_H
#define LAB4EXC_H
#include <string>
using namespace std;

class Moveable{ // Abstract class as interface
public:
    virtual void forward() = 0;

    virtual void backwards() = 0;
};

class Resizeable{ // Abstract class as interface
public:
    virtual void shrink(int n) = 0;

    virtual void enlarge(int n) = 0;
};

class Vehicle: public Resizeable, public Moveable{ // Abstract class Vehicle implements Moveable and resizable
protected:
    string name;

public:
    Vehicle(string name);

    virtual void move() = 0;
};

class Car final: public Vehicle{
private:
    int seats;

public:
    void turn();
};

#endif