#include <iostream>
#include "Point.h"
using namespace std;

int main(void){
    Point alpha = Point(10.0, 20.111);
    alpha.display();
    cout << alpha.get_id() << endl;
    cout << alpha.counter();
}