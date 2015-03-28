#include <iostream>
#include <cstdlib>
#include <cctype>

using namespace std;

enum class Estado {INICIO, Q1, Q2, ENTERO, REAL, NO_RECONOCIDO};

Estado reconocerNumero(const string& inputString);

int main() {
    cout << "Programa que reconoce si un string es un numero entero o real" << endl;
    string inputString;
    cin >> inputString;
    Estado ultimo = reconocerNumero(inputString);
    if (ultimo == Estado::ENTERO) {
        cout << "La cadena ingresada es un numero entero" << endl;
    } else if (ultimo == Estado::REAL) {
        cout << "La cadena ingresada es un numero real" << endl;
    } else {
        cout << "La cadena ingresada no es un numero entero ni real" << endl;
    }

    cout << endl;
    system("pause");
    system("cls");
	
    /* 
      NO USES ESTA RECURSIVIDAD, MEJOR ENVUELVE EL CÓDIGO EN UN WHILE INFINITO, 
      SOLO ES UNA SOLUCIÓN RAPIDA PARA DEBUGEAR, NO LO PONGAS EN LA VERSION FINAL DE TU PROGRAMA.
     */
    main(); 

    return 0;
}

Estado reconocerNumero(const string& inputString)
{
    unsigned int pos = 0;
    Estado actual = Estado::INICIO;
    bool cadenaRechazada = false;
    while (not cadenaRechazada and pos < inputString.length()) {
        char simbolo = inputString[pos];
        switch (actual) {
        case Estado::INICIO:
            if (isdigit(simbolo)) {
                actual = Estado::ENTERO;
            } else if (simbolo == '+' or simbolo == '-') {
                actual = Estado::Q1;
            } else {
                cadenaRechazada = true;
            }
            break;
        case Estado::Q1:
            if (isdigit(simbolo)) {
                actual = Estado::ENTERO;
            } else if (simbolo == '.') {
                actual = Estado::Q2;
            } else {
                cadenaRechazada = true;
            }
            break;
        case Estado::Q2:
            if (isdigit(simbolo)) {
                actual = Estado::REAL;
            } else {
                cadenaRechazada = true;
            }
            break;
        case Estado::ENTERO:
            if (isdigit(simbolo)) {
                actual = Estado::ENTERO;
            } else if (simbolo == '.') {
                actual = Estado::Q2;
            } else {
                cadenaRechazada = true;
            }
            break;
        case Estado::REAL:
            if (isdigit(simbolo)) {
                actual = Estado::REAL;
            } else {
                cadenaRechazada = true;
            }
            break;
        }
        pos++;
    }
    if (cadenaRechazada) {
        return Estado::NO_RECONOCIDO;
    }
    return actual;
}
