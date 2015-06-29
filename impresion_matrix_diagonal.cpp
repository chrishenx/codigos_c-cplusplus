/*
  Ejercicio:
    1. Llenar matriz cuadrada con letras del alfabeto
    Ej. 
      N = 6
      ABCDEF
      GHIJKL
      MNOPQR
      STUVWX
      YZABCD
      EFGHIJ
    2. Imprimir en diagonal la matriz
      F
      EL
      DKR
      CJQX
      BIPWD
      AHOVCJ
      GNUBI
      MTAH
      SZG
      YF
      E    
  
  Resuelto por Christian Gonzalez el 28/06/2015
  Mi canal de YouTube: CPlayMasH

 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    int N = 6;
    const int NN = N * N;
    char* matrix = new char[NN];
    // Llenar matriz
    for (int i = 0, k = 65; i < N; i++) {
      for (int j = 0; j < N; j++, k = k < 90 ? k + 1: 65) {
        cout << (matrix[i * N + j] = k);
      }
      cout << endl;
    }
    cout << endl;
    // Algoritmo que resuelve el ejercicio
    for (int j = N - 1; j >= 0; j--) {
      for (int i = 0; i < N - j; i++) {
        cout << matrix[i * N + j + i];
      }      
      cout << endl;
    }
    for (int i = 1; i < N; i++) {
      for (int j = 0; j < N - i; j++) {
        cout << matrix[(i + j) * N + j];
      }
      cout << endl;
    }
  
}
