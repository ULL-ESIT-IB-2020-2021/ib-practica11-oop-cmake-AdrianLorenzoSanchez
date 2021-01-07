#include <iostream>
#include "racional.h"

Racional::Racional(double num, double denom){
  num_=num;
  denom_=denom;
}
void Racional::Print(){
  std::cout<<num_<<"/"<<denom_<<std::endl;
  }
void Racional::Sum(Racional rac1, Racional rac2){
  int num1=rac1.num_, denom1=rac1.denom_, num2=rac2.num_, denom2=rac2.denom_;
  denom_=denom1*denom2;
  num_=denom2*num1+denom1*num2;
}
void Racional::Rest(Racional rac1, Racional rac2){
  int num1=rac1.num_, denom1=rac1.denom_, num2=rac2.num_, denom2=rac2.denom_;
  denom_=denom1*denom2;
  num_=denom2*num1-denom1*num2;
}
void Racional::Product(Racional rac1, Racional rac2){
  int num1=rac1.num_, denom1=rac1.denom_, num2=rac2.num_, denom2=rac2.denom_;
  num_=num1*num2;
  denom_=denom1*denom2;
}
void Racional::Divide(Racional rac1, Racional rac2){
  int num1=rac1.num_, denom1=rac1.denom_, num2=rac2.num_, denom2=rac2.denom_;
  num_=num1*denom2;
  denom_=denom1*num2;
}
