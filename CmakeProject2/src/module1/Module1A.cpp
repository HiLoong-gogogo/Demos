#include "Module1A.h"
#include <iostream>

using namespace std;

Module1A::Module1A()
{
    cout << "Module1A::Module1A() cpp" << endl;
}

void Module1A::Print(const std::string &msg)
{
    cout << msg << endl;
}