#include <iostream>

using namespace std;

class Shapes
{
private:
    string color;
    double area;

public:
    void setColor(string c)
    {
        color = c;
    }
    string getColor()
    {
        return color;
    }

    void setArea(double a)
    {
        area = a;
    }
    double getArea()
    {
        return area;
    }
};

class circle : public Shapes
{
private:
    double radius;

public:
    void input()
    {
        string c;
        cout << "Enter radius of circle: ";
        cin >> radius;
        cout << "Enter color of circle: ";
        cin >> c;
        setColor(c);
    }

    void calculateArea()
    {
        double a = 3.14 * radius * radius;
        setArea(a);
        cout << endl
             << "Circle Color: " << getColor() << endl;
        cout << "Area of Circle : " << getArea() << endl;
    }
};

class rectangle : public Shapes
{
private:
    double length, width;

public:
    void input()
    {
        string c;
        cout << "Enter length of rectangle: ";
        cin >> length;
        cout << "Enter width of rectangle: ";
        cin >> width;
        cout << "Enter color of rectangle: ";
        cin >> c;
        setColor(c);
    }

    void calculateArea()
    {
        double a = length*width;
        setArea(a);
        cout << endl
             << "Rectangle Color: " << getColor() << endl;
        cout << "Area of Rectangle : " << getArea() << endl;
    }
};

int main()
{
    circle c;
    rectangle r;

    cout << "Circle Input" << endl;
    c.input();
    c.calculateArea();

    cout << "\n Rectangle Input" << endl;
    r.input();
    r.calculateArea();

    return 0;
}
