/* main.cpp

    elevator v.0.1-alfa-r1
    The simlpe elevator simulator. Counts how many passangers can
    move between two floors per setted time. */
#include "clock.h"

int main (int argc, char *argv[])
{
    Clock * clock = new Clock;

    clock->set_time(START);
    clock->set_time(STOP);
    clock->set_time(CURRENT);
    clock->print_time(START);
    clock->print_time(STOP);
    clock->print_time(CURRENT);

    delete clock;

    return 0;
}
