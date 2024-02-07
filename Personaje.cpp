#include "Personaje.h"

int Personaje::getSalud(){
  return this->salud;
}
int Personaje::getDanho(){
  return this->danho;
}
string Personaje::getTipo(){
  return this->tipo;
}

void Personaje::setSalud(int _salud){
  this->salud = _salud;
}
void Personaje::setDanho(int _danho){
  this->danho = _danho;
}
void Personaje::setTipo(string _tipo){
  this->tipo = _tipo;
}

void Personaje::atacar(Personaje* pj){
  pj->setSalud(pj->getSalud() - this->getDanho());  
}
Personaje::~Personaje(){
  cout<< "El " + getTipo() + " a caido :c" << endl;
}
void Personaje::morir(){
  delete this;
}