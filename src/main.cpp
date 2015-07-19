/*
    main.cpp

    elevator v.0.0.1
    The simlpe elevator simulator. Counts how many passangers can move between
    two floors per setted time.
*/
#include "planner.h"
#include "elevator.h"
#include "passanger.h"
#include "floor.h"
#include "clock.h"

int main (int argc, char *argv[])
{
    Planner * planner = new Planner;
    Floor * floor_1 = new Floor;
    Floor * floor_2 = new Floor;
    Elevator * elevator = new Elevator;

    if (!floor_1->check_passanger())
        Passanger * psngr_1 = new Passanger;


    return 0;
}
