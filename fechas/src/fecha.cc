#include <iostream>
#include "fecha.h"
using namespace std;

Fecha::Fecha(int day, int month, int year){
  year_ = year;
  month_ = month;
  day_ = day;
}
void Fecha::IsBisiesto(){
  if ((year_ % 4) == 0){
    cout << "Es bisiesto" << endl;
  }
  else {
    cout << "No es bisiesto" << endl;
  }
}
void Fecha::printDate(){
  cout<<day_<<"/"<< month_ <<"/" << year_ <<endl;
}
