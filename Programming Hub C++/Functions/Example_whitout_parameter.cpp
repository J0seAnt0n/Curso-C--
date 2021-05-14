#include <iostream>
using namespace std;

void area()
{
    float area_circle;
    float rad;
    
    cout<<"\n Enter the radius: ";
    cin>>rad;

    area_circle = 3.1416 * rad * rad;

    cout<<"\n Area of circle= "<<area_circle;
}

int main()
{

    area();
    area();
    return 0;
}