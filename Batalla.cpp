#include "Batalla.h"

void Batalla::crearEjercito1(){
  // arquero++
  ejercito1.push_back(new Arqueropp());
  ejercito1.push_back(new Arqueropp());
  // arquero++
  ejercito1.push_back(new Arquero());
  ejercito1.push_back(new Arquero());
  ejercito1.push_back(new Arquero());
  ejercito1.push_back(new Arquero());
  ejercito1.push_back(new Arquero());
}
void Batalla::crearEjercito2(){
  // arquero++
  ejercito2.push_back(new Draconauriuspp());
  ejercito2.push_back(new Draconauriuspp());
  ejercito2.push_back(new Draconauriuspp());
  ejercito2.push_back(new Draconauriuspp());
  ejercito2.push_back(new Draconauriuspp());
  // arquero++
  ejercito2.push_back(new Draconaurius());
  ejercito2.push_back(new Draconaurius());

}
void Batalla::eliminarPersonaje(vector<Personaje*>& ejercito){
  for (int i = 0; i < ejercito.size(); i++){
    if(ejercito[i]->getTipo() != "Arqueropp" && ejercito[i]->getSalud()<0){
      delete ejercito[i];
      ejercito.erase(ejercito.begin() + i);
  }
  }
}

void Batalla::iniciarBatalla(){
  cout<< "Ejercito 1 comienza con " << ejercito1.size() << " Arqueros." <<endl;
  cout<< "Ejercito 2 comienza con " << ejercito2.size() << " Draconaurius." <<endl;

  int i = 0;
  int j = 0;
  while( ejercito1.size() > 0 || ejercito2.size() > 0){
    
    j = rand()%ejercito1.size();
    i = rand()%ejercito2.size();
    cout << "Tamaño ejercito 1: " <<ejercito1.size() <<endl;
    cout << "Tamaño ejercito 2: " <<ejercito2.size() <<endl;
    if (ejercito1[i]->getSalud() > 0)
    {
      cout << "El " << ejercito1[i]->getTipo() + " " +to_string(i) << " ha atacado a "
      << ejercito2[j]->getTipo() + " " + to_string(j)<<endl;
      ejercito1[i]->atacar(ejercito2[j]);
      eliminarPersonaje(ejercito2);
    }
    if (ejercito2[i]->getSalud() > 0)
    {
      cout << "El " << ejercito2[j]->getTipo() + " " +to_string(i) << " ha atacado a "
      << ejercito1[i]->getTipo() + " " + to_string(j)<<endl;
      ejercito2[j]->atacar(ejercito1[j]);
      eliminarPersonaje(ejercito1);
    }
  }
}
