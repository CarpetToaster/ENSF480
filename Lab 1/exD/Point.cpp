/*
* File Name: Point.cpp
* Assignment: Lab 1 Exercise D
* Completed by: Ayre Ibrahim
* Submission Date: Sept 15, 2025
*/

#include "Point.h"

Point::Point():x(0), y(0){}

Point::Point(double a, double b): x(a), y(b){}

double Point::get_x() const{
    return x;
}

double Point::get_y() const{
    return y;
}

void Point::set_x(double a){
    x = a;
}

void Point::set_y(double a){
    y = a;
}