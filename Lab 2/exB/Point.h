/*
* File Name: Point.h
* Assignment: Lab 2 Exercise B
* Completed by: Ayre Ibrahim
* Submission Date: Sept 21, 2025
*/

#ifndef POINT_H
#define POINT_H

class Point{
private:
    double x; // x-coord on cartesian plane
    double y; // y-coord on cartesian plane
    static int count;  // number of point objects that exist, used for id
    int id; // auto generated id, where the first object has id 1001, second has 1002, etc.

public:
    //Constructor to init data members
    Point(double a, double b);
    // REQUIRES: two doubles a and b


    //Getters
    double get_x() const;
    // PROMISES: returns the value of the x-coordinate
    // REQUIRES: x is initialized

    double get_y() const;
    // PROMISES: returns the value of the y-coord
    // REQUIRES: y is initialized

    int get_id() const;
    // PROMISES: returns the id of this as an integer


    //Setters
    void set_y(double val);
    // PROMISES: sets the y value to the passed value
    // REQUIRES: a valid double

    void set_x(double val);
    // PROMISES: sets the x value to the passed value
    // REQUIRES: a valid double

    void set_location(double a, double b);
    // PROMISES: sets the x = arg1 and y = arg2;
    // REQUIRES: both a and b are valid doubles

    
    //User functions
    double distance(const Point& other) const;
    // PROMISES: returns the distance between this point and another
    // REQUIRES: this point and the other are valid points

    static double distance(const Point& first, const Point& second);
    // PROMISES: returns the distance between two point objects
    // REQUIRES: two valid point objects

    static int counter();
    // PROMISES: returns the number of points to have ever existed in the current runtime

    void display() const;
    // PROMISES: displays this point object in the format:
    // X-coordinate: ######.##
    // Y-coordinate: ######.##
};

#endif