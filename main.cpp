#include <iostream>
#include "Batalla.h"

using namespace std;
int main() {

  Batalla* batalla = new Batalla();
  batalla->crearEjercito1();
  batalla->crearEjercito2();
  batalla->iniciarBatalla();
  batalla->decidirGanador();


}