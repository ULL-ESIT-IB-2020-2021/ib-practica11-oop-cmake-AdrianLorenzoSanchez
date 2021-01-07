#include <iostream>
#include "complejo.h"

Complejo::Complejo(int real, int img){
    real_=real;
    img_=img;
}
void Complejo::Add(Complejo c1, Complejo c2){
    real_=c1.real_+c2.real_;
    img_=c1.img_+c2.img_;
}
void Complejo::Sub(Complejo c1, Complejo c2){
    real_=c1.real_-c2.real_;
    img_=c1.img_-c2.img_;
}
void Complejo::Print(){
    std::cout<<"("<<real_<< " " <<img_<<"i)"<<std::endl;
}