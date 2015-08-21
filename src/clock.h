/* clock.h
    Sets and counts time for tests. */
#ifndef CLOCK_H
#define CLOCK_H
#define START "start"
#define STOP "stop"
#define CURRENT "current"
#define VERBOSE true
#define SILENT false

#include <string>
using namespace std;

class Clock
{
    public:
        Clock();
        virtual ~Clock();
        void set_time(string, bool = false);
        void print_time(string);
        void tick_up ();
        bool work_time ();
    protected:
    private:
        int start_time[3];
        int stop_time[3];
        int current_time[3];
};

#endif // CLOCK_H
