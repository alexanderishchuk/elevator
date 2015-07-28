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

void Clock::set_time (string time_type)
{
    int * time;
    int hours, minutes, seconds;

    if (time_type == START)
        time = start_time;
    else if (time_type == STOP)
        time = stop_time;
    else if (time_type == CURRENT)
        time = current_time;
    else
        cout << "Wrong time type in void Clock::set_time(string).";

    cout << "Set " << time_type << " time, space is devider (ex.: 8 15 00 for 8:15 AM): ";
    cin >> hours >> minutes >> seconds;
    time[0] = hours;
    time[1] = minutes;
    time[2] = seconds;

    if (time[0] < 0)
    {
        cout << "Hours too low. Setting to 00" <<endl;
        time[0] = 0;
    } else if (time[0] > 23)
    {
        cout << "Hours too high. Setting to 59" << endl;
        time[0] = 59;
    }

    if (time[1] < 0)
    {
        cout << "Minutes too low. Setting to 00" << endl;
        time[1] = 0;
    } else if (time[1] > 59)
    {
        cout << "Minutes too high. Setting to 59" << endl;
        time[1] = 59;
    }

    if (time[2] < 0)
    {
        cout << "Seconds too low. Setting to 00" << endl;
        time[2] = 0;
    } else if (time[2] > 59)
    {
        cout << "Seconds too high. Setting to 59" << endl;
        time[2] = 59;
    }

    cout << time[0] << ":" << time[1] << ":" << time[2] << endl;
}

void Clock::print_time (string time_type)
{
    int * time;

    if (time_type == START)
        time = start_time;
    else if (time_type == STOP)
        time = stop_time;
    else if (time_type == CURRENT)
        time = current_time;
    else
        cout << "Wrong time type in void Clock::set_time(string).";

    cout << time[0] << ":" << time[1] << ":" << time[2] << endl;
}

/* void Clock::test_clock_setting ()
{
    int hour;
    int minute;
    int second;

    cout << "Set time, space is devider (ex.: 8 15 00 for 8:15 AM): ";
    cin >> hour >> minute >> second;
    set_time(hour, minute, second);
    print_time();
} */
