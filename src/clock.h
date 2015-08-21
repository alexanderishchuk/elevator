/* clock.h
    Sets and counts time for tests. */
#ifndef CLOCK_H
#define CLOCK_H
#define START "start"
#define STOP "stop"
#define CURRENT "current"

#include <string>
using namespace std;

class Clock
{
    public:
        Clock();
        virtual ~Clock();
        void set_time(string);
        void print_time(string);
        void tick_up ();
    protected:
    private:
        int start_time[3];
        int stop_time[3];
        int current_time[3];
};

#endif // CLOCK_H