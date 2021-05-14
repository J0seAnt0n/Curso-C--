#include<iostream>
#include<conio.h>

using namespace std;

class BASECLASS
{
    int a;

    public:
    int b;
    void get_ab();
    int get_a();
    void show_a();
};

class DERIVEDCLASS: private BASECLASS
{
    int c;

    public:
    void mul();
    void display();
};

void BASECLASS::get_ab()
{
    cout<<"Enter Values for a and b for multiplication : ";
    cin>>a>>b;
}

int BASECLASS::get_a()
{
    return a;
}

void BASECLASS::show_a()
{
    cout<<"a= "<<a<<"\n";
}

void DERIVEDCLASS::mul()
{
    get_ab();
    c= b*get_a();
}

void DERIVEDCLASS:: display()
{
    show_a();
    cout<<"b = "<<b<<"\n";
    cout<<"c = "<<c<<"\n\n";
}


int main()
{
    DERIVEDCLASS d;

    d.mul();
    d.display();
    d.mul();
    d.display();
    return 0;
}