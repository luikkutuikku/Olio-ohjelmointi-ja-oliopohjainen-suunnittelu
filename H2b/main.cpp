#include <iostream>
#include <vector>
#include <string>
#include "Car.h"

using namespace std;

int main() {


    vector<Car> carList;

    cout << "--- Autojen lisays listaan ---\n";

    carList.emplace_back("Toyota", "Prius", 2018);

    carList.emplace_back("Volvo", "XC60", 2022);

    carList.emplace_back("Ford", "Focus", 2015);

    cout << "Listalla on nyt " << carList.size() << " autoa.\n";


    if (carList.size() > 1) {
        cout << "### Toisen auton tiedot ###\n";
        carList[1].printData();
    } else {
        cout << "Virhe: Listalla ei ole tarpeeksi alkioita.\n";
    }


    cout << "### Kaikkien autojen tiedot ###\n";

    int count = 1;
    for (const Car& auto_obj : carList) {
        cout << "Auto " << count++ << ": ";
        auto_obj.printData();
    }


    return 0;
}
