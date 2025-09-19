#include "Shape.h"
#include <iostream>
#include <cstring>
using namespace std;

Shape::Shape(double a, double b, const char* name):origin(a, b){
    shapeName = new char[strlen(name) + 1];
    strcpy(shapeName, name);
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
    delete [] shapeName;
    name = new char[strlen(name) + 1];
    strcpy(shapeName, name);
}

void Shape::set_location(double a, double b){
    origin.set_location(a, b);
}

void Shape::display() const{
    cout << "Shape Name: " << shapeName << endl;
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