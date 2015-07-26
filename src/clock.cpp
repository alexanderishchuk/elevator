/* clock.cpp
    Clock class implementation file */
#include "clock.h"
#include <iostream>

Clock::Clock()
{
    //ctor
    std::cout << "CLock::ctor()" << std::endl;
    
}

Clock::~Clock()
{
    //dtor
    std::cout << "Clock::dtor()" << std::endl;
}

void Clock::set_clock (int hr, int min, int sec)
{
    if (hr < 0)
    {
        std::cout << "Hours too low. Setting to 00" << std::endl;
        hr = 0;
    } else if (hr > 59)
    {
        std::cout << " Hours too high. Setting to 59" << std::endl;
        hr = 59;
    }

    if (min < 0)
    {
        std::cout << "Minutes too low. Setting to 00" << std::endl;
        min = 0;
    } else if (min > 59)
    {
        std::cout << " Minutes too high. Setting to 59" << std:: endl;
        min = 59;
    }

    if (sec < 0)
    {
        std::cout << "Seconds too low. Setting to 00" << std::endl;
        sec = 0;
    } else if (sec > 59)
    {
        std::cout << " Seconds too high. Setting to 59" << std:: endl;
        sec = 59;
    }
    
    hours = hr;
    minutes = min;
    seconds = sec;
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
    set_clock(hour, minute, second);
    print_time();
}