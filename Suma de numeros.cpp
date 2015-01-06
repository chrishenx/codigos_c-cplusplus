#include <iostream>

using namespace std;

int main() {

    int n;

    cout << "Programa que calcula la sumatoria desde 1 hasta n." << endl;
    cout << "\nIntroduce el valor de n :  ";
    cin >> n;

	// Prueba escribir la expresion de otra manera
	// y comprueba el resultado
    int sumatoria = n * (n + 1) / 2;

    cout << "La sumatoria es: " << sumatoria << endl;

    return 0;
}
