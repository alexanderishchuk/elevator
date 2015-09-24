#include "passanger.h"
#include <iostream>

using namespace std;

Passanger::Passanger()
{
	// ctor
	cout << "Passanger::ctor()" << endl;
    set_location(0);
}

Passanger::~Passanger()
{
	// dtor
	cout << "Passanger::dtor()" << endl;
}

void Passanger::push_button()
{

}

void Passanger::set_location(int loc)
{
	location = loc;
}

int Passanger::get_location()
{
	return location;
}

void Passanger::set_loc_id(int id)
{
    loc_id = id;
}

int Passanger::get_loc_id()
{
    return loc_id;
}
