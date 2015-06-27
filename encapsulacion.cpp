/*
  Este codigo ejemplifica la encapsulación y el uso de modificadores
  de acceso.

  @author Christian Gonzalez
  @aliases chrishenx, CPlayMasH (YouTube)

  @date 27/06/2015 
*/


#include <iostream>
#include <string.h>

using namespace std;

class Persona {
 public:
  Persona(int edad, char nombre[20]);
  
  void setEdad(int valor) {
    if (valor > 0 && valor <= 120) edad = valor;
  }
  
  void imprimir() const {
    cout << nombre << ", " << edad << endl;
  }
 private:
  int edad; 
  char nombre[20];
};

Persona::Persona(int edad, char nombre[20]) : edad(0)  {
  setEdad(edad);
  strcpy(this->nombre, nombre);
}

int main() {
  Persona p1(120, "Christian");
  
  p1.imprimir();
  
  p1.edad = 10;
  
  p1.imprimir();
  
  
  return 0;
}
