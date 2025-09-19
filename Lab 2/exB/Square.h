#ifndef SQUARE_H
#define SQUARE_H
#include "Shape.h"

class Square : public Shape{
protected:
    double side_a;

public:
    // Constructor
    Square(double x_pos, double y_pos, double side_a_len, const char* name);

    // Getters
    virtual double area() const;

    virtual double perimeter() const;

    double get_side_a() const;

    // Setters
    void set_side_a(double len);

    virtual void display() const;
};

#endif