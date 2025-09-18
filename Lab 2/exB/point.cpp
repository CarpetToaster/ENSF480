#include <cmath>
#include <iostream> 
#include <iomanip>
#include "Point.h"
using namespace std;

int Point::count = 0;

Point::Point(double a, double b):x(a), y(b) {
    count += 1;
    id = 1000 + count;
}

double Point::get_x() const{
    return x;
}

double Point::get_y() const{
    return y;
}

int Point::get_id() const{
    return id;
}

void Point::set_x(double val){
    x = val;
}

void Point::set_y(double val){
    y = val;
}

void Point::set_location(double a, double b){
    x = a;
    y = b;
}

double Point::distance(const Point& other) const{
    return distance(*this, other);
}

double Point::distance(const Point& first, const Point& second){
    double x_diff = second.x - first.x;
    double y_diff = second.y - first.y;

    double dist = sqrt(pow(x_diff, 2) + pow(y_diff, 2));
    return dist;
}

int Point::counter(){
    return count;
}

void Point::display(){
    cout << fixed; // floatfield manipulator set
    cout << setprecision(2); // precision now just affects anything after decimal.
    cout << "X-coordinate: " << x << endl << "Y-coordinate: " << y << endl;
}

