#include "floor.h"
#include <iostream>

Floor::Floor()
{
    //ctor
    std::cout << "Floor::ctor()" << std::endl;
    passanger = false;
}

Floor::~Floor()
{
    //dtor
    std::cout << "Floor::dtor()" << std::endl;
}

bool Floor::has_passanger()
{
    return passanger;
}

void Floor::place_passanger()
{
    passanger = true;
}

void Floor::release_passanger()
{
    passanger = false;
}