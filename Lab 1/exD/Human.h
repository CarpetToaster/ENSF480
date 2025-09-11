/*
* File Name: Human.h
* Assignment: Lab 1 Exercise D
* Completed by: Ayre Ibrahim
* Submission Date: Sept 15, 2025
*/

#ifndef HUMAN_H
#define HUMAN_H
#include "Point.h"

class Human{
private:
    Point location; // Human's location
    char* name; // Human's name

    //Helper function
    void copy(const Human& source);

public:
    //Default constructor
    Human();

    //Constructor
    Human(const char* name, double x, double y);

    //Copy constructor -- needed since we have a pointer as a member variable
    Human(const Human& source);

    //Assignment operator
    Human& operator =(Human& rhs);

    //Destrcutor
    ~Human();

    //Setters
    void set_name(const char* newName);
    void set_pos(double a, double b);

    //Getters
    const char* get_name() const;
    const Point& get_location() const;

    // Utility
    void display();
};

#endif