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