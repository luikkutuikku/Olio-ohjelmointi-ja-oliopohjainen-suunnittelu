#ifndef CLASSA2_H
#define CLASSA2_H

#include <string>
using std::string;

#include "ClassB.h"

class ClassA2
{
private:
    ClassB &refB;

public:
    ClassA2(ClassB &value);
    string getBinfo();
    void setBinfo(string value);
};

#endif
