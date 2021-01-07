#include <iostream>
#include <fstream>
#include "racional.h"
using namespace std;

int main(int argc, char* argv[]){
    ifstream fin("racionales.txt");
    Racional rac1, rac2;
    fin << rac1 << rac2;
    cout <<rac1<<" "<<rac2<<endl;
}