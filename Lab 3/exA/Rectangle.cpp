/*
* File Name: Rectangle.cpp
* Assignment: Lab 2 Exercise B
* Completed by: Ayre Ibrahim
* Submission Date: Sept 21, 2025
*/

#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(double x_pos, double y_pos, double side_a_len, 
        double side_b_len, const char* name
    ):Shape(x_pos, y_pos, name), 
    Square(x_pos, y_pos, side_a_len, name), side_b(side_b_len){}

double Rectangle::area() const{
    return side_a * side_b;
}

double Rectangle::perimeter() const{
    return 2*side_a + 2*side_b;
}

double Rectangle::get_side_b() const{
    return side_b;
}

void Rectangle::set_side_b(double len){
    side_b = len;
}

void Rectangle::display() const{
    cout << "\nRectangle Name: " << shapeName << endl;
    origin.display();
    cout << "Side a: " << side_a << endl;
    cout << "Side b: " << side_b << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimeter: " << perimeter() << endl;
}