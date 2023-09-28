/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;

int main()
{
    int a, b, c, d ;
    cout<<"podaj liczbe: "<<endl;
    cin>> a;
    cout<<"podaj liczbe: "<<endl;
    cin >>b;
    cout<<"podaj typ dzialania: 1-dodawanie, 2-odejmowanie, 3-mnozenie, 4-dzielenie. "<<endl;
    cin>> c;
    if (c==1) 
    {
  d=a+b;
} 
else if (c==2) 
{
 d=a-b;
} 
else if (c==3)
{
 d=a*b;
}
else if (c==4)
{
    d=a/b;
}
else if (c==0)
{
    return 0;
}

cout<< "Wynik: "<<  d <<endl;
    return 0;
}
