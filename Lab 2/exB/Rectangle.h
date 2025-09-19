#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Square.h"

class Rectangle : public Square{
protected:
    double side_b; // side length of two of the four sides

public:
    // Constructor
    Rectangle(
        double x_pos, double y_pos, double side_a_len, 
        double side_b_len, const char* name
    );
    /*
    * REQUIRES: 4 doubles x_pos, y_pos, side_a_len, and side_b_len as well
    *           as const char* name
    */

    // Getters
    double area() const;
    /*
    * PROMISES: returns the area of the rectangle
    */

    double perimeter() const;
    /*
    * PROMISES: returns the perimeter of the rectangle
    */

    double get_side_b() const;
    /*
    * PROMISES: returns the side length b of the rectrangle
    */


    // Setters
    void set_side_b(double len);
    /*
    * PROMISES: side_b = len
    * REQUIRES: double len
    */

    // User functions
    void display() const;
    /*
    * PROMISES: displays the rectangle info in this format:
    *   Rectangle Name:
    *   X-coordinate:
    *   Y-coordinate:
    *   Side a:
    *   Side b:
    *   Area:
    *   Perimeter
    */
};

#endif