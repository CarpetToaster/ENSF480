/*
* File Name: Circle.h
* Assignment: Lab 3 Exercise A
* Completed by: Ayre Ibrahim
* Submission Date: Sept 28, 2025
*/

#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"

class Circle : virtual public Shape{
protected:
    double radius;

public:
    // Constructor
    Circle(double x_pos, double y_pos, double rad, const char* name);

    //Getters
    double get_radius() const;

    virtual double area() const;

    virtual double perimeter() const;

    // Setters
    virtual void set_radius(double rad);

    virtual void display(); 
};



#endif