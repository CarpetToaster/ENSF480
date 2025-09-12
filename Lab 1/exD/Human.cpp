/*
* File Name: Human.cpp
* Assignment: Lab 1 Exercise D
* Completed by: Ayre Ibrahim
* Submission Date: Sept 15, 2025
*/

#include "Human.h"
#include <cstring>
#include <iostream>
using namespace std;

void Human::copy(const Human& source){
    set_pos(source.location.get_x(), source.location.get_y());

    name = new char[strlen(source.name) + 1];
    strcpy(name, source.name);
}

Human::Human(){
    name = new char[1];
    name[0] = '\0';

    set_pos(0, 0);
}

Human::Human(const char* setName, double x, double y){
    name = new char[strlen(setName) + 1];
    strcpy(name, setName);
    set_pos(x, y);
}

Human::Human(const Human& source){
    copy(source);
}

Human& Human::operator =(Human& rhs){
    if (this != &rhs){
        delete [] name;
        copy(rhs);
    }
    return *this;
}

Human::~Human(){
    delete [] name;
}

void Human::set_name(const char* newName){
    delete [] name;
    name = new char[strlen(newName) + 1];
    strcpy(name, newName);
}

void Human::set_pos(double a, double b){
    location.set_x(a);
    location.set_y(b);
}

const char* Human::get_name() const{
    return name;
}

const Point& Human::get_location() const{
    return location;
}

void Human::display(){
    cout << "Human Name: " << name << "\nHuman Location: "
    << location.get_x() << ", "
    << location.get_y() << ".\n" << endl;
}