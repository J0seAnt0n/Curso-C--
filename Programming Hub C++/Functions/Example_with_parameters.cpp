#include<iostream>

using namespace std;

float triangle(float width, float height)
{
    float area;

    area= width * height / 2.0;

    return area;
}

int main()
{
    cout<<"Triangulo #1 :" << triangle(1.3,4.7) << endl;

    return 0;
}