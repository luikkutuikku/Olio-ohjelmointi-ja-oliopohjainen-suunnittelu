#include <iostream>
#include <string>
using namespace std;

class Chef {
private:
    string name;

public:
    Chef(string inputName) {
        name = inputName;
        cout << "Chef " << name << " konstruktori " << endl;
    }

    ~Chef() {
        cout << "Chef " << name << " destruktori " << endl;
    }

    string getName() {
        return name;
    }

    void makeSalad() {
        cout << "Chef " << name << " makes salad" << endl;

    }

    void makeSoup() {
        cout << "Chef " << name << " makes soup" << endl;
    }

};

class ItalianChef : public Chef {
public:
    ItalianChef(string inputName)
        : Chef(inputName)
    {
        cout << "ItalianChef " << getName() << " konstruktori" << endl;
    }

    ~ItalianChef() {
        cout << "ItalianChef " << getName() << " destruktori" << endl;
    }

    void makePasta() {
        cout << "ItalianChef " << getName() << " makes pasta" << endl;
    }
};

int main() {

    Chef chef("Gordon Ramsay");
    chef.makeSalad();
    chef.makeSoup();

    ItalianChef iChef("Anthony Bourdain");
    iChef.makeSalad();
    iChef.makeSoup();
    iChef.makePasta();

    cout << "name of the Italian Chef is " << iChef.getName() << endl;

    return 0;
}

