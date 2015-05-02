/** 
  Funciones en C++
  Codigo que muestra la utilizacion de una funcion para
  contar en número de elementos con determinado valor dentro
  de un arreglo.

  @author Christian González
  @date May 1st, 2015
 */


#include <iostream>

using namespace std;

int cuenta_elementos(int arreglo[], int n, int valor);

int main() {
	const int N = 7;
  int arreglo[7] = {1,1,3,-5, 0, 1 , 0};

	cout << "Cantidad de 1's dentro del arreglo: "
		   << cuenta_elementos(arreglo, N, 1) << endl;

	cout << "Cantidad de 0's dentro del arreglo: "
		   << cuenta_elementos(arreglo, N, 0) << endl;


	return 0;
}

int cuenta_elementos(int arreglo[], int n, int valor) {
	int repeticiones = 0;
  for (int i = 0; i < n; i++) {
		if (arreglo[i] == valor) {
			repeticiones++;
		}
  }
	return repeticiones;
}
