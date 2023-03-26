#include <iostream>
#include <string>
#include "src/module1/Module1A.h"

using namespace std;

int main()
{
    cout << "Welcome to cmake project demo." << endl;

    Module1A module;
    module.Print(string("main call Module1A::Print"));

    return 0;
}