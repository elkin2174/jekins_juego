#ifndef Draconaurius_H
#define Draconaurius_H

#include "Personaje.h"

class Draconaurius: public Personaje{
  public:
    Draconaurius() : Personaje(2,1,"Draconaurius"){}
    Draconaurius(int _salud, int _danho, string _tipo) : Personaje(_salud, _danho, _tipo){};
};


#else
  class Draconaurius;
#endif