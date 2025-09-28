/*
* File Name: Square.cpp
* Assignment: Lab 3 Exercise A
* Completed by: Ayre Ibrahim
* Submission Date: Sept 28, 2025
*/

#include "Square.h"
#include <iostream>
using namespace std;

Square::Square(double x_pos, double y_pos, double side_a_len, const char* name)
:Shape(x_pos, y_pos, name), side_a(side_a_len){}

double Square::area() const{
    return side_a * side_a;
}

double Square::perimeter() const{
    return 4 * side_a;
}

double Square::get_side_a() const{
    return side_a;
}

void Square::set_side_a(double len){
    side_a = len;
}

void Square::display() const{
    cout << "\nSquare Name: " << shapeName << endl;
    origin.display();
    cout << "Side a: " << side_a << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimeter: " << perimeter() << endl;
}