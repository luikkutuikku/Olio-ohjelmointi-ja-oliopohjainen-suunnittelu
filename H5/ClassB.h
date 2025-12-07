#ifndef CLASSB_H
#define CLASSB_H

#include <string>
using std::string;

class ClassB
{
private:
    string info;

public:
    void setInfo(string value);
    string getInfo();
};

#endif
