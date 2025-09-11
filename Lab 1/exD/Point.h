/*
* File Name: Point.h
* Assignment: Lab 1 Exercise D
* Completed by: Ayre Ibrahim
* Submission Date: Sept 15, 2025
*/

#ifndef POINT_H
#define POINT_H

class Point{
private:
    double x; // x position on cartesian plane
    double y; // y coordinate on cartesian plane

public:
    //Default ctor
    Point();

    // Constructor
    Point(double a, double b);

    // Getters
    double get_x() const;
    double get_y() const;

    // Setters
    void set_x(double a);
    void set_y(double a);
};

#endif