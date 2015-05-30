#include <iostream>
#include <cstdlib>

/*
  Código que muestra el uso de Enumeraciones en C++.
  
  Este material es puramente educativo.
  
  @author Christian Gonzalez Leon
  @date 31 de Mayo de 2015.
*/

using namespace std;

enum Color {
  ROJO, VERDE, AZUL, NEGRO
};

int main() {
  
  int opcion;
  while (true) {
    system("cls");
    cout << "Que color quieres para la consola ?\n" << endl;
    cout << "  1. Rojo" << endl;
    cout << "  2. Verde" << endl;
    cout << "  3. Azul" << endl;
    cout << "  4. Negro" << endl;
    cout << "\nSeleccion una opcion: ";
    cin >> opcion;
      
    Color color = Color(opcion - 1);
    
    switch (color) {
    case ROJO:
      system("color CB");
      break;
    case VERDE:
      system("color A0");
      break;
    case AZUL:
      system("color 9F");
      break;
    case NEGRO:
      system("color 07");
      break;
    default:
      cout << "Color no disponible" << endl;
      system("pause");
    }
  }
  
  
  return 0;
}
