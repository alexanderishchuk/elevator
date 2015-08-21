/* clock.cpp
    Clock class implementation file */
#include "clock.h"
#include <iostream>

using namespace std;

Clock::Clock()
{
    //ctor
    cout << "CLock::ctor()" << endl;
}

Clock::~Clock()
{
    //dtor
    cout << "Clock::dtor()" << endl;
}

void Clock::set_time (string time_type, bool verbose)
{
    int * time = 0;
    int hours, minutes, seconds;

    if (time_type == START)
        time = start_time;
    else if (time_type == STOP)
        time = stop_time;
    else
        cout << "Wrong time type in void Clock::set_time().";

    if (verbose)
    {
        cout << "Set " << time_type << " time (ex.: 8 15 00 for 8:15 AM): ";
        cin >> hours >> minutes >> seconds;
        time[0] = hours;
        time[1] = minutes;
        time[2] = seconds;
    }

    if (time[0] < 0)
    {
        if (verbose)
            cout << "Hours too low. Setting to 00" <<endl;
        time[0] = 0;
    } else if (time[0] > 23)
    {
        if (verbose)
            cout << "Hours too high. Setting to 23" << endl;
        time[0] = 23;
    }

    if (time[1] < 0)
    {
        if (verbose)
            cout << "Minutes too low. Setting to 00" << endl;
        time[1] = 0;
    } else if (time[1] > 59)
    {
        if (verbose)
            cout << "Minutes too high. Setting to 59" << endl;
        time[1] = 59;
    }

    if (time[2] < 0)
    {
        if (verbose)
            cout << "Seconds too low. Setting to 00" << endl;
        time[2] = 0;
    } else if (time[2] > 59)
    {
        if (verbose)
            cout << "Seconds too high. Setting to 59" << endl;
        time[2] = 59;
    }

    // assigning an initial state of current_time to start_time
    if (time == start_time)
    {
        for (int i = 0; i < 3; i++)
            current_time[i] = start_time[i];
    }
}

void Clock::print_time (string time_type)
{
    int * time = 0;

    if (time_type == START)
        time = start_time;
    else if (time_type == STOP)
        time = stop_time;
    else if (time_type == CURRENT)
        time = current_time;
    else
        cout << "Wrong time type in void Clock::print_time(string).";

    for (int i = 0; i <= 1; i++)
    {
        if (time[i] < 10)
            cout << "0" << time[i] << ":";
        else
            cout << time[i] << ":";
    }

    if (time[2] < 10)
        cout << "0" << time[2] << endl;
    else
        cout << time[2] << endl;
}

void Clock::tick_up ()
{
    current_time[2]++;

    for (int i = 2; i > 0; i--)
        if (current_time[i]>59)
        {
            current_time[i] = 0;
            current_time[i - 1]++;
    }
}

bool Clock::work_time()
{
    if (current_time[2] == stop_time[2] &&
        current_time[1] == stop_time[1] &&
        current_time[0] == stop_time[0])
        return false;
    else
        return true;
}
