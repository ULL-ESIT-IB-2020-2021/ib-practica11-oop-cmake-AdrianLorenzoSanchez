#ifndef FECHA_H
#define FECHA_H

class Fecha{
 private:
  int year_;
  int month_;
  int day_;
 public:
  Fecha(int year, int month, int day);
  void IsBisiesto();
  void printDate();
};

#endif