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
    if (hr < 0 || hr > 23)
        std::cout << "Hours out of range!" << std::endl;
    else if (min < 0 || min > 59)
        std::cout << "Minutes out of range!" << std::endl;
    else if (sec < 0 || sec > 59)
        std::cout << "Seconds out of range!" << std::endl;
    else
    {
        hours = hr;
        minutes = min;
        seconds = sec;
    }
}

void Clock::print_time ()
{
    if (hours < 10)
        std::cout << "0" << hours << ":";
    else
        std::cout << hours << ":";
    
    if (minutes < 10)
        std::cout << " 0" << minutes << ":";
    else
        std::cout << minutes << ":";
        
    if (seconds < 10)
        std::cout << " 0" << seconds << std::endl;
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