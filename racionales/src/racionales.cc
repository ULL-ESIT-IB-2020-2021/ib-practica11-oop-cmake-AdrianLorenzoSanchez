#include <iostream>
#include "racional.h"
using namespace std;

int main(){
    int num1, num2, denom1, denom2;
    cout<<"Escribe el num y denom del primer racional: ";
    cin>>num1>>denom1;
    cout<<"Escribe el num y denom del segundo racional: ";
    cin>>num2>>denom2;
    Racional rac1{num1, denom1}, rac2{num2, denom2};
    Racional resultado{0,0};
    resultado.Sum(rac1, rac2);
    cout<<"Suma: ";
    resultado.Print();
    resultado.Rest(rac1, rac2);
    cout<<"Resta: ";
    resultado.Print();
    resultado.Product(rac1, rac2);
    cout<<"Producto: ";
    resultado.Print();
    resultado.Divide(rac1, rac2);
    cout<<"Division: ";
    resultado.Print();
}