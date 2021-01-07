#ifndef RACIONAL_H
#define RACIONAL_H

class Racional{
 private:
  double num_, denom_;
 public:
  Racional(double num, double denom);
  void Print();
  void Sum(Racional rac1, Racional rac2);
  void Rest(Racional rac1, Racional rac2);
  void Product(Racional rac1, Racional rac2);
  void Divide(Racional rac1, Racional rac2);
};

#endif