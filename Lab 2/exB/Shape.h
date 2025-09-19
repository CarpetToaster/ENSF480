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

    // Setters
    void set_name(const char* name);

    void set_location(double a, double b);

    // User functions 
    virtual void display() const;

    double distance(Shape& other);

    static double distance(Shape& first, Shape& second);

    void move(double dx, double dy);
};

#endif