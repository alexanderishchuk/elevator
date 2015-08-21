/* main.cpp

    elevator v.0.1-alfa-r1
    The simlpe elevator simulator. Counts how many passangers can
    move between two floors per setted time. */
#include "test.h"

int main (int argc, char *argv[])
{
    Test * test = new Test();
    test->run();
    delete test;

    return 0;
}
