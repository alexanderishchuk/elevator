#include "floor.h"
#include <iostream>

using namespace std;

Floor::Floor()
{
    //ctor
    cout << "Floor::ctor()" << endl;
    psngr_present = false;
    psngr_planned = false;
}

Floor::~Floor()
{
    //dtor
    cout << "Floor::dtor()" << endl;
}

bool Floor::get_psngr_planned()
{
    return psngr_planned;
}

void Floor::set_psngr_planned(bool planned)
{
    psngr_planned = planned;
}

bool Floor::get_psngr_present()
{
    return psngr_present;
}

void Floor::set_psngr_present(bool present)
{
    psngr_present = present;
}
