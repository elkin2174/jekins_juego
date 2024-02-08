#ifndef Personaje_H
#define Personaje_H

#include <iostream>

using namespace std;

class Personaje{
  private:
    int salud, danho;
    string tipo;
  public:
    Personaje() : salud(0), danho(0){};
    Personaje(int _salud, int _danho, string _tipo) : salud(_salud), danho(_danho), tipo(_tipo){};
    ~Personaje(){};
    // Getters
    int getSalud();
    int getDanho();
    string getTipo();
    // Setters
    void setSalud(int _salud);
    void setDanho(int _danho);
    void setTipo(string _tipo);
    
    void atacar(Personaje* pj);
};
#else
  class Personaje;
#endif