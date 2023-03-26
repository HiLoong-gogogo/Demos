#ifndef MODULE1_A_H
#define MODULE1_A_H

#include <string>

class Module1A {
public:
    Module1A();
    ~Module1A() {}

    void Print(const std::string &msg = std::string("null"));
};

#endif // MODULE1_A_H