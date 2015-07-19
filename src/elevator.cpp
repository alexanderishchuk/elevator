#include "elevator.h"
#include <iostream>

Elevator::Elevator()
{
    //ctor
    std::cout << "Elevator::ctor()" << std::endl;
}

Elevator::~Elevator()
{
    //dtor
    std::cout << "Elevator::dtor()" << std::endl;
}
