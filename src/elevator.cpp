#include "elevator.h"
#include <iostream>

using namespace std;

Elevator::Elevator()
{
    //ctor
    cout << "Elevator::ctor()" << endl;
    set_location(0);
}

Elevator::~Elevator()
{
    //dtor
    cout << "Elevator::dtor()" << endl;
}

void Elevator::set_location(int loc)
{
    location = loc;
}

int Elevator::get_location()
{
    return location;
}