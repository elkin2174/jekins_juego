#include <iostream>
#include "Personaje.h"

using namespace std;
int main() {

  Personaje* pj1 = new Personaje(5,3,"Arquero++");
  Personaje* pj2 = new Personaje(5,1,"Dracon++");

  for( int i = 0; i < 2; i++){
    pj1->atacar(pj2);
  }
  cout<<pj2->getTipo();

}