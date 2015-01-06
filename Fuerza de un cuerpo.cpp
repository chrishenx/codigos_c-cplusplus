#include <iostream>

using namespace std;

// No creo que este programa sea para nada complicado.

int main() {
    float m;

    cout << "Programa que calcula la fuerza de un cuerpo." << endl;
    cout << "\nIntroduce el valor de la masa del cuerpo :  ";
    cin >> m;

    cout << "La fuerza/peso del cuerpo es: " << m * 9.81 << endl;

    return 0;
}
