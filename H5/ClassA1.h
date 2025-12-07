#ifndef CLASSA1_H
#define CLASSA1_H

#include <string>
using std::string;

#include "ClassB.h"

class ClassA1
{
private:
    ClassB objectB;

public:
    ClassA1(ClassB value);
    string getBinfo();
    void setBinfo(string value);
};

#endif
