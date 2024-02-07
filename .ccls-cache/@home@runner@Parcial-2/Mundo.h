#ifndef Mundo_H
#define Mundo_H

#include "Personaje.h"
#include "Batalla.h"
class Mundo{
  private:
    string nombre;
    Batalla* batalla;

  public:
    Mundo() : nombre("Mundo de Jenkins"){};
};

#else 
  class Mundo;
#endif