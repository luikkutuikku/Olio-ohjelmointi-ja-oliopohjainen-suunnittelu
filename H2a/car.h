#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
private:
    std::string brand;
    std::string model;
    int yearModel;

public:
    void setBrand(const std::string& newBrand);
    void setModel(const std::string& newModel);
    void setYearModel(int newYearModel);

    void printData() const;
};

#endif // CAR_H
