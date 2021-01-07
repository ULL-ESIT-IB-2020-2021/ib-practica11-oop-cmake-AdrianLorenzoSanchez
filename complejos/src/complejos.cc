#include <iostream>
#include "complejo.h"

int main(){
    Complejo c1{4,5}, c2{7,-8};
    Complejo resultado{0,0};
    resultado.Add(c1, c2);
    resultado.Print();
    resultado.Sub(c1,c2);
    resultado.Print();
}