/*
* File Name: Square.h
* Assignment: Lab 2 Exercise B
* Completed by: Ayre Ibrahim
* Submission Date: Sept 21, 2025
*/

#ifndef SQUARE_H
#define SQUARE_H
#include "Shape.h"

class Square : virtual public Shape{
protected:
    double side_a; // Side length of all 4 sides

public:
    // Constructor
    Square(double x_pos, double y_pos, double side_a_len, const char* name);
    /*
    * REQUIRES: three doubles x_pos, y_pos, and side_a_len, and a constant
    *           character pointer to a name
    */


    // Getters
    virtual double area() const;
    /*
    * PROMISES: returns the area of the Square
    */

    virtual double perimeter() const;
    /*
    * PROMISES: returns the perimeter of the square
    */

    double get_side_a() const;
    /*
    * PROMISES: returns the side length of the square
    */

    // Setters
    void set_side_a(double len);
    /*
    * PROMISES: side_a = len;
    * REQUIRES: a double len
    */

    virtual void display() const;
    /*
    * PROMISES: displays the square info in this format:
    *   Square Name: ...
    *   X-coordinate: ...
    *   Y-coordinate: ...
    *   Side a: ...
    *   Area: ...
    *   Perimeter: ...
    */
};

#endif