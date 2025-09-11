#include <string>
#include <vector>
using namespace std;

/*
    Realistically, each of these classes should have their own .h and .cpp files with the same name as the class.
    I will not separate them for this exercise as it is not explicitly requested (and for to make grading easier)
    but I am noting I am aware of the concept.
*/

class Company{
    private:
        string companyName; //Name can be left as a string as I can't really imagine a company having a composite name (not including localization)
        Address companyAddress; //see class Address for more info

        vector<Employee> employees;
        Date dateEstablished;
        vector<Customer> customers;
        //PhoneNumber phoneNumber --Not in original comments of exC but I think this would be good to have and justifies the PhoneNumber class.
};

class Address{
    /*
    Made into it's own class because addresses depend on many factors and are inherently composite. Some may be inside of other buildings as well
    */
    private:
        string street;
        int number; //Encodes number as in a house number (i.e. 123 somewhere street)
        string city;
        string province_state;
};

class Employee{
    private:
        Name name;
        Date dateOfBirth;
        Address address;
        struct state{ //Member state, not it's own class as there's no need for unique member functions here.
            bool active;
            bool suspended; 
            bool retired;
            bool fired;
        }typedef state;
        //PhoneNumber phoneNumber --Not in original comments of exC but I think this would be good to have and justifies the PhoneNumber class.
    };

class Name{
    private:
        string fName; //legal or giveen first name
        string lName; //last name
        string preferredName; //can be nickname or preferred name for any reason
};

class Date{
    private:
        int year; 
        int month;
        int day; //Logic can go here to restrict what day can be depending on month and year for leap years, etc.
};

class Customer{
    private:
        Name name;
        Address address;
        PhoneNumber phoneNumber;
};

class PhoneNumber{
    private:
        int countryCode; //+1 for canada, for example
        int areaCode; //first 3 digits of phone number
        int telephonePrefix; //Second 3 digits
        int lineNumber; //Final 4 digits
        string numString; //Provides phone number as string (this could be just a member function, but leaving it here as we aren't making those in this lab)
};

