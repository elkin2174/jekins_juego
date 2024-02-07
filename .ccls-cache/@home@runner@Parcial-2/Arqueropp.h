#ifndef Arqueropp_H
#define Arqueropp_H

#include "Arquero.h"

class Arqueropp : public Arquero{

  public:
    Arqueropp() : Arquero(7,5,"Arqueropp"){}
    void morir() override {
      cout << "Arquero++ es inmortal" <<endl;
    }
};




#else
  class Arqueropp;
#endif