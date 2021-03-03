//OVIEDO NARES DAVID EMMANUEL
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

void suma(int a, int b);

int main()
{
    int N1, N2;
    cout<<endl;
    cout<<"Programa que realiza una suma";
    cout<<endl;
    cout<<"Introdusca el Primer valor: ";
    cin>>N1;
    cout<<endl;
    cout<<"Introdusca el segundo valor: ";
    cin>>N2;
    cout<<endl;
    suma(N1,N2);
    return 0;
}

void suma(int a, int b)
{
    int c=a+b;
    cout<<"El resultado de ";
    cout<<a;
    cout<<" + ";
    cout<<b;
    cout<<" es: ";
    cout<<c;
}
