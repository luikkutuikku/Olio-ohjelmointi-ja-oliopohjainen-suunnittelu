#include "Car.h"
#include <iostream>

void Car::setBrand(const std::string& newBrand) {
    brand = newBrand;
}

void Car::setModel(const std::string& newModel) {
    model = newModel;
}

void Car::setYearModel(int newYearModel) {
    yearModel = newYearModel;
}

void Car::printData() const {
    std::cout << "--- Car-tiedot ---\n";
    std::cout << "  Merkki: " << brand << "\n";
    std::cout << "  Malli: " << model << "\n";
    std::cout << "  Valmistusvuosi: " << yearModel << "\n";
}
