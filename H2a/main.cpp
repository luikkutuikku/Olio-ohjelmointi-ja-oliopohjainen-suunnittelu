#include <iostream>
#include <iomanip>
#include <memory>

#include "Car.h"
#include "Rectangle.h"
#include "Student.h"

using namespace std;

int main() {


    Car myCar;
    myCar.setBrand("Tesla");
    myCar.setModel("Model 3");
    myCar.setYearModel(2023);

    myCar.printData();


    Rectangle* myRect = new Rectangle();

    myRect->setWidth(15.5);
    myRect->setHeight(8.2);

    cout << "\n--- Rectangle-tiedot  ---\n";
    cout << fixed << setprecision(2);
    cout << "  Leveys: " << 15.5 << "\n";
    cout << "  Korkeus: " << 8.2 << "\n";
    cout << "  Pinta-ala: " << myRect->getArea() << "\n";      // 15.5 * 8.2 = 127.10
    cout << "  Ymparyysmitta: " << myRect->getCircum() << "\n";  // 2 * (15.5 + 8.2) = 47.40


    delete myRect;
    myRect = nullptr;





    unique_ptr<Student> myStudent = make_unique<Student>();

    myStudent->setName("Matti Mallikas");
    myStudent->setStudentNumber(987654);
    myStudent->setAverage(3.95);

    cout << "\n--- Student-tiedot  ---\n";
    cout << fixed << setprecision(2);
    cout << "  Nimi: " << myStudent->getName() << "\n";
    cout << "  Opiskelijanumero: " << myStudent->getStudentNumber() << "\n";
    cout << "  Keskiarvo: " << myStudent->getAverage() << "\n";



    return 0;
}
