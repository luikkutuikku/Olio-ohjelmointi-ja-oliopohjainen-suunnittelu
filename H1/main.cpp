#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <string>

using namespace std;



void calcSum(int a, int b) {
    int sum = a + b;
    cout << "Funktio calcSum Yhteenlasku:" << endl;
    cout << a << " + " << b << " = " << sum << endl;
}


void calcDiv(int a, int b) {
    cout << "Funktio calcDiv Jakolasku:" << endl;
    if (b == 0) {
        cout << "Virhe: Jakaja ei saa olla nolla (0)!" << endl;
    } else {

        float division = static_cast<float>(a) / b;
        cout << a << " / " << b << " = " << fixed << setprecision(2) << division << endl;
    }
}



int retSum(int a, int b) {
    return a + b;
}


float retDiv(int a, int b) {
    if (b == 0) {
        throw runtime_error("jakaja ei saa olla nolla!");
    }

    return static_cast<float>(a) / b;
}



int main() {
    int a;
    int b;
    int sum_result;
    float div_result;


    cout << "Anna kokonaisluku a: ";
    if (!(cin >> a)) {
        cerr << "Virheellinen syote luvulle a." << endl;
        return 1;
    }

    cout << "Anna kokonaisluku b: ";
    if (!(cin >> b)) {
        cerr << "Virheellinen syote luvulle b." << endl;
        return 1;
    }

    cout << "\n----------------------------------------" << endl;
    cout << "1. Funktioiden kutsut, jotka TULOSTAVAT suoraan" << endl;
    cout << "----------------------------------------" << endl;


    calcSum(a, b);
    calcDiv(a, b);

    cout << "\n----------------------------------------" << endl;
    cout << "2. Funktioiden kutsut, jotka PALAUTTAVAT arvon" << endl;
    cout << "----------------------------------------" << endl;


    sum_result = retSum(a, b);
    cout << "Funktio retSum (palauttaa arvon):" << endl;
    cout << a << " + " << b << " = " << sum_result << endl;


    cout << "Funktio retDiv (palauttaa arvon):" << endl;
    try {

        div_result = retDiv(a, b);
        cout << a << " / " << b << " = " << fixed << setprecision(2) << div_result << endl;
    } catch (runtime_error& e) {

        cout << "Virhe: " << e.what() << endl;
    }

    return 0;
}
