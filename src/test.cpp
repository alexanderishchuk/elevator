/* test.cpp
    Test class implementation file */
#include "test.h"
#include <iostream>

Test::Test()
{
    //ctor
    std::cout << "Test::ctor()" << std::endl;
}

Test::~Test()
{
    //dtor
    std::cout << "Test::dtor()" << std::endl;
}