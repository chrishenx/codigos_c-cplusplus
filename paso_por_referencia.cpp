#include <iostream>

/**
  Este codigo muestra la utilizacion del paso por referencia.
  Util cuando se quieren tener parametros de salida en las funciones.

  @date 12 de Mayo de 2015
  
  @author Christian Gonzalez
  @author_alias chrishenx
 */

using namespace std;

void incrementar(int& valor1, int& valor2);

int main() {
  
  int a = 4, b = 0;
  
  incrementar(a, b);
  
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  
  
  return 0;
}

void incrementar(int& valor1, int& valor2) {
  valor1 += 1;
  valor2 += 1;
}

