#ifndef COMPLEJO_H
#define COMPLEJO_H

class Complejo{
 private:
  int real_;
  int img_;
 public:
  Complejo(int real, int img);
  void Add(Complejo c1, Complejo c2);
  void Sub(Complejo c1, Complejo c2);
  void Print();
};

#endif