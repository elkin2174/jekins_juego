#ifndef Mundo_H
#define Mundo_H

#include "Arqueropp.h"
#include "Draconauriuspp.h"
#include <vector>

class Batalla{
  private:
    vector <Personaje*> ejercito1;
    vector <Personaje*> ejercito2;


  public:
    Batalla(){};

    //metodos
    void crearEjercito1();
    void crearEjercito2();
    void iniciarBatalla();
    void eliminarPersonaje(vector<Personaje*>& ejercito);
    void decidirGanador();



};

#else 
  class Mundo;
#endif