/*
* File Name: CurveCut.h
* Assignment: Lab 3 Exercise A
* Completed by: Ayre Ibrahim
* Submission Date: Sept 28, 2025
*/

#ifndef CURVECUT_H
#define CURVECUT_H
#include "Circle.h"
#include "Rectangle.h"

class CurveCut: public Rectangle, public Circle{
public:
    CurveCut(double x_pos, double y_pos, double side_a, double side_b,
             double rad, const char* name);

    virtual double area() const;

    virtual double perimeter() const;

    virtual void set_radius(double rad);

    virtual void display();
};

#endif