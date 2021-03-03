//OVIEDO NARES DAVID EMMANUEL
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

void Max(int a, int b);

int main()
{
    int N1,N2;
    cout<<"Programa que indica el mayor valor"<<endl;
    cout<<"Introduzca el primer valor: ";
    cin>>N1;
    cout<<endl;
    cout<<"Introdusca el segundo valor: ";
    cin>>N2;
    Max(N1,N2);
    return 0;
}

void Max(int a, int b)
{
    if (a>b)
    {
        cout<<endl<<a<<" es mayor"<<endl;
    }
    else if(a<b)
    {
        cout<<endl<<b<<" es mayor"<<endl;
    }
    else
    {
        cout<<"Error"<<endl;
    }
}
