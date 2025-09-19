#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Square.h"

class Rectangle : public Square{
protected:
    double side_b;

public:
    // Constructor
    Rectangle(
        double x_pos, double y_pos, double side_a_len, 
        double side_b_len, const char* name
    );

    // Getters
    double area() const;

    double perimeter() const;

    double get_side_b() const;

    // Setters
    void set_side_b(double len);

    // User functions
    void display() const;
};

#endif