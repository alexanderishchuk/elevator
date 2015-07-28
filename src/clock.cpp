/* clock.cpp
    Clock class implementation file */
#include "clock.h"
#include <iostream>

Clock::Clock(int h, int m, int s)
{
    //ctor
    std::cout << "CLock::ctor()" << std::endl;
    set_time(h, m, s);
}

Clock::~Clock()
{
    //dtor
    std::cout << "Clock::dtor()" << std::endl;
}

void Clock::set_time (char * t[])
{
    if (t[0] < 0)
    {
        std::cout << "Hours too low. Setting to 00" << std::endl;
        t[0] = 0;
    } else if (t[0] > 59)
    {
        std::cout << " Hours too high. Setting to 59" << std::endl;
        t[0] = 59;
    }

    if (t[1] < 0)
    {
        std::cout << "Minutes too low. Setting to 00" << std::endl;
        t[1] = 0;
    } else if (t[1] > 59)
    {
        std::cout << " Minutes too high. Setting to 59" << std:: endl;
        t[1] = 59;
    }

    if (t[2] < 0)
    {
        std::cout << "Seconds too low. Setting to 00" << std::endl;
        t[2] = 0;
    } else if (t[2] > 59)
    {
        std::cout << " Seconds too high. Setting to 59" << std:: endl;
        t[2] = 59;
    }
}

void Clock::print_time ()
{
    if (hours < 10)
        std::cout << "0" << hours << ":";
    else
        std::cout << hours << ":";

    if (minutes < 10)
        std::cout << "0" << minutes << ":";
    else
        std::cout << minutes << ":";

    if (seconds < 10)
        std::cout << "0" << seconds << std::endl;
    else
        std::cout << seconds << std::endl;
}

void Clock::test_clock_setting ()
{
    int hour;
    int minute;
    int second;

    std::cout << "Set time, space is devider (ex.: 8 15 00 for 8:15 AM): ";
    std::cin >> hour >> minute >> second;
    set_time(hour, minute, second);
    print_time();
}