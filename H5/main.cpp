#include <iostream>
#include <string>
using namespace std;

#include "ClassB.h"
#include "ClassA1.h"
#include "ClassA2.h"

int main()
{
    int a = 5;
    cout << "a:n arvo on: " << a << " ja osoite on: " << &a << endl;

    int *pointerA = &a;
    cout << "Pointterin osoittama osoite on: " << pointerA << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *pointerA << endl;

    int &refA = a;
    cout << "refA osoittaa osoitteeseen: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;

    refA = 20;
    cout << "refA = 20 -> a: " << a << ", refA: " << refA << endl;

    *pointerA = 30;
    cout << "*pointerA = 30 -> a: " << a << ", refA: " << refA << ", *pointerA: " << *pointerA << endl;

    int b = 6;
    cout << "b:n arvo: " << b << " ja osoite: " << &b << endl;

    refA = b;
    cout << "refA = b -> a: " << a << ", b: " << b << ", refA: " << refA << endl;
    cout << "&a: " << &a << ", &refA: " << &refA << endl;

    pointerA = &b;
    cout << "pointerA = &b -> osoite: " << pointerA << endl;
    cout << "*pointerA: " << *pointerA << endl;

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    ClassA1 objA1(objB);
    objA1.setBinfo("Olion objA1 asettama info");

    cout << "objB: " << objB.getInfo() << endl;
    cout << "objA1: " << objA1.getBinfo() << endl;

    ClassB &refB = objB;
    ClassA2 objA2(refB);

    objA2.setBinfo("Olion Agr asettama info");

    cout << "objB: " << objB.getInfo() << endl;
    cout << "objA2: " << objA2.getBinfo() << endl;

    return 0;
}
