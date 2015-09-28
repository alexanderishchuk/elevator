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
    cout << "Test::ctor()" << std::endl;
}

Test::~Test()
{
    //dtor
    cout << "Test::dtor()" << std::endl;
}

void Test::run()
{
    Clock * clock = new Clock;
    Planner * planner = new Planner;

    Floor ** floor = new Floor *[2];
    floor[0] = new Floor;
    floor[1] = new Floor;

    Elevator * elevator = new Elevator;

    Button ** button = new Button *[2];
    button[0] = new Button;
    button[1] = new Button;

    Passanger ** psngr = new Passanger*[2];

    clock->set_time(START, VERBOSE);
    clock->set_time(STOP, VERBOSE);

    while (clock->work_time())
    {
        for (int floor_num = 0; floor_num < 2; floor_num++)
        {
            if (!floor[floor_num]->get_psngr_present())
            {
                if (true){}
                planner->plan_psngr(floor_num);
            }
        }
    }

    delete button[1];
    delete button[0];
    delete [] button;
    delete floor[1];
    delete floor[0];
    delete [] floor;
    delete elevator;
    delete planner;
    delete clock;
}
