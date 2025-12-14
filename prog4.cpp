
#include <iostream>
using namespace std;

class Shape
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

    virtual void displayDetails() = 0;
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r, string c)
    {
        radius = r;
        setColor(c);
        setArea(3.14 * radius * radius);
    }

    void displayDetails() override
    {
        cout << "\nShape: Circle" << endl;
        cout << "Color: " << getColor() << endl;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << getArea() << endl;
    }
};

class Rectangle : public Shape
{
private:
    double length, width;

public:
    Rectangle(double l, double w, string c)
    {
        length = l;
        width = w;
        setColor(c);
        setArea(length * width);
    }

    void displayDetails() override
    {
        cout << "\nShape: Rectangle" << endl;
        cout << "Color: " << getColor() << endl;
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << getArea() << endl;
    }
};

int main()
{
    Shape *shapes[100];
    int count = 0;
    int choice;

    do
    {
        cout << "\nChoose Shape (1. Circle, 2. Rectangle, 3. Display Shape, 0. Exit): ";
        cin >> choice;

        if (choice == 1)
        {
            double r;
            string c;
            cout << "Enter radius: ";
            cin >> r;
            cout << "Enter color: ";
            cin >> c;
            shapes[count++] = new Circle(r, c);
        }
        else if (choice == 2)
        {
            double l, w;
            string c;
            cout << "Enter length: ";
            cin >> l;
            cout << "Enter width: ";
            cin >> w;
            cout << "Enter color: ";
            cin >> c;
            shapes[count++] = new Rectangle(l, w, c);
        }
        else if (choice == 3)
        {
            cout << "\n=== Shape Details ===" << endl;
            for (int i = 0; i < count; i++)
            {
                shapes[i]->displayDetails();
            }
        }
        else if (choice != 0)
        {
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 0);

    return 0;
}
