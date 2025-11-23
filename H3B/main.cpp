#include <iostream>
#include <memory>
using namespace std;

class Animal {
public:
    virtual ~Animal() {
        cout << "Animal tuhoutuu" << endl;
    }

    virtual void callOut() {
        cout << "Eläin ääntelee." << endl;
    }
};

class Dog : public Animal {
public:
    ~Dog() override {
        cout << "Dog tuhoutuu" << endl;
    }

    void callOut() override {
        cout << "Koira haukkuu!" << endl;
    }
};

int main()
{
    Animal a;
    Dog d;

    a.callOut();
    d.callOut();

    unique_ptr<Animal> animalDog = make_unique<Dog>();
    animalDog->callOut();

    return 0;
}
