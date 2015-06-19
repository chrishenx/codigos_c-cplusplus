#include <iostream>

/*
   Este código muestra una clase que representa números complejos.
   No contiene todos los elementos necesarios que debería cumplir el
   un buen diseño, pero esta solo es una muestra demostrativa.

   Author: Christian González (chrishenx)
*/

using namespace std;

class Complejo {
 public:
  // Constructor vacio
  Complejo() : re(0), im(0) {}
  // Constructor con argumentos de inicializacion para los atributos 
  Complejo(double re, double im) : re(re), im(im) {}
   
  // Método para mostrar los atributos por la consola 
  void imprimir() {
    cout << "(" << re << ", " << im << ")";
  } 
  
  // No ningun tipo de encapsulación porque no es requerida. 
  double re, im;    
};


// Funcion externa a la clase Complejo para sumar dos objetos de tipo complejo
Complejo sumar(Complejo c1, Complejo c2) {
  return Complejo(c1.re + c2.re, c1.im + c2.im);
}

int main() {
  Complejo c1(1, -1);
  Complejo c2(0, 1);
  Complejo res = sumar(c1, c2);
  
  
  c1.imprimir();
  cout << endl;
  c2.imprimir();
  cout << endl;
  res.imprimir();
}
