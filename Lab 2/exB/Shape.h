#ifndef SHAPE_H
#define SHAPE_H
#include "Point.h"

class Shape{
protected:
    Point origin; // x and y coords of this shape 
    char* shapeName; // name of this shape

    // Helper function
    void copy(const Shape& other);
    /* 
    * PROMISES: creates a deep copy of the shapeName of other
    * REQUIRES: const Shape& other
    */

public:
    // Constructor - composes point
    Shape(double a, double b, const char* name);
    /*
    * REQUIRES: two valid doubles a and b, and a char pointer to the desired name
    */

    // Copy Constructor
    Shape(const Shape& source);
    /*
    * PROMISES: constructs a deep copy of the source Shape
    * REQUIRES: a valid Shape object
    */

    // Assingnment operator
    Shape& operator =(const Shape& rhs);
    /*
    * PROMISES: sets an existing Shape object to deep copy 
    * REQUIRES: a valid Shape object rhs
    */

    // Destructor for Shape::shapeName
    virtual ~Shape();


    // Getters
    const Point& get_origin() const;
    /*
    * PROMISES: returns the this -> origin as a const Point&
    */

    const char* get_name() const;
    /*
    * PROMISES: returns the shapeName as a const char pointer
    */

    // Setters
    void set_name(const char* name);
    /*
    * PROMISES: sets this -> shapeName = name
    * REQUIRES: a const char* name
    */

    void set_location(double a, double b);
    /*
    * PROMISES: this -> origin.x = a and
    *           this -> origin.y = b
    * REQUIRES: two doubles a and b
    */


    // User functions 
    virtual void display() const;
    /*
    * PROMISES: prints shape info to terminal in this format:
    *   Shape Name: ...
    *   X-coordinate: ...
    *   Y-coordinate: ...
    */

    double distance(Shape& other);
    /*
    * PROMISES: returns the distance between this Shape and another Shape
    * REQUIRES: A valid Shape object
    */

    static double distance(Shape& first, Shape& second);
    /*
    * PROMISES: returns the distance between two Shape objects
    * REQUIRES: two valid Shape objects
    */

    void move(double dx, double dy);
    /*
    * PROMISES: sets this -> origin.x = x + dx and
    *           this -> origin.y = y + dy
    * REQUIRES
    */
};

#endif