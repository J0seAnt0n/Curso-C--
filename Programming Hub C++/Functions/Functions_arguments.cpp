#include<iostream>

using namespace std;

int sum(int x, int y)
{
    int add= x + y;
    return add;
}

int main()
{
    int a=10;
    int b=20;

    int add =  sum(a,b);

    cout<<add;

    return 0;
}

//x y y son argumentos/parametros formales
//a y b son arguments/parametros actualesz