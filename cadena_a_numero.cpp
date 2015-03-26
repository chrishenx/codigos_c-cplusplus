#include <iostream>
#include <cstdlib>
#include <cctype>
#include <cmath>

using namespace std;

enum class Estado {INICIO, Q1, Q2, ENTERO, REAL, NO_RECONOCIDO};

double string2double(const string& inputString, bool& ok);

int main() {
    string cadena;
    cout.precision(15);
    while (true) {
        system("cls");
        cout << "Programa convierte una cadena a un numero!" << endl;
        cout << "Cadena: ";
        cin >> cadena;
        bool cadenaConvertida;
        double valor = string2double(cadena, cadenaConvertida);
        if (cadenaConvertida) {
            cout << "Valor: " << valor << endl;
        } else {
            cout << "Cadena no convertida" << endl;
        }
        cout << endl;
        system("pause");
    }

    return 0;
}

double string2double(const string& inputString, bool& ok)
{
    int digitosAntesDelPunto = 0;
    int digitosDespuesDelPunto = 0;
    int multiplicador = 1;
    unsigned int pos = 0;
    Estado actual = Estado::INICIO;
    bool cadenaRechazada = false;
    while (not cadenaRechazada and pos < inputString.length()) {
        char simbolo = inputString[pos];
        switch (actual) {
        case Estado::INICIO:
            if (isdigit(simbolo)) {
                actual = Estado::ENTERO;
                digitosAntesDelPunto++;
            } else if (simbolo == '+' or simbolo == '-') {
                actual = Estado::Q1;
                if (simbolo == '-') multiplicador = -1;
            } else {
                cadenaRechazada = true;
            }
            break;
        case Estado::Q1:
            if (isdigit(simbolo)) {
                actual = Estado::ENTERO;
                digitosAntesDelPunto++;
            } else {
                cadenaRechazada = true;
            }
            break;
        case Estado::Q2:
            if (isdigit(simbolo)) {
                actual = Estado::REAL;
                digitosDespuesDelPunto++;
            } else {
                cadenaRechazada = true;
            }
            break;
        case Estado::ENTERO:
            if (isdigit(simbolo)) {
                actual = Estado::ENTERO;
                digitosAntesDelPunto++;
            } else if (simbolo == '.') {
                actual = Estado::Q2;
            } else {
                cadenaRechazada = true;
            }
            break;
        case Estado::REAL:
            if (isdigit(simbolo)) {
                actual = Estado::REAL;
                digitosDespuesDelPunto++;
            } else {
                cadenaRechazada = true;
            }
            break;
        }
        pos++;
    }
    if (cadenaRechazada) {
        ok = false;
        return 0;
    }
    ok = true;
    /*
     * 66.89

     * 6 * 10 + 6 * 1 + 8 * 0.1 + 9 * 0.001
     */
    double resultado = 0;

    if (inputString[0] == '-' or inputString[0] == '+') {
        pos = 1;
    } else {
        pos = 0;
    }

    for (int i = digitosAntesDelPunto - 1; i >= 0; i--) {
//        cout << "Digito: " << inputString[pos] << endl;
//        cout << "Multiplicador: " << pow(10.0, i) << endl;
        resultado += (inputString[pos] - 48) * pow(10.0, i);
        pos++;
    }
    pos++;
    for (int i = 1; i <= digitosDespuesDelPunto; i++) {
//        cout << "Digito: " << inputString[pos] << endl;
//        cout << "Multiplicador: " << (1.0 / pow(10.0, i)) << endl;
        resultado += (inputString[pos] - 48) * (1.0 / pow(10.0, i));
        pos++;
    }
    return resultado * multiplicador;
}
