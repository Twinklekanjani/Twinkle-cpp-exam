#include<iostream>

using namespace std;

class laptop
{
    private:
    string name,processor;
    int price;

    public:
    laptop(string n,int p,string pr)
    {
        name=n;
        price=p;
        processor=pr;
    }

    void display()
    {
        cout<<"laptop name: "<<name<<endl;
        cout<<"price: "<<price<<endl;
        cout<<"processor: "<<processor<<endl;
    }
};

int main()
{
    laptop l1("hp", 95000, "pavilion 15");
    laptop l2("Dell", 100000, "Dell Inspiron 15");

    cout << endl
         << " Details of First laptop : " << endl;
    l1.display();
    cout << endl
         << " Details of Second Laptop : " << endl;
    l2.display();

    return 0;
}