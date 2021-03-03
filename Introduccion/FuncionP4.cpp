//OVIEDO NARES DAVID EMMANUEL
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int Max(int a, int b);

int main()
{
    int N1,N2,N3;
    cout<<"Programa que indica el numero mayor"<<endl;
    cout<<"Introdusca el primer valor:";
    cin>>N1;
    cout<<endl;
    cout<<"Introdusca el segundo valor:";
    cin>>N2;
    cout<<endl;
    cout<<"Introdusca el tercer valor:";
    cin>>N3;
    int max = Max(Max(N1,N2),N3);
    cout<<"El mayor es: "<<max;
    return 0;
}

int Max(int a, int b)
{
    int c;
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
