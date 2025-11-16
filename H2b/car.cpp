#include "Car.h"
#include <iostream>


Car::Car(const std::string& brand, const std::string& model, int yearModel)
    : brand(brand), model(model), yearModel(yearModel)
{

}

void Car::printData() const {
    std::cout << "  Merkki: " << brand
              << ", Malli: " << model
              << ", Vuosi: " << yearModel << "\n";
}
