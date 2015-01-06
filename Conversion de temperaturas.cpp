#include <iostream>

using namespace std;

int main() {
    float C, K, F; // Grados centigrados, kelvin y fahrenheit

    cout << "Programa que muestra las equivalencias de temperaturas." << endl;
    cout << "\n Introdusca el valor de la temperatura en grados kelvin :  ";
    cin >> K;

	// Revisar tabla de equivalencias
    C = K - 273.15;
    F = K * (9 / 5) - 459.67;

    cout << "\nGrados centigrados:  " << C << endl;
    cout << "Grados kelvin:  " << K << endl;
    cout << "Grados fahrenheit:  " << F << endl;

    return 0;
}
