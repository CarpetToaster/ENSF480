/*
* File Name: Shape.cpp
* Assignment: Lab 2 Exercise B
* Completed by: Ayre Ibrahim
* Submission Date: Sept 21, 2025
*/

#include "Shape.h"
#include <iostream>
#include <cstring>
using namespace std;

void Shape::copy(const Shape& other){
    if (other.shapeName != nullptr){
        shapeName = new char[strlen(other.shapeName) + 1];
        strcpy(shapeName, other.shapeName);
    }
    else{
        shapeName = new char[2];
        strcpy("", shapeName);
    }

}

Shape::Shape(double a, double b, const char* name):origin(a, b){
    if (name == nullptr){
        name = "";
    }
    shapeName = new char[strlen(name) + 1];
    strcpy(shapeName, name);
}

Shape::Shape(const Shape& source)
    :origin(source.origin.get_x(), source.origin.get_y()){
    copy(source);
}

Shape& Shape::operator =(const Shape& rhs){
    if (this != &rhs){
        delete [] shapeName;
        copy(rhs);
    }
    return *this;
}

Shape::~Shape(){
    delete [] shapeName;
}

const Point& Shape::get_origin() const{
    return origin;
}

const char* Shape::get_name() const{
    return shapeName;
}

void Shape::set_name(const char* name){
    if (name == nullptr){
        name = "";
    }
    delete [] shapeName;
    name = new char[strlen(name) + 1];
    strcpy(shapeName, name);
}

void Shape::set_location(double a, double b){
    origin.set_location(a, b);
}

void Shape::display() const{
    cout << "\nShape Name: " << shapeName << endl;
    origin.display();
}

double Shape::distance(Shape& other){
    return Point::distance(origin, other.origin);
}

double Shape::distance(Shape& first, Shape& second){
    return Point::distance(first.origin, second.origin);
}

void Shape::move(double dx, double dy){
    origin.set_location(origin.get_x() + dx, origin.get_y() + dy);
}