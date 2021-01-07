#include <iostream>
#include <sstream>
#include "fechas.h"
using namespace std;

class Fecha{
 private:
  int year_;
  int month_;
  int day_;
 public:
  Fecha(int year, int month, int day){
    year_ = year;
    month_ = month;
    day_ = day;
  }
  void IsBisiesto(){
    if ((year_ % 4) == 0){
      cout << "Es bisiesto" << endl;
    }
    else {
      cout << "No es bisiesto" << endl;
    }
  }
  void printDate(){
    cout<<day_<<"/"<< month_ <<"/" << year_ <<endl;
  }
};

int main(int argc, char* argv[]){
  int dates, day, month, year;
  stringstream converter1(argv[1]);
  converter1 >> day; 
  stringstream converter2(argv[2]);
  converter2 >> month; 
  stringstream converter3(argv[3]);
  converter3 >> year; 
  stringstream converter4(argv[4]);
  converter4 >> dates; 
  
  for (int i=0; i<dates; i++){
    if (day==31 && (month==1||month==3||month==1||month==5||month==7||month==8||month==10||month==12)){
      day=1;
      month++;
    }
    else if (day==30 && (month==4||month==6||month==9||month==11)){
      day=1;
      month++;
    }
    else if (day==28 && month==2){
      day=1;
      month++;
    }
    else{
      day++;
    }
    if (day==1&&month==13){
      month=1;
      year++;
    }
    cout << day << "/" << month << "/" << year << "/" << endl;
  }
  
}
