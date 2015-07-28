#include "floor.h"
#include <iostream>

using namespace std;

Floor::Floor()
{
    //ctor
    cout << "Floor::ctor()" << endl;
    passanger = false;
}

Floor::~Floor()
{
    //dtor
    cout << "Floor::dtor()" << endl;
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
