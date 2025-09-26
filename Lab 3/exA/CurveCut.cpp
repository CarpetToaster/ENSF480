#include "CurveCut.h"
#include <iostream> 
#include <math.h>
#include <assert.h>

using namespace std;

CurveCut::CurveCut(double x_pos, double y_pos, double side_a, double side_b,
             double rad, const char* name)
:Shape(x_pos, y_pos, name), Rectangle(x_pos, y_pos, side_a, side_b, name),
Circle(x_pos, y_pos, rad, name){
    assert(radius <= min(side_a, side_b));
}

double CurveCut::area() const{
    return Rectangle::area() - 0.25*Circle::area();
}

double CurveCut::perimeter() const{
    return Rectangle::perimeter() - 2*radius + 0.25*Circle::perimeter();
}

void CurveCut::set_radius(double rad){
    assert(radius <= min(side_a, side_b));
    radius = rad;
}

void CurveCut::display(){
    cout << "\nCurveCut Name: " << shapeName << endl;
    origin.display();
    cout << "Width: " << side_a << endl;
    cout << "Length: " << side_b << endl;
    cout << "Radius of the cut: " << radius << endl;
}