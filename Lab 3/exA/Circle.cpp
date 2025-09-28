/*
* File Name: Circle.cpp
* Assignment: Lab 3 Exercise A
* Completed by: Ayre Ibrahim
* Submission Date: Sept 28, 2025
*/

#include <iostream>
#include "Circle.h"
#include <math.h>

using namespace std;

Circle::Circle(double x_pos, double y_pos, double rad, const char* name):
    Shape(x_pos, y_pos, name), radius(rad){}

double Circle::get_radius() const{
    return radius;
}

double Circle::area() const{
    return radius*radius*M_PI;
}

double Circle::perimeter() const{
    return 2*radius*M_PI;
}

void Circle::set_radius(double rad){
    radius = rad;
}

void Circle::display(){
    cout << "\nCircle Name: " << shapeName << endl;
    origin.display();
    cout << "Radius: " << radius << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimeter: " << perimeter() << endl;

}