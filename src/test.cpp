/* test.cpp
    Test class implementation file */
#include "test.h"
#include "planner.h"
#include "clock.h"
#include "passanger.h"
#include "elevator.h"
#include "floor.h"
#include "button.h"
#include <iostream>
using namespace std;

Test::Test()
{
    //ctor
    std::cout << "Test::ctor()" << std::endl;
}

Test::~Test()
{
    //dtor
    std::cout << "Test::dtor()" << std::endl;
}

void Test::run()
{
    Planner * planner = new Planner();
    Clock * clock = new Clock();
    Elevator * elevator = new Elevator();
    Floor * floor_1 = new Floor();
    Floor * floor_2 = new Floor();
    Button * button_1 = new Button();
    Button * button_2 = new Button();

    clock->set_time(START);
    clock->set_time(STOP);

    delete planner;
    delete clock;
    delete elevator;
    delete floor_1;
    delete floor_2;
    delete button_1;
    delete button_2;
}