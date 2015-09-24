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

int get_location()
{
	return location;
}