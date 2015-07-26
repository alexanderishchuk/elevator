/* main.cpp

    elevator v.0.1-alfa-r1
    The simlpe elevator simulator. Counts how many passangers can
    move between two floors per setted time. */
#include "clock.h"

int main (int argc, char *argv[])
{
    Clock * clock = new Clock;

    clock->print_time();
    delete clock;

    return 0;
}
