#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
private:
    std::string brand;
    std::string model;
    int yearModel;

public:
    Car(const std::string& brand, const std::string& model, int yearModel);

    void printData() const;
};

#endif
