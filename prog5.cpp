#include <iostream>

using namespace std;

class Vehicles
{
public:
    virtual void startEngine() = 0;
    virtual void drive() = 0;
    virtual ~Vehicles() {}
};

class car : public Vehicles
{
public:
    void startEngine() override
    {
        cout << endl
             << "Car engine started." << endl;
    }
    void drive() override
    {
        cout << "Car is driving on the road." << endl;
    }
};

class bike : public Vehicles
{
public:
    void startEngine() override
    {
        cout << endl
             << "Bike engine started." << endl;
    }
    void drive() override
    {
        cout << "Bike is driving on the street." << endl;
    }
};

int main()
{
    car c;
    bike b;

    Vehicles *vehicles[2];
    vehicles[0] = &c;
    vehicles[1] = &b;

    for (int i = 0; i < 2; i++)
    {
        vehicles[i]->startEngine();
        vehicles[i]->drive();
    }

    return 0;
}
