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
    Floor floor[2];
    Button button[2];

    clock->set_time(START, VERBOSE);
    clock->set_time(STOP, VERBOSE);

    while (clock->work_time())
    {
        for (int floor_id = 0; floor_id <= 1; floor_id++)
        {
            if (!floor[floor_id].has_passanger())
            {

            }
        }
    }

    delete planner;
    delete clock;
    delete elevator;
}
