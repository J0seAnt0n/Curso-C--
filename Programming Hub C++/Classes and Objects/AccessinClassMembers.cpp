#include<iostream>

using namespace std;

class myclass
{
    public:
    //accessible to entire program
    int i,j,k;
};

int main()
{
    myclass x,y;

    //acces to i,j and k is OK
    x.i =20;
    x.j = 5;
    x.k = x.i * x.j;

    //remember x.k and y.k are different
    y.k = 15;

    cout<<x.k<<"\n"<<y.k;
    return 0;
}