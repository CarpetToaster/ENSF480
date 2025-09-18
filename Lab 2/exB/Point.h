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
    // PROMISES: sets the y value 

    void set_x(double val);

    void set_location(double a, double b);

    //User functions
    double distance(const Point& other) const;

    static double distance(const Point& first, const Point& second);

    static int counter();

    void display();
};

#endif