#ifndef SHAPE_H
#define SHAPE_H
#include "Point.h"

class Shape{
protected:
    Point origin;
    char* shapeName;

public:
    // Constructor - composes point
    Shape(double a, double b, const char* name);

    ~Shape();

    // Getters
    const Point& get_origin() const;

    const char* get_name() const;

    // User functions 
    
};

#endif