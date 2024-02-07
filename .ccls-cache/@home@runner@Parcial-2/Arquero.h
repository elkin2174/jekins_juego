#ifndef Arquero_H
#define Arquero_H

#include "Personaje.h"

class Arquero : public Personaje{
  public:
    Arquero() : Personaje(4,3,"Arquero"){}
    Arquero(int _salud, int _danho, string _tipo) : Personaje(_salud, _danho, _tipo){};
};


#else
  class Arquero;
#endif