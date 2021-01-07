#include <iostream>
#include <sstream>
#include "fecha.h"
using namespace std;

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
    Fecha fecha{day, month, year};
    fecha.printDate();
  }
  
}
